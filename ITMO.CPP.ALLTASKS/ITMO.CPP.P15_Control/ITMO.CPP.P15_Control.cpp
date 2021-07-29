// ITMO.CPP.P15_Control.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <string>
#include <random>
using namespace std;

struct StudentGrade
{
	string name;
	string grade;
};

map <string, string> Student_grade;

int getRandomNumber(int min, int max)
{
	int c = min + rand() % (max - min);
	return c;
}

int main()
{
	StudentGrade s1;
	int quantity;
	cout << "Enter quantity of stdents in a group:" << endl; cin >> quantity;
	for (int i = 0; i < quantity; i++)
	{
		cout << "Enter name of student:" << endl; cin >> s1.name;
		s1.grade = "0";
		Student_grade.emplace(s1.name, s1.grade);
	}
	
	string flag = "y";
	while (flag == "y")
	{
		string input;
		cout << "Enter name of student for grade:" << endl; cin >> input;
		auto iter = Student_grade.find(input);
		if (iter == Student_grade.end())
		{
			cout << "Student doesn't found";
		}
		iter->second = to_string(getRandomNumber(1,5));
		cout << "Student: " << iter->first << "; grade: " << iter->second << endl;
		cout << "Again y/n?"; cin >> flag;
		
	}
	system("pause");

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
