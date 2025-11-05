/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:38:18 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/29 14:41:27 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _besigned;
		const int _gradetosign;
		const int _gradetoexec;

	public:
		Form();
		Form(const std::string name, const int gradetosign, const int gradetoexec);
		Form(const Form &cpy);
		~Form();

		Form &operator=(const Form &cpy);
		
		std::string getName()const;
		int getGradeToSign()const;
		int getGradeToExec()const;
		bool getsigned()const;
		
		void beSigned(Bureaucrat &b);
	
	

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
	
	class AlreadySigned : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, const Form& f);
