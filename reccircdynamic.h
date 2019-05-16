#ifndef RECCIRCDYNAMIC_H_
#define RECCIRCDYNAMIC_H_

#include <iostream>
#include <string>

class Figure
{
public:
	Figure() {}
	virtual void Field() = 0;
	virtual void Circuit() = 0;
	virtual ~Figure() {}
};

class Rectangle : public Figure
{

public:
	Rectangle(float a, float b);
	virtual void Field();
	virtual void Circuit();
	virtual ~Rectangle() {};
private:
	float side_1, side_2;
};

class Circle : public Figure
{
public:
	Circle(float r);
	virtual void Field();
	virtual void Circuit();
	virtual ~Circle() {}
private:
	float radius;
};
#endif /* RECCIRCDYNAMIC_H_ */
