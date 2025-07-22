/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:33:23 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 16:42:57 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name; // propre à DiamondTrap

public:
	DiamondTrap(std::string name);
	~DiamondTrap();

	void attack(const std::string& target);
	int takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void recharge(void);
	void	status(void);
	void whoAmI();
	int getHp(void);
	
private:
		int _HitPoint;
		int _Energy;
		int _Damage;
};

