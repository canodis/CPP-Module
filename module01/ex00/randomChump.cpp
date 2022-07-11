#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie randomCmp;

	randomCmp.setName(name);
	randomCmp.announce();
}