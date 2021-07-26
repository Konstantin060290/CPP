#include "Triangle.h"
#include <iostream>
using namespace std;
class Triangle

{
public:
	double a;
	double b;
	double c;
	double per = 0;

	Triangle(Dot& d1, Dot& d2, Dot& d3)
	{
		a = d1.distanceTo(d2);
		b = d2.distanceTo(d3);
		c = d3.distanceTo(d1);
	}

public:
	void Show()
	{
		cout << "Side a = " << a << endl;
		cout << "Side b = " << b << endl;
		cout << "Side c = " << c << endl;
	}

	double Perimeter()
	{
		return per = a + b + c;
	}

	double Area()
	{
		double per = Perimeter();
		double p = per / 2;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}

};