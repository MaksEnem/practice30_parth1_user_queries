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
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			std::cout << r.text << std::endl;
		}
		else if (command == "post")
		{
			std::string name, city;
			std::cout << "Enter name: ";
			std::cin >> name;

			std::cout << "Enter city: ";
			std::cin >> city;

			cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"),
				cpr::Payload({ {"name ", name.c_str()}, {"city ", city.c_str()} }));

			std::cout << r.text << std::endl;
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
