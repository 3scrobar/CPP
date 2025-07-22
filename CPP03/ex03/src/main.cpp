/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:21:59 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 16:44:05 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"
#include "../header/ScavTrap.hpp"
#include "../header/FragTrap.hpp"
#include "../header/DiamondTrap.hpp"

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
	DiamondTrap clap(input);
	
	
	while (1 && clap.getStatus() == 0)
	{
		std::cout << "\n\nQue veux tu faire ??\n1:Attaquer\n2:Se reparer\n3:Se recharger\n4:Prendre des degats\n5:Status\n6:Qui suis je ?\n\n7:Quitter"<<std::endl;
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
					if(clap.takeDamage(nombre) == 1)
					{
						std::cout << " Le sujet d experience est mort dans d attrocre soufrance" << std::endl;
						return (0);
					}
				}
				break;
			}
			case(5):
			{
				clap.status();
				break;
			}
			case(6):
			{
				clap.whoAmI();
				break;
			}
			case(7):
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

