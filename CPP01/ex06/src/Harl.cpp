/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:24:45 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 16:59:32 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "J'adore avoir du bacon en plus dans mon burger spécial 7XL-double-fromage-triple-cornichon-sauce secrète. J'adore vraiment !" << std::endl;
	Harl::info();
}

void Harl::info(void) {
	std::cout << "\n\n[ INFO ]\n";
	std::cout << "Je n'arrive pas à croire que le bacon en plus coûte plus cher. Vous n'avez pas mis assez de bacon ! Sinon je n'en demanderais pas !" << std::endl;
	Harl::warning();
}

void Harl::warning(void) {
	std::cout << "\n\n[ WARNING ]\n";
	std::cout << "Je pense que je mérite du bacon en plus gratuitement. Ça fait des années que je viens ici, et vous venez juste d’être embauché !" << std::endl;
	Harl::error();
}

void Harl::error(void) {
	std::cout << "\n\n[ ERROR ]\n";
	std::cout << "C’est inacceptable ! Je veux parler au manager immédiatement." << std::endl;
}

void Harl::complain(std::string level) {
	typedef void (Harl::*HarlFunc)();
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	HarlFunc functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "\nNiveau de plainte non reconnu..., essaye 'debug', 'info', 'warning', 'error'" << std::endl;
}
