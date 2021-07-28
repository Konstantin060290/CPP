// ITMO.CPP.P14.T1_Templates.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

	void sorting(int arr[], int size)
	{
		int j = 0;
		for (int i = 0; i < size; i++) {
			int x = arr[i];
			for (j = i - 1; j >= 0 && x < arr[j]; j--)
				arr[j + 1] = arr[j];
			arr[j + 1] = x;
		}
	}

	template<class T>
	void sorting(T arr[], int size)
	{
		int j = 0;
		for (int i = 0; i < size; i++) {
			T x = arr[i];
			for (j = i - 1; j >= 0 && x < arr[j]; j--)
				arr[j + 1] = arr[j];
			arr[j + 1] = x;
		}
	}

	template<typename t>
	void show(t arr[], int size)
	{
		for (int i = 0; i < size; i++) cout << arr[i] << ";";
	}


int main()
{
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, world";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	sorting(arr, k1);
	show(arr, k1);
	cout << endl;
	sorting(arrd, k2);
	for (int i = 0; i < k2; i++) cout << arrd[i] << ";";
	cout << endl;
	sorting(arrc, k3);
	for (int i = 0; i < k3; i++) cout << arrc[i] << ";";
	cout << endl;
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
