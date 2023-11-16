#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		
	public:
		Bureaucrat(void);
		~Bureaucrat(void);

};

#endif