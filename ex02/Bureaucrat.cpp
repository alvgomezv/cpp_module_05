#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : _name(other.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& other)
{
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	std::cout << "Bureaucrat " << this->_name << " increment grade to " << this->_grade << std::endl;
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void	Bureaucrat::decrementGrade(void)
{
	std::cout << "Bureaucrat " << this->_name << " decrement grade to " << this->_grade << std::endl;
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

