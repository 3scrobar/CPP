/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:17:46 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 13:22:27 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
	
	public :
	
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);

	private :
	
		std::string _name;
	
};

		Zombie* newZombie(std::string name);
		Zombie** zombieHorde(int N, std::string name);
		