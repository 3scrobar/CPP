/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:20:45 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/10 10:20:21 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongCat.hpp"
#include "../header/WrongAnimal.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructeur de WrongCat appeler." << std::endl;
	this->_type = "Chat d'un type indeterminer.";
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	std::cout << "Constructeur de copie pour WrongCat apperler." << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructeur pour WrongCat appeler." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << "Constructeur par assignation de WrongCat appeler." << std::endl;
	if(this->_type == cpy._type)
		return (*this);
	this->_type = cpy._type;
	return(*this);
}

std::string WrongCat::getType(void)const
{
	return (this->_type);
}

void WrongCat::makeSound()const
{
	std::cout << "ce chat bizare aboie comme un cochon" << std::endl;
}
