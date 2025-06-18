/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:50:48 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 13:50:58 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	// Pointeur vers brain
	std::string* stringPTR = &brain;

	// Référence vers brain
	std::string& stringREF = brain;

	// Adresses
	std::cout << "Adresse de brain :       " << &brain << std::endl;
	std::cout << "Adresse dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse dans stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	// Valeurs
	std::cout << "Valeur de brain :        " << brain << std::endl;
	std::cout << "Valeur pointée par PTR : " << *stringPTR << std::endl;
	std::cout << "Valeur référencée REF :  " << stringREF << std::endl;

	return 0;
}