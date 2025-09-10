/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:36:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/10 10:17:13 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	
		WrongCat();
		WrongCat(const WrongCat &cpy);
		~WrongCat();
		
		WrongCat &operator=(const WrongCat &cpy);
		
		std::string getType(void)const;
		void makeSound()const;
};
