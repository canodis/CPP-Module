#pragma once

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>

class Contact
{
public:
	int			index;
	std::string	fName;
	std::string	lName;
	std::string	nName;
	std::string	pNumber;
	std::string	secret;
};

class Phonebook
{
public:
	Contact persons[8];
	int		i;
	int		lst;

	void	add();
	void	search();
	void	printIndex(int idx);
	std::string	columnCheck(std::string &text);
};

