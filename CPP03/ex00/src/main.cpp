/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:21:59 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/15 16:13:52 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"
#include <iostream>
#include <limits>
#include <sstream>

int main(void)
{
	int choice;
	std::string input;
	int nombre;

	std::cout << "Entre un nom : ";
	std::getline(std::cin, input);
	Claptrap clap(input, 10, 10, 0);
	
	
	while (1 || clap.getStatus() == 0)
	{
		std::cout << "\n\nQue veux tu faire ??\n1:Attaquer\n2:Se reparer\n3:Se recharger\n4:Prendre des degats\n\n5:Quitter"<<std::endl;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cin.clear(); // remet cin en état normal
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // vide le buffer
			std::cout << "Choix invalide. Réessaie." << std::endl;
			continue; // passe au tour suivant de la boucle
		}
		switch(choice)
		{
			case(1):
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Qui veut tu attaquer ?" <<std::endl;
				std::getline(std::cin, input);
				clap.attack(input);
				break;
			}
			case(2):
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "De combien de points veux tu te reparer ?" << std::endl;
				std::getline(std::cin, input);
				std::stringstream ss(input);
				ss >> nombre;
				if (ss.fail())
					std::cout << "tu dois rentrer un nombre valide !!" <<std::endl;
				else
					clap.beRepaired(nombre);
				break;
			}
			case(3):
			{
				clap.recharge();
				break;
			}
			case(4):
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Combien de degats veut tu recevoir ?" << std::endl;
				std::getline(std::cin, input);
				std::stringstream ss(input);
				ss >> nombre;
				if (ss.fail() || nombre <= 0)
					std::cout << "tu dois rentrer un nombre valide et positif!!" <<std::endl;
				else
				{
					clap.takeDamage(nombre);
					if(clap.getHp() <= 0)
						return (0);
				}
				break;
			}
			case(5):
			{
				return 0;
			}
			default:
			{
				choice = 0;
				std::cout << "Choix invalide. Réessaie." << std::endl;
			}
		}
	}
	return (0);
}
