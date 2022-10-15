/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:09:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/15 11:56:46 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

template<typename T>
void increment(T &element) {
  element ++;
}

template<typename T>
void iter(T *array_address, int length, void(* function)(T &target)) {
  for (int i = 0; i < length; i++) 
    function(array_address[i]);
}

template<typename T>
void iter(T *array_address, int length, void(* function)(const T &target)) {
  for (int i = 0; i < length; i++) 
    function(array_address[i]);
}

#endif