/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:14:36 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/27 16:25:32 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/easyfind.hpp"
#include <vector>

int main() {
	int raw[10] = {1,2,3,4,5,6,7,8,9,10};

	std::vector<int> v(raw, raw + 10);

	try {
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "Trouvé: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Erreur: " << e.what() << std::endl;
	}

	try {
		easyfind(v, 42);
	} catch (const std::exception &e) {
		std::cout << "Erreur: " << e.what() << std::endl;
	}
	return 0;
}
