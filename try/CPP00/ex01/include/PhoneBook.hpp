/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:41:42 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/10 15:26:02 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <cstdlib>
#include "../include/Contact.hpp"

class PhoneBook {
	private :
	Contact _contact[8];
	int		_index;
	bool	_full;

	public :
		PhoneBook(void);
		~PhoneBook(void);
		
		void	set_informations(void);
		void	get_informations(void) const;
		void	show_instructon(void);
};