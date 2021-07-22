// ITMO.CPP.P7_Control2_QuadrEquation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct QuadrEq
{
	double x1;
	double x2;
	double discr;

	double Discr(double a, double b, double c)
	{
		discr = pow(b, 2) - 4 * a * c;
		return discr;
	}

	double* Roots(double a, double b, double c)
	{
		if (Discr(a, b, c) > 0)
		{
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			double roots_arr [] = { x1, x2 };
			return roots_arr;
		}
		else if (Discr(a, b, c) == 0)
		{
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			x2 = x1;
			double roots_arr[] = {x1, x2};
			return roots_arr;
		}
		else
		{
			x1 = NULL; x2 = NULL;
			double roots_arr[] = {x1,x2};
			return roots_arr;
		}
	}
};

QuadrEq Calc()
{
	cout << "Enter a, b, c for quadratic equation:\n";
	double a; double b; double c;
	cin >> a; cin >> b; cin >> c;
	QuadrEq Q1;
	cout << "x1 = "<<Q1.Roots(a, b, c)[0]<< " x2 = "<<Q1.Roots(a, b, c)[1]<<"\n";
	system("pause");
	return Q1;
}

int main()
{
	Calc();
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
