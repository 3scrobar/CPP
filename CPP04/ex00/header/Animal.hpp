/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:15:49 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/31 15:31:40 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& other);
		~Animal();

		
		Animal& operator=(const Animal& other);
	
		virtual void MakeSound(void)const;
		std::string getType(void)const;
		
	protected:
		std::string _type;
};
