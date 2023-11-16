#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap	one("one");
	ClapTrap	two("two");

	one.attack(two.getName());
	two.takeDamage(1);

	two.attack(one.getName());
	two.beRepaired(1);
	for (int i = 0; i < 10; i++)
		two.takeDamage(1);
	two.takeDamage(1);

	two.printStats();
	
	return 0;
}