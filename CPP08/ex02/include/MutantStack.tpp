/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:03:41 by tle-saut          #+#    #+#             */
/*   Updated: 2025/11/04 14:36:21 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




template <typename T, class Container>
MutantStack<T, Container>::MutantStack() : base_type()
{
	std::cout << "Constructeur par default" << std::endl;
}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : base_type(other)
{
	std::cout << "Constructeur pa copie" << std::endl;

}

template <typename T, class Container>
MutantStack<T, Container>&
MutantStack<T, Container>::operator=(const MutantStack& rhs)
{
    if (this != &rhs)
        base_type::operator=(rhs);
    return *this;
}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << "Destructeur" << std::endl;

}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator
MutantStack<T, Container>::begin() { return this->c.begin(); }

template <typename T, class Container>
typename MutantStack<T, Container>::iterator
MutantStack<T, Container>::end() { return this->c.end(); }

template <typename T, class Container>
typename MutantStack<T, Container>::const_iterator
MutantStack<T, Container>::begin() const { return this->c.begin(); }

template <typename T, class Container>
typename MutantStack<T, Container>::const_iterator
MutantStack<T, Container>::end() const { return this->c.end(); }

template <typename T, class Container>
typename MutantStack<T, Container>::reverse_iterator
MutantStack<T, Container>::rbegin() { return this->c.rbegin(); }

template <typename T, class Container>
typename MutantStack<T, Container>::reverse_iterator
MutantStack<T, Container>::rend() { return this->c.rend(); }

template <typename T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator
MutantStack<T, Container>::rbegin() const { return this->c.rbegin(); }

template <typename T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator
MutantStack<T, Container>::rend() const { return this->c.rend(); }
