/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:22:05 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/15 15:58:19 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Claptrap
{
	public :

		Claptrap();
		Claptrap(std::string name, int hp, int energy, int damage);
		~Claptrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHp(void);
		void recharge(void);
		int	getStatus(void);
		
	private :
	
		std::string _name;
		int _HitPoint;
		int _Energy;
		int _Damage;
		int _HpMax;
		int _EnergyMax;
		int _Dead;
};
