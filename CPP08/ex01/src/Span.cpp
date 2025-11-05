/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:29:19 by tle-saut          #+#    #+#             */
/*   Updated: 2025/11/04 13:38:02 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm> // sort, min/max_element
#include <stdexcept> // std::exception
#include <limits>    // std::numeric_limits
#include "../include/Span.hpp"

Span::Span()
{
	//std::cout << "Constructeur par default" << std::endl;
}
Span::Span(const Span &cpy) : tab(cpy.tab), N(cpy.N)
{
	//std::cout << "Constructeur par copie appeler" << std::endl;
}
Span::Span(unsigned int n) : tab(), N(n)
{
	//std::cout << "Constructeur appeler d une taille de " << n << std::endl;
}
Span::~Span()
{
	//std::cout << "Destructeur appeler" << std::endl;
}

Span &Span::operator=(const Span &cpy)
{
	this->tab = cpy.tab;
	this->N = cpy.N;
	return *this;
}

void Span::addNumber(int nbr)
{
	if (this->tab.size() >= N)
		throw FullSpanException();
	this->tab.push_back(nbr);
}
unsigned int Span::shortestSpan(void) const
{
	
	if (tab.size() < 2)
		throw NotEnoughNumbersException();
	std::vector<int> cpy(this->tab);
	std::sort(cpy.begin(), cpy.end());
	unsigned int best = std::numeric_limits<unsigned int>::max();
	
	for(std::vector<int>::size_type i = 1; i < cpy.size(); i++)
	{
	 	unsigned int diff = (cpy[i] >= cpy[i-1]) ? (cpy[i] - cpy[i-1]) : (cpy[i-1] - cpy[i]);
		if(diff <= best){ best = diff;}
		if(diff == 0 ){return 0;}
	}
	return best;
}

unsigned int Span::longestSpan(void) const
{
	if (tab.size() < 2)
		throw NotEnoughNumbersException();
		
	int min = *std::min_element(tab.begin(), tab.end());
	int max = *std::max_element(tab.begin(), tab.end());
	return (max-min);
}

void Span::addRange(int first, int last)
{
	if(first <= last)
		for (int i = first;i <= last; first++) {this->addNumber(i);}
	else
		for (int i = first;first >= i; first--) {this->addNumber(i);}
		
}
const char* Span::FullSpanException::what() const throw()
{
	return "Le tableaux est plein !!!";
}

const char* Span::NotEnoughNumbersException::what() const throw ()
{
	return "Pas assez de nombre";
}

