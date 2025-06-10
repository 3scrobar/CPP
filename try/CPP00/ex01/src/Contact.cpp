/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:53:36 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/10 15:32:31 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

std::string Contact::_field_name[5] =
{
	"FirstName",
	"LastName",
	"NickName",
	"Phone Number",
	"Darkest Secret"
};

Contact :: Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact :: ~Contact()
{
	return;
}

bool Contact :: set_contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_field_name[i] << ":" << std::endl;
		while (!(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You pressed ^D. Exiting the phonebook" << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "\033[33Empty contact information not allowed.\033[0m" << std::endl;
				std::cout << "Please enter the " << Contact::_field_name[i] << " :" <<std::endl;
			}
		}
	}
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}