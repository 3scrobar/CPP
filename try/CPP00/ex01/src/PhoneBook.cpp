/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:41:39 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/10 15:56:46 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_index = 0;
	_full = false;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}
void	PhoneBook::set_informations(void)
{
	std::string input;
	if (this->_full == false)
	{
		std::cout << "This is your contact #" << this->_index + 1 << std::endl;
		if (this->_contact[this->_index].set_contact() == true)
		{
			if (this->_index == 7)
				this->_full = true;
			else
				this->_index++;
		}
	}
	else
	{
		std::cout << "Your PhoneBook is full.\nIf you want to add a new contact, i'm going to delete the first i had" << std::endl;
		std::cout << "If you want to proceed, press '1' and confirm with 'enter',\n if not press 'enter'" << std::endl;
		std::cout << "Your choice: ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << "You presset the nuke button, exiting now and destroy all." << std::endl;
			std::exit(0);
		}
		else if (input.compare("1") == 0)
		{
			for (int i = 1;i < 8; i++)
				this->_contact[i - 1] = this->_contact[i];
			std::cout << "This is your contact #8" << std::endl;
			this->_contact[this->_index].set_contact();
		}
		else
			std::cout << "Back to main menu without deleting and creating a contact." << std::endl;
			
	}
}

void	PhoneBook::get_informations(void) const
{
	int	index;
	
	if (this->_index == 0)
		std::cout << "\033[31mPlease add at least one contact before search\033[0m" << std::endl;
	else
	{
		std::string input;
		std::cout << "Please tell me which contact index you want to show" << std::endl;
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || (std::atoi(input.c_str()) -1 >= this->_index && this->_full == false))
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You pressed the nuke button, godd bye" << std::endl;
				std::exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[0mOnly digits in range of 1 to 8 are allowed" << std::endl;
				std::cout << "Please tell me which one you want to see. (0 to 8)" <<std ::endl;
			}
			else if (std::atoi(input.c_str()) - 1 >= this->_index && this->_full == false)
			{
				std::cout << "\033[33mYou only have " << this->_index << " Contacts saved.\033[0m" << std::endl;
				std::cin.clear();
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
	index = std::atoi(input.c_str());
	if (index > 0)
	{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			this->_contact[index - 1].get_contact(index);
			std::cout << "|-------------------------------------------|" << std::endl;
		}
	else
			std::cout << "Exiting search mode now." << std::endl;
	}
}