/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:36:05 by tle-saut          #+#    #+#             */
/*   Updated: 2025/09/29 14:47:48 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Bureaucrat :: Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "Constructeur du Bureaucrat par default appeler." << std::endl;
}

Bureaucrat :: Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Constructeur du Bureaucrat appeler avec " << name << " et "<< grade << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;

}

Bureaucrat :: Bureaucrat(const Bureaucrat &cpy): _name(cpy._name)
{
	_grade = cpy._grade;
	std::cout << "Constructeur par copie du Bureaucrat appeler."<< std::endl;
}

Bureaucrat :: ~Bureaucrat()
{
	std::cout << "Destructeur du Bureaucrat appeler" << std::endl;
}


int Bureaucrat::getGrade()const
{
	return(this->_grade);
};

const std::string& Bureaucrat::getName()const
{
	return(this->_name);
};

void Bureaucrat::demote()
{
	std::cout << _name << " est retrograder." <<std::endl;
	if(_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}
void Bureaucrat::promote()
{
	std::cout << _name << " est promu." <<std::endl;
	if(_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;

}


void Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cerr << this->_name << " couldn’t sign "<< f.getName() << " because " << e.what() << std::endl;
	}
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return (*this);
	this->_grade = src._grade;
	return(*this);
};

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Le Grade est trop haut.\n");
};

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Le Grade est trop bas.\n");
};



std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", grade " << b.getGrade();
	return os;
}
