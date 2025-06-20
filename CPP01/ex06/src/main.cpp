/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:25:38 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 16:33:51 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"
#include <iostream>
#include <string>

std::string to_upper(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return str;
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: you need to enter a complain level" << std::endl;
		return 1;
	}

	Harl harl;
	std::string arg = to_upper(av[1]);
	harl.complain(arg);

	return 0;
}
