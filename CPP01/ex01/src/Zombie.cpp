/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:22:40 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 12:08:02 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie::Zombie(std::string name) {
	
	this->_name = name;
	std::cout << "\033[31m"<< name << " is rising from hell \033[0m" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	
	std::cout << "\033[32m" << this->_name << " go back to hell..\033[0m" << std::endl;
}

void	Zombie::announce(void) {
	
	std::cout << "\033[33m" << this->_name << " : BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
