// ITMO.CPP.P2.Controls2_4_Shots.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
#include <math.h>
#include <time.h>


int GetRandomNumber(int min, int max)
{
	// Установить генератор случайных чисел
	srand(time(NULL));

	// Получить случайное число - формула
	int num = min + rand() % (max - min + 1);

	return num;
}


int main()
{
	system("chcp 1251");
	int x;
	int y;
	int n;

	int new_x;
	new_x = GetRandomNumber(-2, 2);
	int new_y;
	new_y = GetRandomNumber(-2, 2);

	int score = 0;
	double c1_area = M_PI * pow(1, 2);//площадь внутренней окружности
	double c2_area = M_PI * pow(2, 2);//площадь внутренней окружности
	int regime;
	cout << "Выберите режим игры: \n";
	cout << "1 - Стандартный режим;\n";
	cout << "2 - Центр мишени не известен (стрельба вслепую);\n";
	cout << "3 - Игра со случайной помехой;\n";
	cout << "4 - Игра до достижения определенного числа очков;\n";
	cin >> regime;
	switch (regime)
	{
	case 1:
		cout << "Введите количество выстрелов: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			double shot_score = 0;
			cout << "Введите координаты выстрела X и Y: "; cin >> x; cin >> y;
			double r = sqrt(pow(x, 2) + pow(y, 2));
			double s = M_PI * pow(r, 2);
			if (s <= c1_area)
			{
				shot_score = 10;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else if (s > c1_area&& s <= c2_area)
			{
				shot_score = 5;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else
			{
				shot_score = 0;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			score += shot_score;
		}
		cout << "Общее число баллов - " << score << "\n";
		if (score / n == 10)
		{
			cout << "Вы - снайпер!\n";
		}
		else if ((score / n < 10) && (score / n >= 5))
		{
			cout << "Вы - просто стрелок!\n";
		}
		else
		{
			cout << "Вы - мозила! Тренеруйтесь!\n";
		}
	
	case 2:

		//cout << "Площадь внутренней окружности: " << c1_area << "\n";
		//cout << "Площадь наружной окружности: " << c2_area << "\n";
		//cout << "Центр мишени: " << new_x <<","<< new_y << "\n";
		cout << "Введите количество выстрелов: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			double shot_score = 0;
			cout << "Введите координаты выстрела X и Y: "; cin >> x; cin >> y;
			double r = sqrt(pow(abs(x-new_x), 2) + pow(abs(y-new_y), 2));
			/*cout << "Радиус: " << r << "\n";*/
			double s = M_PI * pow(r, 2);
			if (s <= c1_area)
			{
				shot_score = 10;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else if (s > c1_area&& s <= c2_area)
			{
				shot_score = 5;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else
			{
				shot_score = 0;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			score += shot_score;
		}
		cout << "Общее число баллов - " << score << "\n";
		cout << "Центр мишени был тут: " << new_x <<","<< new_y << "\n";
		delete &new_x;
		delete &new_y;

	case 3:

		cout << "Введите количество выстрелов: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			double shot_score = 0;
			cout << "Введите координаты выстрела X и Y: "; cin >> x; cin >> y;
			cout << "Помеха! Новые координаты X и Y: "<<x+new_x<<","<<y+new_y<<"\n";
			double r = sqrt(pow(x+new_x, 2) + pow(y+new_y, 2));
			double s = M_PI * pow(r, 2);
			if (s <= c1_area)
			{
				shot_score = 10;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else if (s > c1_area&& s <= c2_area)
			{
				shot_score = 5;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else
			{
				shot_score = 0;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			score += shot_score;
		}
		cout << "Общее число баллов - " << score << "\n";
		if (score / n == 10)
		{
			cout << "Вы - снайпер!\n";
		}
		else if ((score / n < 10) && (score / n >= 5))
		{
			cout << "Вы - просто стрелок!\n";
		}
		else
		{
			cout << "Вы - мозила! Тренеруйтесь!\n";
		}
	case 4:
		cout << "Введите количество баллов: "; cin >> n;
		while (score < n)
		{
			double shot_score = 0;
			cout << "Введите координаты выстрела X и Y: "; cin >> x; cin >> y;
			double r = sqrt(pow(x, 2) + pow(y, 2));
			double s = M_PI * pow(r, 2);
			if (s <= c1_area)
			{
				shot_score = 10;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else if (s > c1_area&& s <= c2_area)
			{
				shot_score = 5;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			else
			{
				shot_score = 0;
				cout << "Выстрел на " << shot_score << " баллов\n";
			}
			score += shot_score;
		} 

		cout << "Общее число баллов - " << score << "\n";

		system("pause");
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
