/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:21:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 15:58:00 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(const std::string& target);
		
		void guardGate();
		
	protected :
		int _Energy;
	private :
		int _Guard;
};
