/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:21:47 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 16:44:44 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap constructor called for " << _name << std::endl;
	this->_HitPoint = 100;
	this->_Energy = 100;
	this->_Damage = 30;

}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructeur FragTrap appeler" <<std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " veut un high five." << std::endl;
}

void	FragTrap::status(void)
{
	std::cout << "Hp : " << this->_HitPoint << std::endl;
	std::cout << "Energy : " << this->_Energy << std::endl;
	std::cout << "Degat : " << this->_Damage << std::endl;
	
}

void FragTrap::attack(const std::string& target)
{
	if (this->_Energy <= 0)
			std::cout << "\n\n" << this->_name << " n'a plus d'energie, il risque de s endormir." << std::endl;
		else
		{
			this->_Energy -= 1;
			std::cout << "Le FragTrap attaque " << target << std::endl;
		}
	
}
