#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

		
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const& other);
		Form& operator=(Form const& other);
		~Form(void);

		std::string const	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		void				beSigned(Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade too low");
				}
		};
};

std::ostream&		operator<<(std::ostream& out, Form const& Form);

#endif