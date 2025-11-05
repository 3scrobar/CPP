/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:01:03 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/23 13:52:22 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <string>

#include <iostream>
#include "Bureaucrat.hpp"

static void sep(const std::string& title)
{
	std::cout << "\n---- " << title << " ----\n";
}

int main() {
	sep("Constructions");
	try {
		Bureaucrat a("Alice", 42);
		std::cout << a << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Construction Alice] " << e.what() << std::endl;
	}

	try {
		Bureaucrat top("Top", 1);
		std::cout << top << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Construction Top] " << e.what() << std::endl;
	}

	try {
		Bureaucrat tooHigh("TooHigh", 0);
		std::cout << tooHigh << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "\n[Construction TooHigh] Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat tooLow("TooLow", 151);
		std::cout << tooLow << std::endl; // jamais atteint
	} catch (const std::exception& e) {
		std::cerr << "\n[Construction TooLow] Error: " << e.what() << std::endl;
	}

	// 2) Promotions / Démotions valides
	sep("Promotions / Démotions valides");
	try {
		Bureaucrat b("Bob", 10);
		std::cout << b << std::endl;
		b.promote();   // 9
		std::cout << b << std::endl;
		b.promote();   // 8
		std::cout << b << std::endl;
		b.demote();    // 9
		std::cout << "Après modifs: " << b << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Bob] " << e.what() << std::endl;
	}

	// 3) Dépassements par promotion/démotion
	sep("Dépassements contrôlés");
	try {
		Bureaucrat topEdge("TopEdge", 1);
		std::cout << topEdge << std::endl;
		topEdge.promote(); // doit throw (trop haut)
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat lowEdge("LowEdge", 150);
		std::cout << lowEdge << std::endl;
		lowEdge.demote(); // doit throw (trop bas)
	} catch (const std::exception& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}

	// 4) Copie / assignation (OCF) et comportement
	sep("Copie / Assignation");
	try {
		Bureaucrat c1("C1", 50);
		Bureaucrat c2 = c1;
		Bureaucrat c3("C3", 100);
		c3 = c1;
		std::cout << "c1: " << c1 << "\n";
		std::cout << "c2: " << c2 << "\n";
		std::cout << "c3: " << c3 << "\n";
	} catch (const std::exception& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}

	sep("Fin des tests");
	std::cout << "Programme continue normalement : pas de crash, tout est catché.\n";
	return 0;
}

