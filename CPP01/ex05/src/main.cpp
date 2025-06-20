/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:25:38 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 16:54:31 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"
#include <iostream>

int main() {
	Harl harl;

	std::cout << "=== Niveau DEBUG ===" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n=== Niveau INFO ===" << std::endl;
	harl.complain("INFO");

	std::cout << "\n=== Niveau WARNING ===" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n=== Niveau ERROR ===" << std::endl;
	harl.complain("ERROR");

	return 0;
}

