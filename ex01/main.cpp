#include "Bureaucrat.hpp"


int main(void)
{
	std::string name;
	int grade;
	try
	{
		std::cout << "Enter name: ";
		std::cin >> name;
		std::cout << "Enter grade: ";
		std::cin >> grade;
		Bureaucrat pepe(name, grade);
		std::cout << pepe;
		pepe.incrementGrade();
		std::cout << pepe;
		pepe.decrementGrade();
		std::cout << pepe;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}