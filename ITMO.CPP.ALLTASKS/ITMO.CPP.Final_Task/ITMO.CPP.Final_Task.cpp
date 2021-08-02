// ITMO.CPP.Final_Task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;
string favorite1();
string favorite2();
string hobby();

class Hobby
{
private:
	string hobby;

public:
	void sethobby(string hobby)
	{
		this->hobby = hobby;
	}
	string gethobby()
	{
		return this->hobby;
	}

};

class Person
{
public:

	class Engineer
	{
	public:
		string favoriteCADsystem;
	};

	class SoftwareDeveloper
	{
	public:
		string favoriteIDE;
	};

	Engineer e1;
	SoftwareDeveloper s1;
	Hobby h1;

	~Person(){};

private:
	string name;
	string surname;
	string midname;
	int age;
	string occupation;

public:

	string getFullName()
	{	
		ostringstream fullname;
		fullname << this->surname <<" " << this->name << " " << this->midname;
		return fullname.str();
	}
	string getAbstarctInform()
	{
		this->getFullName();
		ostringstream abstractinform;
		abstractinform << getFullName() << " " << this->age << " " <<this->occupation <<" "<< e1.favoriteCADsystem
			<<" "<< s1.favoriteIDE << " " << h1.gethobby();
		return abstractinform.str();
	}

	void putName(string name, string surname, string midname)
	{
		this->name = name;
		this->surname = surname;
		this->midname = midname;
	}

	void putAbstractInform(int age, string occupation, string name, string surname, string midname)
	{
		this->putName(name, surname, midname);
		this->age = age;
		this->occupation = occupation;
		if (this->occupation == "engineer")
		{
			e1.favoriteCADsystem = favorite1();
		}
		else if (this->occupation == "swdeveloper")
		{
			s1.favoriteIDE = favorite2();
		}
		string a = hobby();
		h1.sethobby(a);	
	}

	static void putInVector(vector<Person> &v1, Person p1)
	{
		v1.push_back(p1);		
	}

};

void showAllPersons(vector<Person>& v1)
{
	auto iter = v1.begin();
	int a = 0;
	string for_export;
	while (iter != v1.end())
	{	
		cout << v1[a].getAbstarctInform() << endl;
		++iter;
		++a;
	}
}

int writeToFile(vector<Person>& v1)
{
	auto iter = v1.begin();
	int a = 0;
	string for_export;
	while (iter != v1.end())
	{
		for_export += v1[a].getAbstarctInform() + " ";		
		++iter;
		++a;
	}	
	ofstream out;
	out.open("Out.txt");
	if (out.is_open())
	{
		out << for_export << std::endl;
		out.close();
	}
	return 0;
}

static class Interface
{
public:
	static void input(Person &p1)
	{
		string surname; cout << "Enter surname of person:" << endl; cin >> surname;
		string name; cout << "Enter name of person:" << endl; cin >> name;
		string midname; cout << "Enter midname of person:" << endl; cin >> midname;
		int age; cout << "Enter age of person:" << endl; cin >> age;
		string occupation; cout << "Enter person occupation:" << endl; cin >> occupation;
		p1.putAbstractInform(age, occupation, name, surname, midname);
	}
	static int start(vector<Person> &persons)
	{
		cout << "This software allows creat a reference book." << endl;
		cout << "--------------------------------------------" << endl;
		int a; cout << "Enter quantity of people in reference book: " << endl; cin >> a;
		for (int i = 0; i < a; i++)
		{
			Person p1;
			input(p1);
			Person::putInVector(persons, p1);
			
		}
		return 0;
	}
	
};

string favorite1()
{
	cout << "What's his favorite CAD system?" << endl;
	string fc; cin >> fc;
	return fc;

}
string favorite2()
{
	cout << "What's his favorite IDE for developing?" << endl;
	string fi; cin >> fi;
	return fi;
}

string hobby()
{
	cout << "Write some hobbies if person have it." << endl;
	string hb; cin >> hb;
	return hb;
}

int main()
{	
	vector<Person> persons;
	Interface::start(persons);
	showAllPersons(persons);
	writeToFile(persons);
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
