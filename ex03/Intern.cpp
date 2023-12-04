#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const& other)
{
	*this = other;
	std::cout << "Intern copy constructor called" << std::endl;
	return ;
}

Intern&	Intern::operator=(Intern const& other)
{
	(void)other;
	std::cout << "Intern assignation operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm*	createForms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	AForm*	form = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			form = createForms[i];
		}
		else
			delete createForms[i];
	}
	if (form)
		return (form);
	std::cout << "--Error: Intern cannot create " << name << std::endl;
	return (NULL);
}