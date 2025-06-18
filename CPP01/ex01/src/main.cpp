/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:41:35 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 13:47:10 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

#include <iostream>
#include <limits>

int	main(void) {

	int N;
	Zombie** horde;
	
	std::cout << "\033[095mWelcome to the Horde Creator " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "\n\nEnter how many dead you want to recycle :";
	std::cin >> N;
	std::cout << "\nBegining....." << std::endl;
	horde = zombieHorde(N, "theodort");
	for (int i = 0; i < N; i++)
		horde[i]->announce();
	for (int i = 0; i < N; i++)
		delete horde[i];
	delete[] horde;
	
}