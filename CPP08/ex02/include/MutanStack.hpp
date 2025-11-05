/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:15:19 by tle-saut          #+#    #+#             */
/*   Updated: 2025/11/04 14:37:14 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

// Declaration du template MutantStack
template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef std::stack<T, Container>                      base_type;
		typedef typename base_type::container_type            container_type;
		typedef typename container_type::iterator             iterator;
		typedef typename container_type::const_iterator       const_iterator;
		typedef typename container_type::reverse_iterator     reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		// Constructeurs / destructeur / operateur =
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& rhs);
		~MutantStack();

		// Fonctions d’itération
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

// Inclusion des définitions de fonctions template
#include "MutantStack.tpp"

#endif
