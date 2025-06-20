/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:41 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 15:38:05 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), weapons(NULL) {
	std::cout << "\033[034m" << this->_name << " is awake from listen some weird noise\033[0m" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "\n\033[034m" << this->_name << " go to sleep before the next warn\033[0m" << std::endl;
}

void HumanB::setWeapon(Weapon& weap) {
	this->weapons = &weap;
}

void HumanB::attack(void) const {
	std::cout << "\n\033[034m" << this->_name << " has seen something and goes to have a look" << std::endl;
	std::cout << this->_name << " sees a zombie and goes to attack it" << std::endl;

	if (this->weapons == NULL)
		std::cout << this->_name << "\033[0m can't attack without any weapons\033[034m, he loves life too much" << std::endl;
	else {
		std::cout << this->_name << " attacks with \033[0m'" << this->weapons->get_type();
		std::cout << "'\033[034m and runs away very fast" << std::endl;
	}
	std::cout << "\033[0m" << std::endl;
}
