#include "phonebook.hpp"

void	Phonebook::printIndex(int idx)
{
	std::cout << "First name : " + Phonebook::persons[idx].fName << std::endl;
	std::cout << "Last name : " + Phonebook::persons[idx].lName << std::endl;
	std::cout << "Nickname : " + Phonebook::persons[idx].nName << std::endl;
	std::cout << "Phone number : " + Phonebook::persons[idx].pNumber << std::endl;
	std::cout << "Darkest secter : " + Phonebook::persons[idx].secret << std::endl;
}

std::string	Phonebook::columnCheck(std::string &text)
{
	if (text.length() <= 10)
		return (text);
	else
		return (text.substr(0,9) + ".");
}

void	Phonebook::add()
{
	i = i % 8;
	persons[i].index = i;
	std::cout << "First name : ";
	std::cin.ignore();
	std::getline(std::cin, persons[i].fName);
	std::cout << "Last name : ";
	std::getline(std::cin, persons[i].lName);
	std::cout << "Nickname : ";
	std::getline(std::cin, persons[i].nName);
	std::cout << "Phone number : ";
	std::getline(std::cin, persons[i].pNumber);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, persons[i].secret);
	if (i < 8)
		i++;
	if (lst < 7)
		lst++;
}

void	Phonebook::search()
{
	int	idx;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (Phonebook::persons[i].fName.empty())
			break;
		std::cout << std::right << std::setw(10) << Phonebook::persons[i].index;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << Phonebook::columnCheck(Phonebook::persons[i].fName);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << Phonebook::columnCheck(Phonebook::persons[i].lName);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << Phonebook::columnCheck(Phonebook::persons[i].nName);
		std::cout << "\n";
	}
	std::cout << "index : ";
	std::cin >> idx;
	if (idx < 0 || idx > Phonebook::lst)
		std::cout << "Bad index" << std::endl;
	else
		Phonebook::printIndex(idx);
}
