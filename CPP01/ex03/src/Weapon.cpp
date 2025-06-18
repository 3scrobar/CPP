/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:46 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:19:41 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) {
	this->_type = type;
	return ;
}

Weapon::~Weapon() {
	
}

void Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}
void Weapon::get_type(void) const{
	std::cout << this->_type << std::endl;
}
