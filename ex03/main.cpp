#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Intern	someRandomIntern;
	Bureaucrat	pepe("Pepe", 1);
	AForm*	form1;
	AForm*	form2;
	AForm*	form3;
	AForm*	form4;

	form1 = someRandomIntern.makeForm("shrubbery creation", "Home");
	form2 = someRandomIntern.makeForm("robotomy request", "Robot");
	form3 = someRandomIntern.makeForm("presidential pardon", "President");
	form4 = someRandomIntern.makeForm("unknown", "Unknown");

	std::cout << std::endl;

	pepe.signForm(*form1);
	pepe.executeForm(*form2);
	pepe.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;
	delete form4;
	
	return (0);
}