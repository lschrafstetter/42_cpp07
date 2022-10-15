/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:08:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/15 11:57:41 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// FROM THE EVALUATION SHEET
class Awesome {
 public:
  Awesome(void) : _n(42) { return; }
  int get(void) const { return this->_n; }

 private:
  int _n;
};

std::ostream& operator<<(std::ostream& o, Awesome const& rhs) {
  o << rhs.get();
  return o;
}

template <typename T>
void print(const T& x) {
  std::cout << x << std::endl;
  return;
}

// --------------------------------------------------------

int main() {
  std::cout << GREEN << "----- evaluation sheet tests -----" << std::endl
            << std::endl;

  int tab[] = {0, 1, 2, 3, 4};  // <--- I never understood why you can't write
                                // int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter(tab, 5, print);
  iter(tab2, 5, print);

  std::cout << YELLOW << std::endl
            << "----- added own test -----" << std::endl
            << std::endl;

  iter<int>(tab, 5, print);
  std::cout << std::endl;
  iter<int>(tab, 5, increment<int>);
  iter<int>(tab, 5, print);

  std::cout << BLUE << std::endl
            << "----- one more -----" << std::endl
            << std::endl;

  char tab3[] = {'H', 'E', 'L', 'L', 'O'};
  iter<char>(tab3, 5, print);
  std::cout << std::endl;
  iter<char>(tab3, 5, increment<char>);
  iter<char>(tab3, 5, print);
  return 0;
}
