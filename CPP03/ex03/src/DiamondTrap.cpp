/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:33:05 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 16:44:55 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/DiamondTrap.hpp"
#include <unistd.h>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name")
{
	this->_name = name;
	this->_HitPoint = FragTrap::_HitPoint;
	this->_Energy = ScavTrap::_Energy;
	this->_Damage = FragTrap::_Damage;
	this->_EnergyMax = this->_Energy;
	this->_HpMax = this->_HitPoint;
	std::cout << "Constructeur DiamondTrap pour " << this->_name << " appeler" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\n\nDestructeur DiamondTrap pour" << this->_name << " appeler" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Je suis " << this->_name << ", et mon nom Claptrap est " << this->ClapTrap::_name << std::endl;
}

int	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "\n\n" << this->_name << " subi " << amount << " point de degats." << std::endl;
	this->_HitPoint -= amount;
	if (this->_HitPoint <= 0)
		return(1);
	else
		std::cout << "\n\n" << this->_name << " a mal, c.est un diamand mais il lui reste " << this->_HitPoint << " PV.";
	return(0);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy <= 0)
		std::cout << "\n\n" << this->_name << " n'a plus d'energie, il ne peut pas bouger." << std::endl;
	else
	{
		this->_Energy = this->_Energy - 1;
		this->_HitPoint += amount;
		if (this->_HitPoint > this->_HpMax)
			this->_HitPoint = this->_HpMax;
		std::cout << "\n\n" << this->_name << " se renforce de " << amount << " et a maintenant " << this->_HitPoint << " PV." << std::endl;
	}
	
}

void	DiamondTrap::attack(const std::string& target)
{
	if (this->_Energy <= 0)
		std::cout << "\n\n" << this->_name << " n'a plus d'energie, il doit se recharger." << std::endl;
	else
	{
		this->_Energy -= 1;
		std::cout << "\n\n" << this->_name << " se met a attaquer furieusement " << target << " et le deglingue de " << this->_Damage << " points." << std::endl;
	}
}
void	DiamondTrap::recharge(void)
{
	std::cout << "\n\n" << this->_name << " se recharge" << std::endl;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::flush;
	sleep(1);
	std::cout << "||" << std::endl;
	this->_Energy = this->_EnergyMax;
	std::cout << this->_name << " est mainteant entierement recharger et a " << this->_Energy << " point d'energie";
}

void	DiamondTrap::status(void)
{
	std::cout << "Hp : " << this->_HitPoint << std::endl;
	std::cout << "Energy : " << this->_Energy << std::endl;
	std::cout << "Degat : " << this->_Damage << std::endl;
	
}

int	DiamondTrap::getHp(void)
{
	return (this->_HitPoint);
}
