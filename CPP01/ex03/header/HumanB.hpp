/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:35 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:18:07 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../header/Weapon.hpp"

class HumanB {
	
	public :
	
		HumanB(const std::string& name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon weap);
	private :
	
		std::string _name;
		Weapon* weapons;
};

