#include "Zombie.hpp"

int	main()
{
	Zombie* newZ = newZombie("Canodis");
	newZ->announce();
	randomChump("Erdog");
	delete newZ;
}