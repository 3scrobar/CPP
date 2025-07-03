/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:02:49 by tle-saut          #+#    #+#             */
/*   Updated: 2025/07/03 10:44:24 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

int main (void)
{
	ClapTrap bob("bob");

	bob.attack("robert");
	bob.takeDamage(6);
	bob.beRepaired(15);
	
	
	return (0);
}
