// ITMO.CPP.P8_Control_Time.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Time
{

public:
	int hours;
	int minutes;
	int seconds;

	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int hrs, int min, int sec)
	{
		hours = hrs;
		minutes = min;
		seconds = sec;
		while (seconds / 60 >= 1)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes / 60 >= 1)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
	}

	void View() const
	{
		cout << hours <<":"<< minutes <<":"<< seconds << endl;
	}

	void Sum_time(Time t1, Time t2) {

		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		while (seconds / 60 >= 1)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes / 60 >= 1)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
	}

};


int main()
{
	Time t1 (2, 135, 65);
	Time t2(3, 23, 38);
	Time t3;
	t3.Sum_time(t1, t2);
	t3.View();
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
