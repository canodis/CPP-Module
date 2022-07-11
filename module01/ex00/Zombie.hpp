#pragma once

#include <iostream>
#include <string>

class Zombie
{
public:
	void setName(std::string name);
	void announce(void);
private:
	std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
