/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:14 by tblaase           #+#    #+#             */
/*   Updated: 2025/09/11 13:47:00 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

// classes

class Dog: public Animal
{
	private:
		Brain *_brain;

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);

	// Deconstructors
		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &src);

	// Public Methods
		void makeSound(void)const;
	// Getter
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};
