/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:41:45 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/10 14:35:56 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
//#ifndef CONTACT_HPP
//# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact {
	
	private :
	
	static std::string	_field_name[5];
	std::string			_informations[11];
	
	enum Field {
		FirstName = 0,
		LastName,
		NickName,
		PhoneNumber,
		DarkestSecret
	};

	public :
	Contact(void);
	~Contact(void);

	bool	set_contact();
	void	get_contact();
};

//#endif
