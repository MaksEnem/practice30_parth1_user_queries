// UserQueries.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <string>
#include "UserQueries.h"
#include <cpr/cpr.h>

int main()
{
	std::string command;

	

	do {

		std::cout << "Enter command: ";
		std::cin >> command;




		if (command == "get")
		{

		}
		else if (command == "post")
		{

		}
		else if (command == "put")
		{

		}
		else if (command == "delete")
		{

		}
		else if (command == "patch")
		{

		}
		else if (command != "exit")
		{
			std::cout << "Incorrect input" << std::endl;
		}

	} while (command != "exit");
	std::cout << "Hello CMake." << std::endl;
	return 0;
}
