#include "Zombie.hpp"

int main()
{
	std::cout << "========= Stack =========" << std::endl;
	Zombie	zombie1("Adán");
	Zombie	predet;

	zombie1.announce();
	predet.announce();
	randomChump("Random Zombie");

	std::cout << "==== Heap =====" << std::endl;
	Zombie	*heapZ;

	heapZ = newZombie("New Zombie");
	heapZ->announce();
	delete(heapZ);
	
	std::cout << "==== After All =====" << std::endl;
	return (0);
}