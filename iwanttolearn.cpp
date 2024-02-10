#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
using pairlist_t = std::vector<std::pair<std::string, int>>; // Using the "using" statement is better than typedef, so try and use it when you can

namespace first {
	int a = 1;
}

int main() {
	// Making output
	std::cout << "Hello World!" << '\n'; //std::cout = standard character output, << = begin output and '\n' = new line
	std::cout << "I am alex" << '\n';

	// Data types

	// integer (whole number)
	int age = 14;

	// double (number including decimal)
	double z = 12.5;

	// char (single character)
	char grade = 'A';

	// boolean (true/false)
	bool forSale = false;

	// string (object that represents a sequence of text)
	std::string name = "Alex";



	int x; // declaration
	x = 5; // assignment
	int y = 6; //combining them into one line
	int sum = x + y;

	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old" << '\n';

	// Constances (Being demonstrated in code that calculates circumference)

	const double pi = 3.14159; //By adding const, this number is no longer changeable
	double radius = 10;
	double cirumference = 2 * pi * radius;
	std::cout << cirumference << "cm" << '\n';

	// Namespaces

	int a = 0; // Check above main function

	std::cout << a << '\n'; // This will display the local "a" as output, which is the one inside the main function
	std::cout << first::a << '\n'; // This will display the value of the "a" from the namespace called "first"

	// You can also use "using namespace ______" to make you function use a specific namespace for a variable
	// To save on some typing by making namespaces such as "using std::cout;" or "using std::string;". After writing this, you can use "string" and "cout" instead of "std::string" and "std::cout"

	// Typedef

	// Check above main function

	pairlist_t pairlist; // The typedef "pairlist_t" combines a really long data type into something easier to write

	// Arithmetic Operators

	int students = 20;

	students = students + 1; // Adding 1 to the amount of students

	students += 1; // Does the same thing

	students++; // Does the same thing in increments of 1

	students = students - 1; // Taking 1 from the amount of students

	students -= 1; // Does the same thing

	students--; // Decrements by 1

	students = students * 2; // Times by 2

	students *= 2; // Does same thing

	students = students / 2; // Divides by 2

	students /= 2; // Same thing

	int remainder = students % 3; // %, also known as modulus, determines the remainder of a number when divided

	std::cout << remainder;

	return 0;
}