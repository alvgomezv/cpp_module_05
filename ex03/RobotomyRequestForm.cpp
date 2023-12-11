#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	// std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	this->setTarget("default");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	// std::cout << "RobotomyRequestForm constructor called" << std::endl;
	this->setTarget(target);
}
 
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::robotomize(void) const
{
	std::cout << "Bzzzzzzzzzzzzzzzzz" << std::endl;
	std::srand((unsigned int)(std::time(NULL)));
    if (std::rand() % 2 == 0) 
        std::cout << this->getTarget() << " has been robotomized successfully\n";
	else 
        std::cout << this->getTarget() << " robotomization failed\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		robotomize();
}


