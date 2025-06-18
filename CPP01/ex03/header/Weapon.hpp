/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:37 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/18 15:16:17 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {

	private:
		std::string _type;

	public:

		Weapon(std::string type);
		~Weapon();

		void	get_type(void) const;
		void	setType(std::string name);
		
};

