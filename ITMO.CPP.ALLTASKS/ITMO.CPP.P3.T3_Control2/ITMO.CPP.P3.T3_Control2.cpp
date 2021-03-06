// ITMO.CPP.P3.T3_Control2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int a;
//	std::cout << "Введите число для взятия кубического корня:\n"; cin >> a;
//	int result;
//	result = pow(a, 1 / 3);
//	cout << result;
//
//}
#include <iostream>
#include <stdio.h>

double mabs(double x) { return (x < 0) ? -x : x; }

int main(void) {
	double num = 8;
	int rootDegree = 3;

	printf("Число, корень которого считаем а = %f\n", num);
	printf("Корень степени n = %d\n", rootDegree);

	double eps = 0.00001;             //допустимая погрешность
	double root = num / rootDegree;   //начальное приближение корня
	double rn = num;                  //значение корня последовательным делением
	int countiter = 0;                //число итераций
	while (mabs(root - rn) >= eps) {
		rn = num;
		for (int i = 1; i < rootDegree; i++) {
			rn = rn / root;
		}
		root = 0.5 * (rn + root);
		countiter++;
	}

	printf("root = %f\n", root);
	printf("Число итераций = %i\n", countiter);

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
