#include "Bureaucrat.hpp"
#include "AForm.hpp"


int main(void)
{
	int gradeB;
	int gradeF;
	std::cout << "Enter bureaucrat grade: ";
	std::cin >> gradeB;
	std::cout << "Enter form grade to be signed: ";
	std::cin >> gradeF;
	
	Bureaucrat pepe("Pepe", gradeB);
	std::cout << pepe;
	
	return 0;
}