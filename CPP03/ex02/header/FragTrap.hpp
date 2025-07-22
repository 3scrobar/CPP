/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:21:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/22 15:20:56 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		
		FragTrap(std::string name);
		~FragTrap();
		void attack(const std::string& target);
		
		void highFivesGuys(void);
		void	status(void);
	
};
