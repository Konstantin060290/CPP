// ITMO.CPP.P11.T4_IndexOverride.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StudentGrade
{
	string name;
	char grade;
};

class GradeMap
{
private:
	vector<StudentGrade> m_map;
public:
	GradeMap()
	{ }
	char& operator[](const string& name);
};

char& GradeMap::operator[](const string& name)
{
	// Найдём ли мы имя ученика в векторе
	for (auto& ref : m_map)
	{
		// Если нашли, то возвращаем ссылку на его оценку
			if (ref.name == name)
				return ref.grade;
	}
	// Не нашли - создаём новый StudentGrade для нового ученика
	StudentGrade temp{ name, ' ' };
	// Помещаем его в конец вектора
	m_map.push_back(temp);
	// И возвращаем ссылку на его оценку
	return m_map.back().grade;
}
int main()
{
	GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	cout << "John has a grade of " << grades["John"] << endl;
	cout << "Martin has a grade of " << grades["Martin"] << endl;
	cout << "New name and grade?" << endl;
	string name;
	char grade;
	cin >> name >> grade;
	grades[name] = grade;
	std::cout << name << " has a grade of " << grades[name] << endl;
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
