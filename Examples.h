#pragma once
#include <iostream>

inline int inline_function_example() {

	std::cout << "Hello World.\n";

	return 0;
}

class classTest {
	// Attributes are placed here, above any Class Methods.
	int ingredients;
	int cookie;

public:

	void bake_cookie() {
		// This is a method which has executable code.
		cookie++;

	}

	int get_cookie() {

		return cookie;
	}

	int buy_ingredients();
};

classTest test_class() {

};