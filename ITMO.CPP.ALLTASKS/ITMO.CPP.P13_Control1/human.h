#pragma once
#include <string>
#include <sstream>
#include <iostream>
class human {
public:
	virtual void get_data() {
		std::cout << "Last_name: ";
		std::cin >> last_name;
		std::cout << "Name: ";
		std::cin >> name;
		std::cout << "Second_name: ";
		std::cin >> second_name;
	}
	virtual void put_data() {
		std::cout << "Full name: " << last_name << " " << name << " " << second_name << std::endl;
	}
private:
	std::string name;
	std::string last_name;
	std::string second_name;
};