#include "reccircdynamic.h"

void menu();
void calculate(Figure * x);

int main()
{
	menu();
	char choice;
	do
	{
	std::cout << ">> ";
	std::cin >> choice;

	switch (choice)
	{
	case 'r':
	{
		std::cout << "Enter circle radius: ";
		float promien;
		while (!(std::cin >> promien))
		{
			std::cout << "You must enter digits!" << std::endl;
			std::cin.clear();
			std::cin.sync();
		}
		Figure * circ = new Circle(promien);
		calculate(circ);
		delete circ;
		circ = nullptr;
		break;
	}
	case 'c':
	{
		std::cout << "Enter sizes of rectangle sides: ";
		float bok1, bok2;

		while (!(std::cin >> bok1 >> bok2))
		{
			std::cout << "You must enter digits!" << std::endl;
			std::cin.clear();
			std::cin.sync();
		}
		Figure * rec = new Rectangle(bok1, bok2);
		calculate(rec);
		delete rec;
		rec = nullptr;
		break;
	}
	case 'e':
		std::cout << "GoodBye!" << std::endl;
		break;
	default:
		std::cout << "Bad choice!!!\n";
	}
	}
	while (choice != 'e');

	return 0;
}

void menu()
{
	std::cout << "WELCOME!\n";
	std::cout << "Type 'r' to calculate field and circuit of the rectangle\n";
	std::cout << "Type 'c' to calculate field and circuit of the circle\n";
	std::cout << "'e' to exit program\n";
}

void calculate(Figure * x)
{
	x->Field();
	x->Circuit();
}


