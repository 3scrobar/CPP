/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:10:47 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/10 10:18:41 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructeur de WrongAnimal appeler" << std::endl;
	this->_type = "mauvais type pour WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "Constructeur de copie de WrongAnimal appeler" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructeur de WrongAnimal appeler" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "Operateur de copie appeler par WrongAnimal." << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

std::string WrongAnimal::getType()const
{
	return(this->_type);
}

void WrongAnimal::makeSound()const
{
	std::cout << this->_type << " ne peut pas faire de son." << std::endl;
}

