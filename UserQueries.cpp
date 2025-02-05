
#include <iostream>
#include <string>
#include "UserQueries.h"
#include <cpr/cpr.h>
#include <assert.h>

int main()
{
	std::string command;
	cpr::Response request;
	std::string name, city;

	do {

		std::cout << "Enter command: ";
		std::cin >> command;
		



		if (command == "get")
		{
			/*request = cpr::Get(cpr::Url("http://httpbin.org/get"));
			std::cout << request.text << std::endl;*/


			request = cpr::Get(cpr::Url("http://httpbin.org/headers"),
				cpr::Header({ {"forms", name}}));
			std::cout << request.text << std::endl;

			/*request = cpr::Get(cpr::Url("http://httpbin.org/headers"),
				cpr::Header({ {"forms", city} }));
			std::cout << request.text << std::endl;*/



		}
		else if (command == "post")
		{
			
			std::cout << "Enter name: ";
			//std::cin >> name;
			name = "Alex";
			std::cout << "Enter city: ";
			//std::cin >> city;
			city = "Magadan";
			request = cpr::Post(cpr::Url("http://httpbin.org/post"),
				cpr::Payload({ {"name", name.c_str()}, {"city ", city.c_str()} }));

			std::cout << request.text << std::endl;
		}
		else if (command == "put")
		{
			/*assert(cpr::Post(cpr::Url("http://www.httpbin.org/put"),
				cpr::Payload{ {"name", name.c_str()} }).status_code == 405);*/

			cpr::Post(cpr::Url("http://www.httpbin.org/put"),
				cpr::Payload{ {"name", name.c_str()} });

			name = "Georg";
			//city = "Magadan";
			
			request = cpr::Put(cpr::Url("http://httpbin.org/put"),
				cpr::Payload({ {"name", name.c_str()}}));

			std::cout << request.text << std::endl;
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



//Accept - Encoding