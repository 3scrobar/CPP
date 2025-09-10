/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:02:10 by tle-saut          #+#    #+#             */
/*   Updated: 2025/08/04 14:26:53 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Dog.hpp"


Dog::Dog() : Animal()
{
	std::cout << "Constructeur de Dog appeler." << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &cpy) : Animal()
{
	std::cout << "Constructeur de Dog par copie appeler" << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "Destructeur de Dog appler" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "constructeur par copie appeler" << std::endl;
	if (this->_type == src._type)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << this->getType() << " grogne mechament" << std::endl;
}
