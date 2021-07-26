// ITMO.CPP.P10_Control_Triangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Dot.h"
using namespace std;

class Triangle
{
public:
	double a;
	double b;
	double c;
	double per = 0;

	Triangle(Dot d1, Dot d2, Dot d3)
	{
		a = d1.distanceTo(d2);
		b = d2.distanceTo(d3);
		c = d3.distanceTo(d1);
	}

public:
	void Show()
	{
		cout << "Side a = " << a << endl;
		cout << "Side b = " << b << endl;
		cout << "Side c = " << c << endl;
	}

	double Perimeter()
	{
		return per = a + b + c;
	}
	
	double Area()
	{
		double per = Perimeter();
		double p = per / 2;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}

};


int main()
{
	cout << "Create first point:" << endl;
	int x; cin >> x;
	int y; cin >> y;
	Dot d1 = Dot(x, y);
	cout << "Create second point:" << endl;
	cin >> x;
	cin >> y;
	Dot d2 = Dot(x, y);
	cout << "Create third point:" << endl;
	cin >> x;
	cin >> y;
	Dot d3 = Dot(x, y);
	Triangle tr1 = Triangle(d1, d2, d3);
	tr1.Show();
	cout << "Perimeter = " << tr1.Perimeter() << endl;
	cout << "Area = " << tr1.Area() << endl;
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
