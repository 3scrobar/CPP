/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:29:22 by tle-saut          #+#    #+#             */
/*   Updated: 2025/11/04 13:36:49 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

static void print_ok(const char* msg) { std::cout << "[OK] " << msg << std::endl; }
static void print_ko(const char* msg) { std::cout << "[KO] " << msg << std::endl; }

int main() {
	std::cout << "==== Test 1 : Cas nominal simple ====" << std::endl;
	try {
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		unsigned int s = sp.shortestSpan(); // attendu: 2 (9-11)
		unsigned int l = sp.longestSpan();  // attendu: 14 (17-3)
		std::cout << "shortest=" << s << " longest=" << l << std::endl;
		print_ok("Cas nominal");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}

	std::cout << "\n==== Test 2 : Exception NotEnoughNumbers (0 element) ====" << std::endl;
	try {
		Span sp(3);
		// pas d'ajout
		sp.shortestSpan(); // doit throw
		print_ko("Pas d'exception sur 0 element");
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
		print_ok("Exception attendue (0 elt)");
	}

	std::cout << "\n==== Test 3 : Exception NotEnoughNumbers (1 element) ====" << std::endl;
	try {
		Span sp(3);
		sp.addNumber(42);
		sp.longestSpan(); // doit throw
		print_ko("Pas d'exception sur 1 element");
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
		print_ok("Exception attendue (1 elt)");
	}

	std::cout << "\n==== Test 4 : Exception FullSpan (capacité atteinte) ====" << std::endl;
	try {
		Span sp(2);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3); // doit throw
		print_ko("Pas d'exception quand le Span est plein");
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
		print_ok("Exception attendue (plein)");
	}

	std::cout << "\n==== Test 5 : Doublons (shortestSpan == 0) ====" << std::endl;
	try {
		Span sp(5);
		sp.addNumber(7);
		sp.addNumber(7);
		sp.addNumber(-1);
		sp.addNumber(100);
		sp.addNumber(50);
		unsigned int s = sp.shortestSpan(); // attendu: 0 (7 et 7)
		unsigned int l = sp.longestSpan();  // attendu: 101 (100 - (-1))
		std::cout << "shortest=" << s << " longest=" << l << std::endl;
		if (s == 0) print_ok("Doublons OK");
		else print_ko("Doublons -> shortest != 0");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}

	std::cout << "\n==== Test 6 : Nombres négatifs et mélange signes ====" << std::endl;
	try {
		Span sp(6);
		sp.addNumber(-10);
		sp.addNumber(-5);
		sp.addNumber(0);
		sp.addNumber(5);
		sp.addNumber(10);
		sp.addNumber(6);
		std::cout << "shortest=" << sp.shortestSpan() << " longest=" << sp.longestSpan() << std::endl;
		print_ok("Negatifs et melange OK");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}

	std::cout << "\n==== Test 7 : large range (min/max eloignes) ====" << std::endl;
	try {
		Span sp(4);
		sp.addNumber(1000000);
		sp.addNumber(-1000000);
		sp.addNumber(0);
		sp.addNumber(999999);
		std::cout << "shortest=" << sp.shortestSpan() << " longest=" << sp.longestSpan() << std::endl;
		print_ok("Large range OK");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}

	std::cout << "\n==== Test 8 : addRange (si corrige) ====" << std::endl;
	try {
		Span sp(10);
		// suppose addRange ajoute toutes les valeurs inclusives [first..last]
		sp.addRange(3, 7);   // 3,4,5,6,7 (5 éléments)
		sp.addRange(-2, -1); // -2,-1 (2 éléments)
		sp.addNumber(100);
		sp.addNumber(101);
		sp.addNumber(102);   // nous sommes maintenant à 10/10
		std::cout << "shortest=" << sp.shortestSpan() << " longest=" << sp.longestSpan() << std::endl;
		print_ok("addRange OK");
		// essayer de dépasser
		try {
			sp.addNumber(999); // doit throw FullSpanException
			print_ko("addRange: pas d'exception au depassement");
		} catch (const std::exception& e) {
			std::cout << "Exception attendue: " << e.what() << std::endl;
		}
	} catch (const std::exception& e) {
		std::cout << "addRange KO: " << e.what() << std::endl;
	}

	std::cout << "\n==== Test 9 : Copie et assignation ====" << std::endl;
	try {
		Span a(5);
		a.addNumber(1);
		a.addNumber(10);
		a.addNumber(3);
		Span b(a); // copy ctor
		Span c(2);
		c = a;     // operator=
		std::cout << "a: shortest=" << a.shortestSpan() << " longest=" << a.longestSpan() << std::endl;
		std::cout << "b: shortest=" << b.shortestSpan() << " longest=" << b.longestSpan() << std::endl;
		std::cout << "c: shortest=" << c.shortestSpan() << " longest=" << c.longestSpan() << std::endl;
		print_ok("Copie/assignation OK");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}

	std::cout << "\n==== Test 10 : Random (taille moyenne) ====" << std::endl;
	try {
		std::srand(static_cast<unsigned int>(std::time(0)));
		const unsigned int N = 1000;
		Span sp(N);
		for (unsigned int i = 0; i < N; ++i)
			sp.addNumber(std::rand() % 10000 - 5000); // [-5000; 4999]
		std::cout << "shortest=" << sp.shortestSpan()
				<< " longest="  << sp.longestSpan()  << std::endl;
		print_ok("Random OK");
	} catch (const std::exception& e) {
		print_ko(e.what());
	}
	std::cout << "\n==== test du sujet ====" << std::endl;

	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e){
		print_ko(e.what());
	}
	print_ok("test reussi");


	
	std::cout << "\n==== Fin des tests ====" << std::endl;
	return 0;
}
