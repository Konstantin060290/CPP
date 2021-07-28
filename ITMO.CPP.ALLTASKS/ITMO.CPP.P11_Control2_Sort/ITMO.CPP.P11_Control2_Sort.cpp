// ITMO.CPP.P11_Control2_Sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки

class Point
{
public:
	double x;
	double y;
	double l;
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		l = sqrt(pow(this->x, 2) + pow(this->y, 2));
	}
};

bool operator> (const Point& p1, const Point& p2)
{
	if (p1.l > p2.l)
	{
		return  true;
	}
	return false;
}

bool operator< (const Point& p1, const Point& p2)
{
	if (p1.l < p2.l)
	{
		return  true;
	}
	return false;
}

std::ostream& operator<< (std::ostream& out, const Point& p1)
{
	out << "Point(" << p1.x << ", " << p1.y << ")";

	return out;
}


int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
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
