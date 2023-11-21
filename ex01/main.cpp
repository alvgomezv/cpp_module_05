#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	int gradeB;
	int gradeF;
	std::cout << "Enter bureaucrat grade: ";
	std::cin >> gradeB;
	std::cout << "Enter form grade to be signed: ";
	std::cin >> gradeF;
	
	Bureaucrat pepe("Pepe", gradeB);
	Form form("Form", gradeF, 150);
	std::cout << pepe;
	std::cout << form;
	pepe.signForm(form);
	std::cout << form;
	
	return 0;
}