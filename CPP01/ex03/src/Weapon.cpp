/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:46 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 15:27:04 by tle-saut         ###   ########.fr       */
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
std::string Weapon::get_type(void) const{
	return (this->_type);
}
