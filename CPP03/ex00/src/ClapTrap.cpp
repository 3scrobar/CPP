/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:02:46 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/03 10:50:41 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _HitPoint(10), _AttackDamage(0), _Energy(10), _name(name)
{
	std::cout << "Claptrap se reveille, il s'appelle " << _name;
	std::cout << " possede " << _HitPoint << " point de vie.\n";
	std::cout << "Il fait " << _AttackDamage << " degats et a " << _Energy << " points d energy\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " explose dans une immense detonation" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energy > 0)
		std::cout << "ClapTrap " << _name << " attack " << target << " causing  " << _AttackDamage << " point of damage !" <<std::endl;
	this->_Energy--;
	if (this->_Energy <= 0)
		{
			this->_Energy = 0;
			std::cout << "ClapTrap " << this->_name << " has depleted energy" << std::endl;
		}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage." << std::endl;
	this->_HitPoint -= amount;
	if (_HitPoint <= 0)
	{
		_HitPoint = 0;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		this->~ClapTrap();
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoint += amount;
	if (this->_HitPoint > 10)
		this->_HitPoint = 10;
	std::cout << "ClapTrap " << this->_name << " repaired of " << amount << " points and has " << _HitPoint << " HitPoint" << std::endl;
}
