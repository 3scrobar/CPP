/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:29:25 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/28 17:07:25 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Span
{
	public :
		Span(void);
		Span(const Span &cpy);
		Span(unsigned int n);
		~Span(void);
		Span &operator=(const Span &cpy);
		
		void addNumber(int nbr);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void addRange(int first, int last);
		
	private :
		std::vector<int> tab;
		unsigned int     N;
	
	class FullSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class NotEnoughNumbersException : public std::exception
	{
		public:
			virtual const char* what() const throw() ;
	};
};
