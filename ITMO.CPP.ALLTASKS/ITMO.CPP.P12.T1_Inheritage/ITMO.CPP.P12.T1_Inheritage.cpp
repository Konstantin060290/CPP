﻿// ITMO.CPP.P12.T1_Inheritage.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "student.h";
#include "teacher.h";


int main()
{

	
	student s1("Filyurin", "Konstantin", "Vladimirovich", { 1,2,3,4 });
	

	std::cout << s1.get_full_name() << std::endl;
	std::cout<<s1.get_average_score() <<std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Sergeev", "Dmitry", "Sergeevich", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Qant. of hours: " << tch->get_work_time() << std::endl;	
	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.