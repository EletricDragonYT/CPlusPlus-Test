#include <iostream>

// Variable Examples:
std::string a = "Hello.\n";
char b = 'h';
int c = 12;
double d = 5.24;
bool e = true;
const std::string f = "Can't change this.\n";

int bottles;
int numBottles = 100;

void _naME_Examp3$() {
	// This is an example of a functions name limitations.
	// The includes characters are all available to use.
	// The first character can not be numbers or dollar signs.

}

int return_example(int a, int b) {

	int c = a + b;

	// When called, the function takes in the two parameters given.
	// Then those two parameters are added together, and the result is then returned.
	// The variable which called this function then gets the value of the return.

	return c;
}

int return_example_call() {

	int yum;
	int tum;
	std::cout << "Yum = "; std::cin >> yum;
	std::cout << "Tum = "; std::cin >> tum;

	int number = return_example(yum, tum);
	std::cout << number;

	// This function declares 3 variables, the first are given values through an input.
	// The third variable then takes the other two variables and calls the return_example() function.
	// When calling the function, it uses the other two variables for the parameters.

	// The called function then returns the result to the variable, giving it its new value.
	// The third variable is then printed to the terminal giving the new value.

	return 0;
}

int param_example(int a, int b) {

	std::cout << a + b;

	// When this function is called, the given parameters are added together and printed to the terminal.

	return 0;
}

int call_example() {
	
	_naME_Examp3$();
	param_example(32, 64);

	// This function calls two other functions, the first one has no parameters and the other has two.

	return 0;
}

double overload_example(double a, double b) {

	std::cout << a * b;

	// If the calling code only has two parameters, then this function is called and executed.
	// However, if a third parameter is added then the below function is called and executed.

	return 0;
}

double overload_example(double a, double b, double c) {

	std::cout << a * (b * c);

	return 0;
}

int math_example() {

	std::cout <<
		12 + 63 << "\n" <<
		43 - 21 << "\n" <<
		15 * 10 << "\n" <<
		50 / 10 << "\n" <<
		36 / 11 << "\n";

	return 0;
}

int conditions_example() {

	if (10 > 23) {

		std::cout << "Bigger.\n";
	}
	else if (10 >= 23) {

		std::cout << "Bigger or Equal To.\n";
	}
	else if (10 < 23) {

		std::cout << "Smaller.\n";
	}
	else if (10 <= 23) {

		std::cout << "Smaller or Equal To.\n";
	}
	else if (10 == 23) {

		std::cout << "Equal To.\n";
	}
	else if (10 != 23) {

		std::cout << "Not Equal To.\n";
	}
	else if (a._Equal("Hello")) {

		std::cout << "Equal To.\n";
	}
	else if (10 != 23 && 10 >= 12) {

		std::cout << "Not Equal To and Greater Than.\n";
	}
	//else if (10 != 23 || 8 >= 12) {
	//
	//	std::cout << "Not Equal To or Greater Than.\n";
	//}
	else if (c != 0) {

		std::cout << "Not Equal To.\n";
	}
	
	return 0;
}

int cond_state_example() {

	if (a == "trivia") {

		std::cout << "Okay.\n";
	}
	else if (a == "hello") {

		std::cout << a << "world\n";
	}
	else {

		std::cout << "No\n";
	}

	switch (c) {

		case 4:
			std::cout << "Hello\n";
			break;
		case 12:
			std::cout << "Poop\n";
			break;
		default:
			std::cout << "No\n";
			break;
	}

	while (c != 0) {

		std::cout << "C is no equal to 0.\n";
	}

	for (int bottles = numBottles; bottles > 0; bottles--) {

		std::cout << bottles << " bottles of beer of the wall.\n";
		std::cout << "Take one down and pass it around.\n";
	}

	return 0;
}

template <class T> T example(T x, T y) {
	// The {class} doesnt seem like it can be changed to anything else.

	T result = x + y;
	return result;

}

template <class T>
class example_two {
	T x, y;
	// Template name, and parameters.

public:
	example_two(T first, T second) {
		x = first;
		y = second;
		// Sets the previously made parameters to new parameters (for some reason)
	}

public:
	T add()
	{
		T result;
		result = x + y;
		return result;
		// Adds the two given parameters and returns it back to the caller.
	}

	// example_two <int> intExample(12, 45);
	// Calls the template, declares its type, and creates a new function with a name and parameters.

	// std::cout << intExample.add();
	// Calls the newly created function and its .add() function.
};

class classTest {


};