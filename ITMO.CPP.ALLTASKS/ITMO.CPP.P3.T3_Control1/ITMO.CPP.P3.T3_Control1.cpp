// ITMO.CPP.P3.T3_Control1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double area(double a1, double b1, double c1)
{
	double polu_p = (a1 + b1 + c1) / 2;
	double sq = sqrt(polu_p * (polu_p - a1) * (polu_p - b1) * (polu_p - c1));
	return sq;
}


int main()
{
	system("chcp 1251");
	double coords[10];
	std::cout << "Введите координаты 5 точек (x, y):\n";

	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "[X" << i + 1 << "]" << ": ";
		cin >> coords[k];
		cout << "[Y" << i + 1 << "]" << ": ";
		cin >> coords[k + 1];
		k = k + 2;
	}

	//x1 - 0
	//y1 - 1
	//x2 - 2
	//y2 - 3
	//x3 - 4
	//y3 - 5
	//x4 - 6
	//y4 - 7
	//x5 - 8
	//y5 - 9

	//Проверка на существование фигуры не осуществлялась.

	double a = sqrt(pow((coords[0] - coords[2]), 2) + pow((coords[1] - coords[3]), 2));
	double e = sqrt(pow((coords[2] - coords[4]), 2) + pow((coords[3] - coords[5]), 2));
	double d = sqrt(pow((coords[4] - coords[6]), 2) + pow((coords[5] - coords[7]), 2));
	double c = sqrt(pow((coords[6] - coords[8]), 2) + pow((coords[7] - coords[9]), 2));
	double b = sqrt(pow((coords[8] - coords[0]), 2) + pow((coords[9] - coords[1]), 2));
	double f = sqrt(pow((coords[2] - coords[8]), 2) + pow((coords[3] - coords[9]), 2));
	double g = sqrt(pow((coords[2] - coords[6]), 2) + pow((coords[3] - coords[7]), 2));
	double s = area(a, b, f) + area(f, g, c) + area(g, e, d);
	cout << "Площадь многоугольника равна:" << s << endl;
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
