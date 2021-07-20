// ITMO.CPP.P5_Control1_rray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void first_func(int n, int mas[])
{
	//
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "mas[" << i << "]=";
	//	cin >> mas[i];
	//}

	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "summ = " << s<<"\n";
	double averege;
	averege = s / n;
	cout << "averege =" << averege<<"\n";
	int sum_negative = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			sum_negative += mas[i];
		}
	}
	cout << "summ negative = " << sum_negative<<"\n";
	int sum_pos = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			sum_pos += mas[i];
		}
	}
	cout << "summ positive = " << sum_pos<<"\n";

	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i] > mas[i - 1])
		{
			max = mas[i];
		}
	}
	cout << "max = " << max << "\n";
}

void second_func(int N, int a[])
{

	/*const int N = 10;*/
	/*int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };*/
	int min = 0; // для записи минимального значения
	int buf = 0; // для обмена значениями

	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// перестановка этого элемента, поменяв его местами с текущим
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i = 0; i<N; i++)
		std::cout << a[i] << '\t';
}


int main()
{
	int z = 0;
	cout << "Enter length of array:\n"; cin >> z;
	int* array = new int[z];
	cout << "Enter values of array:\n";
	for (int i = 0; i < z; i++)
	{
		cin >> array[i];
	}
	first_func(z, array);
	second_func(z, array);
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
