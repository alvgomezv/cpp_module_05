#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


class Intern
{
	public:
		Intern(void);
		Intern(Intern const& other);
		Intern& operator=(Intern const& other);
		~Intern(void);

		AForm*	makeForm(std::string name, std::string target);
};

#endif