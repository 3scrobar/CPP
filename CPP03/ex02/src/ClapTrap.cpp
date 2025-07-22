/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:22:02 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/17 15:33:58 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"
#include <unistd.h>

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoint(10), _Energy(10), _Damage(0)
{
	std::cout << "Constructeur de clap trap par default appeler" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int energy, int damage) : _name(name), _HitPoint(hp), _Energy(energy),
		 _Damage(damage), _HpMax(hp), _EnergyMax(energy), _Dead(0)
{
	std::cout << "Constructeur surcharge de Clap trap appeler" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructeur clap trap apeller" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\n\n" << this->_name << " subi " << amount << " point de degats." << std::endl;
	this->_HitPoint -= amount;
	if (this->getHp() <= 0)
		this->_Dead = 1;
	else
		std::cout << "\n\n" << this->_name << " a mal, il est tous cabosser et il lui reste " << this->_HitPoint << " PV.";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy <= 0)
		std::cout << "\n\n" << this->_name << " n'a plus d'energie, il doit se recharger." << std::endl;
	else
	{
		this->_Energy -= 1;
		this->_HitPoint += amount;
		if (this->_HitPoint > this->_HpMax)
			this->_HitPoint = this->_HpMax;
		std::cout << "\n\n" << this->_name << " se repare de " << amount << " et a maintenant " << this->_HitPoint << " PV." << std::endl;
	}
	
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Energy <= 0)
		std::cout << "\n\n" << this->_name << " n'a plus d'energie, il doit se recharger." << std::endl;
	else
	{
		this->_Energy -= 1;
		std::cout << "\n\n" << this->_name << " se met a attaquer furieusement " << target << " et lui faisant d'impressionant degats de " << this->_Damage << " points." << std::endl;
		if (this->_Damage == 0)
			std::cout << "😶 , peut on parler de degats ?? 🤔" << std::endl;
	}
}

int	ClapTrap::getHp(void)
{
	return (this->_HitPoint);
}
void	ClapTrap::recharge(void)
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

int	ClapTrap::getStatus(void)
{
	return(this->_Dead);
}
