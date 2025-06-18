/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:41:35 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 12:12:04 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

#include <iostream>
#include <limits>

int	main(void) {

	int	choice;
	std::string name1;
	std::string name2;
	Zombie* z;

	std::cout << " \033[35mType 1 if you want to choose the name or anything else to auto choose\033[0m" << std::endl;
	std::cin >> choice;
	switch (choice)
	{
	case 1: {
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Enter the first name : ";
		std::getline(std::cin, name1);
		std::cout << "Enter the second name : ";
		std::getline(std::cin, name2);
		std::cout << std::endl;
		z = newZombie(name1);
		z->announce();
		delete z;
		std::cout << "\n\n\n";
		randomChump(name2);
		break;
	}
	default:
	{
		z = newZombie("Roberto");
		z->announce();
		delete z;
		std::cout << "\n\n\n";
		randomChump("Edouard");
		break;
	}
	
	
	}
	
	

	
}