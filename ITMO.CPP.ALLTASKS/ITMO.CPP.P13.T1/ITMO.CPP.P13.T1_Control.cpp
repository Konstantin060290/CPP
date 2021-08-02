// ITMO.CPP.P13.T1_Control.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Item
{
private:
	string title;
	double price;
public:
	virtual void getdata()
	{
		cout << "\nВведите заголовок : ";
		cin >> title;
		cout << "Введите цену : ";
		cin >> price;
	}
	virtual void putdata()
	{
		cout << "\nЗаголовок: " << title;
		cout << "\nЦена:" << price;
	}
};
	class Paperbook : public Item
	{
	private:
		int pages;
	public:
		void getdata()
		{
			Item::getdata();
			cout << "Введите число страниц : ";
			cin >> pages;
		}
			void putdata()
		{
			Item::putdata();
			cout << "\nСтраниц:" << pages;
		}
	};

	class AudioBook : public Item
	{
	private:
		double time;
	public:
		void getdata()
		{
			Item::getdata();
			cout << "Введите время звучания : ";
			cin >> time;
		}
		void putdata()
		{
			Item::putdata();
			cout << "\nВремя звучания : "<< time;
		}
	};

	int main()
	{
		SetConsoleOutputCP(1251);
		Item* pubarr[100];
		int n = 0;
		char choice;
		do
		{
			cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
			cin >> choice;
			if (choice == 'b')
				pubarr[n] = new Paperbook;
			else
				pubarr[n] = new AudioBook;
				pubarr[n++]->getdata();
			cout << "Продолжать((у / n) ? ";
			cin >> choice;
		} while (choice == 'y');
		for (int j = 0; j < n; j++) //цикл по всем объектам
			pubarr[j]->putdata(); //вывести данные о публикации
		cout << endl;
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
