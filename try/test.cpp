/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:45:55 by tle-saut          #+#    #+#             */
/*   Updated: 2025/05/27 15:58:00 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string nom;
	std::cout << "Quel est votre nom ? ";
	std::getline(std::cin, nom);
	std::cout << "Bonjour, " << nom << " ! Ravi de vous rencontrer." << std::endl;
	return 0;
}