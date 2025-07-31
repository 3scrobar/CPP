/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:16:07 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/31 15:31:29 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"

Animal::Animal():_type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;

}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &other)
		return *this;

	this->_type = other._type;
	return *this;
}

std::string Animal::getType(void)const
{
	return (this->_type);
}

void Animal::MakeSound(void)const
{
	std::cout << "Cet animal ne produit aucun son." << std::endl;
}
