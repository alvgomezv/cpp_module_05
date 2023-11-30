#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	Bureaucrat pepe("Pepe", 1);
	Bureaucrat juan("Juan", 150);

	ShrubberyCreationForm form1("home");
	RobotomyRequestForm form2("robot");
	PresidentialPardonForm form3("president");

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	pepe.signForm(form1);
	std::cout << form1 << std::endl;
	pepe.executeForm(form1);
	juan.executeForm(form1);

	pepe.signForm(form2);
	pepe.executeForm(form2);
	juan.executeForm(form2);

	pepe.signForm(form3);
	form3.execute(pepe);
	juan.executeForm(form3);
	
	return (0);
}