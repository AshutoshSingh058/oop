// Here's the program with comments added to explain the constructors and other parts of the code:

#include<iostream>
using namespace std;

class complex {
    float x; // Real part of the complex number
    float y; // Imaginary part of the complex number

public:
    // Default constructor
    // Initializes the complex number to 0 + 0i
    complex() {
        x = 0;
        y = 0;
    }

    // Overloaded constructor to allow direct initialization
    // complex(float real, float imag) : x(real), y(imag) {}

    // Overloaded + operator to add two complex numbers
    complex operator+(complex);

    // Overloaded * operator to multiply two complex numbers
    complex operator*(complex);

    // Friend function to overload >> operator for input
    // Reads a complex number from the input stream
    friend istream &operator>>(istream &input, complex &t) {
        cout << "Enter the real part: ";
        input >> t.x;
        cout << "Enter the imaginary part: ";
        input >> t.y;
        return input; // Return the input stream to allow chaining
    }

    // Friend function to overload << operator for output
    // Prints a complex number to the output stream
    friend ostream &operator<<(ostream &output, const complex &t) {
        output << t.x << "+" << t.y << "i";
        return output; // Return the output stream to allow chaining
    }
};

// Member function to overload + operator
// Adds two complex numbers and returns the result
complex complex::operator+(complex c) {
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

// Member function to overload * operator
// Multiplies two complex numbers and returns the result
complex complex::operator*(complex c) {
    complex temp2;
    temp2.x = (x * c.x) - (y * c.y); // Real part
    temp2.y = (y * c.x) + (x * c.y); // Imaginary part
    return temp2;
}

int main() {
    complex c1, c2, c3, c4;
    cout << "Default constructor value = ";
    cout << c1 << endl; // Print the default constructed complex number

    cout << "\nEnter the 1st number:\n";
    cin >> c1; // Read the first complex number

    cout << "\nEnter the 2nd number:\n";
    cin >> c2; // Read the second complex number

    c3 = c1 + c2; // Add the two complex numbers
    c4 = c1 * c2; // Multiply the two complex numbers

    cout << "\nThe first number is " << c1 << endl;
    cout << "The second number is " << c2 << endl;
    cout << "The addition is " << c3 << endl;
    cout << "The multiplication is " << c4 << endl;

    return 0;
}



// ### Key Points in the Code:

// 1. **Default Constructor (`complex()`)**:
//    - This initializes a complex number to `0 + 0i`. It’s useful for creating complex number objects without providing initial values.

// 2. **Overloaded Operators**:
//    - The `operator+` and `operator*` functions are member functions that allow you to add and multiply complex numbers using the `+` and `*` operators, respectively.

// 3. **Friend Functions**:
//    - `operator>>` and `operator<<` are declared as friend functions. This allows them to access private members `x` and `y` of the `complex` class directly.
//    - `operator>>` is used to read complex numbers from input.
//    - `operator<<` is used to print complex numbers to the output.

// 4. **Usage in `main` Function**:
//    - Demonstrates the use of the default constructor, input, addition, multiplication, and output operations with complex numbers.
// '''