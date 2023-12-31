#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string			_target;
		
	public:
		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const& other);
		AForm& operator=(AForm const& other);
		~AForm(void);

		virtual std::string const	getName(void) const;
		virtual bool				getSigned(void) const;
		virtual int					getGradeToSign(void) const;
		virtual int					getGradeToExecute(void) const;
		virtual void				beSigned(Bureaucrat& bureaucrat);
		virtual void				execute(Bureaucrat const& executor) const = 0;
		virtual std::string			getTarget(void) const;
		virtual void				setTarget(std::string target);
		virtual bool				getIsSigned(void) const;


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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Form not signed");
				}
		};
};

std::ostream&		operator<<(std::ostream& out, AForm const& AForm);

#endif