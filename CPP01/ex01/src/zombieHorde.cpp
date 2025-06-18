/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:12:01 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 13:42:07 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"
#include <string>
#include <sstream>  // ajout nécessaire pour stringstream

Zombie** zombieHorde(int N, std::string name)
{
	Zombie** horde = new Zombie*[N];
	
	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << i;
		horde[i] = new Zombie(name + ss.str());
	}
	
	return horde;
}

