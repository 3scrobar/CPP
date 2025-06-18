/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:39 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:12:14 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapons) : _name(name), weapons(weapons) {
	std::cout << "\033[033m"<< this->_name << " is awake from listen some weird noise\033[0m" << std::endl;
};

HumanA::~HumanA(void) {
	std::cout << "\033[033m"<< this->_name << " go to sleep before the next warn\033[0m" << std::endl;
};

void	HumanA::attack(void) const{
	std::cout << "\n\033[033m"<< this->_name << "\033[033m Has see something and go for have a look" << std::endl;
	std::cout << this->_name << " see a zombie and go to attack it" << std::endl;
	std::cout << this->_name << " attack with ";
	weapons.get_type();
	std::cout << "and run away very fast \033[0m" << std::endl;
}