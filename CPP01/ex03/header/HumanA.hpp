/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:05:10 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "../header/Weapon.hpp"

class	HumanA {
	
	public :
	
		HumanA(const std::string& name, Weapon& weapons);
		~HumanA(void);
		void	attack(void) const;
		
	private :
	
		std::string _name;
		Weapon& weapons;
		
	
	
};