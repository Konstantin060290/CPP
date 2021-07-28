// ITMO.CPP.P14_Control_Arraytemplate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



template<typename t>
t average_of_array(t arr[], int size)
{
	double sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	double average = sum / size;
	return average;
}

int main()
{
	int array1[] = { 24,56,21,4,1,90,67,89 };
	int k1 = sizeof(array1) / sizeof(array1[0]);
	cout << average_of_array(array1, k1) << endl;

	long array2[] = { 214748364, 147483647,14743647,14483647};
	int k2 = sizeof(array2) / sizeof(array2[0]);
	cout << average_of_array(array2, k2) << endl;

	double array3[] = { 24.0,56.0,21.0,4.0,1.0,90.0,67.0,89.5 };
	int k3 = sizeof(array3) / sizeof(array3[0]);
	cout << average_of_array(array3, k3) << endl;

	char array4[] = { 's','a','t','f' };
	int k4 = sizeof(array4) / sizeof(array4[0]);
	cout << int(average_of_array(array4, k4)) << endl;


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
