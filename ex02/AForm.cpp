#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const& other) : _name(other.getName()), _signed(other.getSigned()), _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute())
{
	std::cout << "AForm copy constructor called" << std::endl;
	return ;
}

AForm&	AForm::operator=(AForm const& other)
{
	this->_signed = other.getSigned();
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

std::string const	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

std::ostream&	operator<<(std::ostream& out, AForm const& AForm)
{
	std::string signedStr;
	if (AForm.getSigned())
		signedStr = "Yes";
	else
		signedStr = "No";
	out << "AForm Name: " << AForm.getName() << std::endl << "- Signed: " << signedStr << std::endl << "- Grade to sign: " << AForm.getGradeToSign() << std::endl << "- Grade to execute: " << AForm.getGradeToExecute() << std::endl;
	return (out);
}

