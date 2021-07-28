// ITMO.CPP.P11_Contro1_Time_PlusOverride.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
	double b = 7;

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
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	
	void Normalize_Time() {

		while (seconds > 60)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes > 60)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
		while (seconds < -60)
		{
			minutes -= abs(seconds / 60);
			seconds = seconds % 60;
		}
		while (seconds < 0 && seconds > -60)
		{
			seconds = 60-abs(seconds);
		}
		while (minutes < -60)
		{
			hours -= abs(minutes / 60);
			minutes = minutes % 60;
		}
		while (minutes < 0 && minutes > -60)
		{
			minutes = 60 - abs(minutes);
		}

	}

	void Sum_time(Time t1, Time t2) {

		seconds = t1.seconds + t2.seconds;
		minutes = t1.minutes + t2.minutes;
		hours = t1.hours + t2.hours;	
		
		Normalize_Time();
	}

	Time operator+ (Time &t1);
	Time operator- (Time &t1);
	Time operator+ (double hrs);
	//double operator+ (const Time& t1);
};

 Time Time::operator+ (Time& t1) {
	seconds = seconds + t1.seconds;
	minutes = minutes + t1.minutes;
	hours = hours + t1.hours;
	Normalize_Time();
	return Time(hours, minutes, seconds);
}

 Time Time::operator+ (double hrs)
 {
	 hours = hours + hrs;
	 Normalize_Time();
	 return Time(hours, minutes, seconds);
 }

 double operator+ (double a, const Time& t1)
 {
	 return a + t1.b;
 }

 Time Time::operator- (Time& t1) {
	 
	 seconds = seconds - t1.seconds;
	 minutes = minutes - t1.minutes;
	 hours = hours - t1.hours;
	 Normalize_Time();
	 return Time(hours, minutes, seconds);
 }
 
 bool operator> (const Time& t1, const Time& t2)
 {
	 if (t1.hours > t2.hours)
	 {
		 return true;
	 }
	return false;
 }

int main()
{
	Time t1(3, 58, 47);
	Time t2(3, 23, 38);
	Time t3;
	t3.Sum_time(t1, t2);
	t3.View();
	Time t4;
	t4 = t1 - t2;
	t4.View();
	Time t5(3, 23, 38);
	t5 = t5 + 5;
	t5.View();
	cout << 5.0 + t5 << endl;
	if (t5 > t1)
	{
		cout << "t5 > t1";
	}
	else 
		cout << "t5 <= t1";
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
