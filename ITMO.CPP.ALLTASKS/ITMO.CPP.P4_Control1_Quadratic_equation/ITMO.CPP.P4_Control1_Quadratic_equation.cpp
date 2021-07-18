// ITMO.CPP.P4_Control1_Quadratic_equation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
	/*setlocale(LC_ALL, "Russian");*/
	double x1 = 0;
	double x2 = 0;
	double a;
	double b;
	double c;
	cout << "Enter cofficients a, b, c of qudratic equation:\n";
	cin >> a; cin >> b; cin >> c;
	cout << "x1 before transfer:" << x1<<"\n";
	cout << "x2 before transfer:" << x2 << "\n";
	Myroot(a, b, c, x1, x2);
	

	system("pause");
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double discr = pow(b, 2) - 4 * a * c;
	cout << "Discriminant = " << discr<<"\n";
	if (discr > 0)
	{
		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "x1 after transfer:" << x1 << "\ny1 after transfer:" << x2;
		return 1;
	}
	else if (discr == 0)
	{
		x1 = -b / (2 * a);
		x2 = -b / (2 * a);
		cout << "x1=x2 after transfer:" << x1;
		return 0;
	}
	else
	{
		cout << "There is no roots";
		return -1;
		
	}
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
