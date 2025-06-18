/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:41 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:18:37 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name) {
	std::cout << "\033[034m"<< this->_name << " is awake from listen some weird noise\033[0m" << std::endl;
	this->weapons = NULL;
};

HumanB::~HumanB(void) {
	std::cout << "\n\033[034m"<< this->_name << " go to sleep before the next warn\033[0m" << std::endl;
};

void	HumanB::attack(void) const{
	
	std::cout << "\n\033[034m"<< this->_name << " Has see something and go for have a look" << std::endl;
	std::cout << this->_name << " see a zombie and go to attact it" << std::endl;
	
	
	if (this->weapons == NULL)
		std::cout << this->_name << "  can't attack without any weapons, he love too much the life" << std::endl;
	else
	{
		std::cout << this->_name << " attack with ";
		this->weapons->get_type();
		std::cout << "and run away very fast" << std::endl;
	}
	std::cout << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon weap) {
	this->weapons = &weap;
}
