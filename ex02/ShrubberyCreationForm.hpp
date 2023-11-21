#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{	
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target, int gradeToSign, int gradeToExecute);
		~ShrubberyCreationForm(void);

		void	printTree(std::string target) const;
};

#endif