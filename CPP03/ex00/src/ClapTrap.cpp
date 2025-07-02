/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:02:46 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/02 20:22:04 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoint(10), _Energy(10), _AttackDamage(0)
{
	std::cout << "Claptrap se reveille, il s'appelle " << _name;
	std::cout << " possede " << _HitPoint << "point de vie.\n";
	std::cout << "Il fait " << _AttackDamage << "degats et a " << _Energy << "points d energy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " explose dans une immense detonation" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << _name << " cible " << target << "avec une attaque causant " << _AttackDamage << " degats" <<std::endl;
	
}
