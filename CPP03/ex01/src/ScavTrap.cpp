/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:21:47 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/17 15:37:15 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	_Guard = 0;
	std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\n\nDestructeur Scav trap appeler" <<std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_Guard == 0)
		{
			std::cout << "Captain ScavTrap " << this->_name << " rentre en mode garde" << std::endl;
			this->_Guard = 1;
		}
	else
	{
			std::cout << "Captain ScavTrap " << this->_name << " sort du mode garde" << std::endl;
			this->_Guard = 0;
	}
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_Energy <= 0)
			std::cout << "\n\n" << this->_name << " n'a plus d'energie, il ne peut rien faire." << std::endl;
		else
		{
			this->_Energy -= 1;
			std::cout << "Le scav trap attaque " << target << std::endl;
		}
	
}