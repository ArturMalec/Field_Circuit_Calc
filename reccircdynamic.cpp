#include "reccircdynamic.h"

Rectangle::Rectangle(float a, float b)
{
	side_1 = a;
	side_2 = b;
}

void Rectangle::Field()
{
	std::cout << "Field of rectangle is: " << side_1 * side_2 << std::endl;
}

void Rectangle::Circuit()
{
	std::cout << "Circuit of rectangle is: " << (2*side_1) + (2*side_2) << std::endl;
}

Circle::Circle(float r)
{
	radius = r;
}

void Circle::Field()
{
	std::cout << "Field of circle is: " << 3.14*radius*radius << std::endl;
}

void Circle::Circuit()
{
	std::cout << "Circuit of circle: " << 2*3.14*radius << std::endl;
}


