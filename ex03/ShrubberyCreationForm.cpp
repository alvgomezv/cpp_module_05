#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->setTarget("default");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->setTarget(target);
}
 
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::printTree(void) const
{
    std::ofstream newFile((this->getTarget() + "_shrubbery").c_str());
	if (!newFile)
		std::cerr << "Error opening new file" << std::endl;
	else
	{
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
		newFile.close();
	}
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		printTree();
}

