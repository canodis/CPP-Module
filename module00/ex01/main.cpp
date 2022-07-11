#include "phonebook.hpp"

int	main()
{
	Phonebook	pbook;
	std::string	input;

	pbook.i = 0;
	pbook.lst = 0;
	while (666)
	{
		std::cout << "Bir komut giriniz(ADD/SEARCH/EXIT) : ";
		std::cin >> input;
		if (input == "ADD")
			pbook.add();
		else if (input == "SEARCH")
			pbook.search();
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "Hatali kod girisi" << std::endl;

	}
	
}