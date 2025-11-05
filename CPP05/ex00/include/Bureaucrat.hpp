/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:26:57 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/23 13:35:26 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private :
		const std::string _name;
		int _grade;

	public :
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
	
		Bureaucrat &operator=(const Bureaucrat &src);

		void promote();
		void demote();
		
		const std::string& getName()const;
		int getGrade()const;
		
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};


	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};


	
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& b);
