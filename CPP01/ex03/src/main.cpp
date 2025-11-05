/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:44 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/24 15:21:11 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/HumanA.hpp"
#include "../header/HumanB.hpp"
#include "../header/Weapon.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}


// int main() {
	
// 	Weapon club("a club find in a trash");
// 	HumanA bob("Bob",club);
// 	HumanB jc("Jean-luc");

// 	bob.attack();
// 	jc.attack();
// 	std::cout << "\033[96mThey found a couple of spiked crowbar in a car\033[0m" << std::endl;
// 	club.setType("spiked crowbar");
// 	bob.attack();
// 	jc.setWeapon(club);
// 	jc.attack();


// 	return 0;
// }
