/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:22:48 by tle-saut          #+#    #+#             */
/*   Updated: 2025/06/20 16:24:15 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl {
private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
	
};

