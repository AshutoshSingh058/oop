/*Implement a class Complex which represents the Complex Number data type.
Implement
the following operations:
1. Constructor (including a default constructor which creates the complex number
0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.*/

// C++ program to illustrate the concept of default
// constructors
#include <iostream>
using namespace std;

class construct {
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;
	return 1;
}

