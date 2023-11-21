#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	printTree("default");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, int gradeToSign, int gradeToExecute)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 145 || gradeToExecute > 137)
		throw AForm::GradeTooLowException();
	printTree(target);
}
 
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::printTree(std::string target) const
{
	std::ofstream newFile(target + "_shrubbery");
	if (!newFile)
	{
		std::cerr << "Error opening new file" << std::endl;
		exit (1);
	}
	newFile << "       _-_" << std::endl;
	newFile << "    /~~   ~~\\" << std::endl;
	newFile << " /~~         ~~\\" << std::endl;
	newFile << "{               }" << std::endl;
	newFile << " \\  _-     -_  /" << std::endl;
	newFile << "   ~  \\\\ //  ~" << std::endl;
	newFile << "_- -   | | _- _" << std::endl;
	newFile << "  _ -  | |   -_" << std::endl;
	newFile << "      // \\\\" << std::endl;
	newFile << std::endl;
	return ;
}

