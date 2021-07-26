/* student.h */
#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
#include "../ITMO.CPP.P8_T3/IdCard.h"
using namespace std;
class Student
{
public:
	IdCard* iCard;
	void setIdCard(IdCard* c);
	IdCard getIdCard();

public:
	// ����������� ������ Student
	Student(string name, string last_name, IdCard* id);
	// ������ ������ � �������� � ����
	void save();
	// ���������� ������ Student
	~Student();

public:
	// ��������� ����� ��������
	void set_name(string);
	// ��������� ����� ��������
	string get_name();
	// ��������� ������� ��������
	void set_last_name(string);
	// ��������� ������� ��������
	string get_last_name();
		// ��������� ������������� ������
		void set_scores(int[]);
	// ��������� �������� �����
	void set_average_score(double);
	// ��������� �������� �����
	double get_average_score();
private:
	// ������������� ������
	int scores[5];
	// ������� ����
	double average_score;
	// ���
	string name;
	// �������
	string last_name;
};