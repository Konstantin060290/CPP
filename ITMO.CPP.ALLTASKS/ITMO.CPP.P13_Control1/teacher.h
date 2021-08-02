#pragma once
#include "human.h"
#include <string>
class teacher : public human {
public:
	void get_data()
	{
		human::get_data();
		std::cout << "Work time: ";
		std::cin >> work_time;
	}
	void put_data() {
		human::put_data();
		std::cout << "Work time: " << work_time;
	}

private:
	unsigned int work_time;
};