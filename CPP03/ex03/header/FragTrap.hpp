/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:21:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 15:58:06 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		
		FragTrap(std::string name);
		~FragTrap();
		void attack(const std::string& target);
		
		void highFivesGuys(void);
		void	status(void);
		
	protected :
	
};
