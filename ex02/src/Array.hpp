/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:09:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/17 18:06:17 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

template <typename T>
class Array {
 public:
  Array() {
    size_ = 0;
    array_ = NULL;
  }

  Array(unsigned int size) {
    this->size_ = size;
    this->array_ = new T[size];
  }

  Array(const Array &copy) {
    if (copy.size() > 0) {
      this->size_ = copy.size_;
      this->array_ = new T[copy.size_];
      for (unsigned int i = 0; i < copy.size_; i++)
        this->array_[i] = copy.array_[i];
    }
  }

  ~Array() {
    if (this->size_ != 0) delete[] array_;
  }

  Array &operator=(Array other) {
    this->swap(*this, other);
    return *this;
  }

  T &operator[](unsigned int i) {
    if (i >= this->size_)
      throw std::out_of_range("Index out of range");
    return this->array_[i];
  }

  const T &operator[](unsigned int i) const {
    if (i >= this->size_)
      throw std::out_of_range("Index out of range");
    return this->array_[i];
  }

  unsigned int size(void) const { return this->size_; }

 private:
  unsigned int size_;
  T *array_;
  void swap(Array &first, Array &second) {
    std::swap(first.size_, second.size_);
    std::swap(first.array_, second.array_);
  }
};

#endif