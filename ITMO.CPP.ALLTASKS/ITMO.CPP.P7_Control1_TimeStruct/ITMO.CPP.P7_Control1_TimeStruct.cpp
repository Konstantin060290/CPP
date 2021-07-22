// ITMO.CPP.P7_Control1_TimeStruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct Time {

	int hours;
	int minutes;
	int seconds;

	Time()
	{
		cout << "Enter hours, minutes and seconds:\n";
		cin >> hours;
		cin >> minutes;
		cin >> seconds;
	}

	int Sum()
	{
		cout << "Sum time:\n";
		int time_sum;
		time_sum = hours * 3600 + minutes * 60 + seconds;
		return time_sum;
	}

	int Diff()
	{
		cout << "Diff time:\n";
		int time_diff;
		time_diff = hours * 3600 - minutes * 60 - seconds;
		return time_diff;
	}
};



int main()
{
	Time t1;
	cout << t1.Sum()<<" seconds\n";
	cout << t1.Diff()<<" seconds\n";
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
