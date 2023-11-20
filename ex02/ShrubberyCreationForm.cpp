#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int gradeToSign, int gradeToExecute)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& out, ShrubberyCreationForm const& ShrubberyCreationForm)
{
	std::string signedStr;
	if (ShrubberyCreationForm.getSigned())
		signedStr = "Yes";
	else
		signedStr = "No";
	out << "ShrubberyCreationForm Name: " << ShrubberyCreationForm.getName() << std::endl << "- Signed: " << signedStr << std::endl << "- Grade to sign: " << ShrubberyCreationForm.getGradeToSign() << std::endl << "- Grade to execute: " << ShrubberyCreationForm.getGradeToExecute() << std::endl;
	return (out);
}

