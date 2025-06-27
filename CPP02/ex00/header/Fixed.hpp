/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:47:43 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/24 22:48:35 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
	
		Fixed();
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &src);

		int getRawBits(void)const;
		void setRawBits(int const raw);

};
