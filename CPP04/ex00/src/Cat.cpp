/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:37:36 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/31 15:48:52 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructeur du chat par default appeler";
	this->_type = "Cat";
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Constructeur de Cat par copie appeler" << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "Destructeur par default de Cat appeler" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat assignation contstructeur appeler" << std::endl;
	if (this->_type == cpy._type)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

void Cat::MakeSound(void)const
{
	std::cout << this->getType() << " fait **Meooowwwww** " << std::endl;
}
