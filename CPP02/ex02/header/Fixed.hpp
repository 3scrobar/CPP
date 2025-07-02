/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:47:43 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/02 19:32:17 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &src);
		
		float operator+(Fixed nbr2);
		float operator-(Fixed nbr2);
		float operator*(Fixed nbr2);
		float operator/(Fixed nbr2);

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);

		bool operator>(Fixed nbr2) const;
		bool operator<(Fixed nbr2) const;
		bool operator>=(Fixed nbr2) const;
		bool operator<=(Fixed nbr2) const;
		bool operator==(Fixed nbr2) const;
		bool operator!=(Fixed nbr2) const;
		
		
		float toFloat(void)const;
		int toInt(void)const;
		
		int getRawBits(void)const;
		
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
