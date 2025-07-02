/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:56:47 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/02 19:44:23 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"
#include <iostream>

int main( void ) {

Fixed a(0);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


std::cout << "a   = " << a << "\n" << std::endl;
std::cout << "++a = " <<  ++a << "\n" << std::endl;
std::cout << "a   = " <<  a << "\n" << std::endl;
std::cout <<  "a++ = " << a++ << "\n" << std::endl;
std::cout << "a   = " <<  a << "\n" << std::endl;
std::cout << "b   = " <<  b << "\n" << std::endl;
std::cout <<  "max (a,b) = " << Fixed::max( a, b ) << std::endl;


return (0);

}
