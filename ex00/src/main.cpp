/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:08:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/15 11:06:53 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Awesome
{
 public:
  Awesome(void) : _n(0) {}
  Awesome( int n ) : _n( n ) {}
  Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
  bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
  bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
  bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
  bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
  bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
  bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
 private:
  int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void) {
	std::cout << "----- pdf test -----" << std::endl << std::endl;
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << std::endl << "----- eval sheet test -----" << std::endl << std::endl;
	Awesome e(2), f(4);

	std::cout << e << " " << f << std::endl;
	swap(e, f);
	std::cout << e << " " << f << std::endl;
	std::cout << max(e, f) << std::endl;
	std::cout << min(e, f) << std::endl;
	return 0;
}