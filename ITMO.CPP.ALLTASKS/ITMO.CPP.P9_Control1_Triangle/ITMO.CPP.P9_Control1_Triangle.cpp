// ITMO.CPP.P9_Control1_Triangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
using namespace std;

class MyErrors
{
public:
	MyErrors() : message("Треугольник не существует")
	{
	}

	//void printMessage() const
	//{
	//	cout << message << endl;
	//}
private: string message;
};


class Triangle
{
public:
	double a;
	double b;
	double c;

	double Area(double a, double b, double c)
	{
		if (c > (a + b) || b > (a + c) || a > (c + b))
		{
			throw "Triangle is not exist!";
		}

		double per = a + b + c;
		double p = per /2;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
};



int main()
{
	cout.precision(4);
	system("chcp 1251");
	Triangle Tr1;
	try
	{
		cout << "Введите стороны треугольника:\n";
		cin >> Tr1.a; cin >> Tr1.b; cin >> Tr1.c;
		cout << "Площадь треугольника =" << Tr1.Area(Tr1.a, Tr1.b, Tr1.c) << endl;
	}
	catch(const char* msg)
	{
		/*Tr1.a = 0; Tr1.b = 0; Tr1.c = 0;*/
		cout << msg <<endl;
	}
	
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
