#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{	
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const & executor) const;
};

#endif