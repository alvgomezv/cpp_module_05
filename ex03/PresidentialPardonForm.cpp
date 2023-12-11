#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	// std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	this->setTarget("default");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	// std::cout << "PresidentialPardonForm constructor called" << std::endl;
	this->setTarget(target);
}
 
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}

