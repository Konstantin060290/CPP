// ITMO.CPP.P11.T1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet-feet); // остаток - это дюймы
	}
	
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}

	Distance operator+ (const Distance&) const;

	Distance operator+ (const float fl) const;

	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

};

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\' - " << dist.inches << "\"\n";
	return out;
}



Distance Distance::operator+ (const Distance& d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance Distance::operator+(const float fl) const {
	Distance d2 = fl;
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	while (i >= 12) {
		i -= 12;
		f++;
	}
	return Distance(f, i);
}

int main()
{
	float mtrs;
	Distance d1 = 2.35F;
	mtrs = static_cast<float>(d1);
	Distance d2 = mtrs;
	std::cout << d1;
	std::cout << d2;
	mtrs = 3.6F;
	std::cout << mtrs << std::endl;
	Distance d3 = d2 + mtrs;
	std::cout << d3;
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
