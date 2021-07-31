#ifndef DOT_H
#define DOT_H

class Dot {
	friend class Triangle;
private:
	double x;
	double y;
public:
	Dot();
	Dot(double x, double y);
	double distanceTo(Dot point);
};

#endif // DOT_H