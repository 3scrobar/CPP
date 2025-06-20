#include <iostream>
#include "../header/Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "J'adore avoir du bacon en plus dans mon burger spécial 7XL-double-fromage-triple-cornichon-sauce secrète. J'adore vraiment !" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "Je n'arrive pas à croire que le bacon en plus coûte plus cher. Vous n'avez pas mis assez de bacon ! Sinon je n'en demanderais pas !" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "Je pense que je mérite du bacon en plus gratuitement. Ça fait des années que je viens ici, et vous venez juste d’être embauché !" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "C’est inacceptable ! Je veux parler au manager immédiatement." << std::endl;
}

void Harl::complain(std::string level) {
	typedef void (Harl::*HarlFunc)();
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	HarlFunc functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
}
