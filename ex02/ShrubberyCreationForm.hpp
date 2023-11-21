#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{	
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name, int gradeToSign, int gradeToExecute);
		~ShrubberyCreationForm(void);

		void				beSigned(Bureaucrat& bureaucrat);
};

std::ostream&		operator<<(std::ostream& out, ShrubberyCreationForm const& ShrubberyCreationForm);

#endif