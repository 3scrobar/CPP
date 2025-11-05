/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:56:27 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/29 14:49:00 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Form :: Form() : _name("Default"), _besigned(false), _gradetosign(150), _gradetoexec(150)
{
	std::cout << "Constructeur de Form par default appeler." << std::endl;
}

Form :: Form(const std::string name, const int gradetosign, const int gradetoexec) 
	: _name(name), _besigned(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if(gradetosign < 1 || gradetoexec < 1)
		throw GradeTooHighException();
	if(gradetosign > 150 || gradetoexec > 150)
		throw GradeTooLowException();
	std::cout << "Constructeur de Form appeller avec " << name << " et neccessite " << gradetosign << " pour signer et " << gradetoexec << " pour executer." << std::endl;
}

Form :: Form(const Form& cpy) : _name(cpy.getName()), _besigned(cpy.getsigned()), _gradetosign(cpy.getGradeToExec()), _gradetoexec(cpy.getGradeToExec())
{
	std::cout << "Constructeur de Form par copie appeler." << std::endl;
}

Form :: ~Form()
{
	std::cout << "Destructeur de Form appeler." <<std::endl;
}




Form &Form :: operator=(const Form &cpy)
{
	if(&cpy == this)
		return (*this);
	this->_besigned = cpy._besigned;
	return (*this);
}



std::string Form ::getName()const
{
	return this->_name;
}
int Form::getGradeToSign()const
{
	return this->_gradetosign;
}
int Form ::getGradeToExec()const
{
	return this->_gradetoexec;
}
bool Form ::getsigned()const
{
	return this->_besigned;
}

void Form :: beSigned(Bureaucrat &b)
{
	if (this->_besigned == true)
		throw Form::AlreadySigned();
	else if (b.getGrade() <= this->_gradetosign)
	{
		this->_besigned = true;
		std::cout << b  << " signe " << this->_name << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Le grade est trop haut.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Le grade est trop bas";
}

const char* Form::AlreadySigned::what()const throw()
{
	return "Le formulaire est deja signer.";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Formulaire \"" << f.getName() << "\" "
	<< "[sign: " << f.getGradeToSign()
	<< ", exec: " << f.getGradeToExec()
	<< ", signé: " << (f.getsigned() ? "oui" : "non") << "]";
	return os;
}
