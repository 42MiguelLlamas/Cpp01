#include "Zombie.hpp"


int main()
{
	Zombie		*horde = NULL;

	horde = zombieHorde(3, "Uruk-khai");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	std::cout << "==== After All =====" << std::endl;
	return (0);
}