#include <iostream>
#include <algorithm>

#include "Main.h"

int functions() {

	std::cout <<
		"Functions are containers which hold code, this code is then executed when the function is called upon by the system.\n" <<
		"Functions need to be declared, this includes the {function_type}, {function_name}, and any parameters it may have.\n" <<
		"Within the function is where other code is defined, defined code will be executed when the function is called.\n" <<
		"- The code inside the function is declared by two curly brackets placed after the parameter parenthesis.\n" <<
		"- The executable code is then defined inside those two curly brackets {this would be executable code}\n" <<
		space <<
		"The {function_type} determines if and which {return} statement is required at the bottom of the function.\n" <<
		"The {return} statement is required to return a variable or value of the same type.\n" <<
		"The function types are:\n" <<
		"- Void: Does not require a {return} statement, but can have one if it does not return a value.\n" <<
		"- std::string: Requires a {return} statement that returns a string of characters value.\n" <<
		"- char: Requires a {return} statement that returns a single character value (\n" <<
		"- int: Requires a {return} statement that requires an integer/whole number value.\n" <<
		"- double: Requires a {return} statement that requires a double/decimal number value.\n" <<
		"- bool: Requires a {return} statement that requires a boolean (true/false) value.\n" <<
		space <<
		"The {return} statement does not return anything to the system, but can return a value to a variable.\n" <<
		"To do this, a variable has to equal the function and some parameters, any changes to the parameters can be\n" <<
		"returned back to the variable which called the function. That variable can then be used or printed to the\n" <<
		"terminal allowing the changes to save and be used.\n" <<
		space <<
		"The {function_name} follows the below restrictions, if the name does not follow the restrictions an error may occur.\n" <<
		"- The name can contain Letters (A), Numbers (3), Underscores (_), and Dollar Signs ($).\n" <<
		"- The name can be other characters or system read words such as Int, Double, or return.\n" <<
		"- The name must begin with a letter or underscores, and the names are case sensitive.\n" <<
		space <<
		"Function parameters are variables declared by the function, and are placed inside the parenthesis.\n" <<
		"Multiple parameters can be added, as well as multiple types of parameters. Parameters are separated via commas {,}\n" <<
		"Each parameter needs to be defined when the function is called and need to be defined in the declaration order.\n" <<
		"- If the parameters are given default values they do not need to be added when calling the function.\n" <<
		"- If there are parameters which dont have default values those need to be declared and defined first.\n" <<
		"- Defining a value when calling the function will override any default parameters that are declared.\n" <<
		"Default parameters can be made by declaring the parameter with a value similar to how normal Variables are declared.\n" <<
		"- Parameters are variables, and can be declared with values, left alone, or be given values or variables when called.\n" <<
		space <<
		"Functions can be called in different ways depending on if they are in the same file, or an Internal/External Library.\n" <<
		"To access functions from External Libraries, the library needs to be included into the current file by using #include <library>\n" <<
		"To access functions from Internal Libraries, the .h or .hpp file needs to be included by using #include " << s << "file.h" << s << "\n" <<
		"- The .h or .hpp file should have the same name as its respective .cpp file where the functions originate from.\n" <<
		space <<
		"Inline functions can be declared within .h or .hpp files instead of a .cpp file, and can be called if the header file is included.\n" <<
		"- Inline functions might change the speed at which the code is executed according to old notes.\n" <<
		space <<
		"Function overloading occurs when calling a function which has the same name as another function.\n" <<
		"As long as the two functions have different parameter types, and/or amount of parameters no error will occur.\n" <<
		"This also allows the functions to be called separately from each other if the parameters match up correctly.\n" <<
		space <<
		"Templates create a new temporary function based on the template when called upon, that function could then be called.\n" <<
		"Templates are defined like functions but with {template} {<class {char}>} {template_name} ({parameters})\n" <<
		"There are two types of templates, they both can be used but the second one gives access to the templates methods.\n" <<
		space;

	return 0;
}

int classes() {

	std::cout <<
		"Classes are the blueprints for objects, which are simply an instance of a class.\n" <<
		"Objects receives the characteristics of its parent class.\n" <<
		"Codecademy says to place Classes inside a .h or .hpp file, but they seem to work in C++ files.\n" <<
		""
		;

	return 0;
}

int variables() {

	std::cout <<
		"Variables are objects which hold a set value, that value can then be used dynamically by functions.\n" <<
		"Variables need to be declared, this includes the {variable_type} {variable_name} an equals sign (=) and {variable_value}\n" <<
		"Variable names follow the same rules that function names follow (only certain characters are allowed).\n" <<
		"Variables can be locked, making the variables value unchangeable. This is done by adding {const} before the type.\n" <<
		"- The variables value can be ommited when declared as the value can be modified later, unless its locked.\n" <<
		space <<
		"Global variables are declared below library includes, and are variables which can be used anywhere in the file its declared in.\n" <<
		"Local variables are declared in functions, and are variables which can only be used within the function its declared in.\n" <<
		"Variables can also be used outside of its home file from both an Internal and External Library.\n" <<
		"- Variables from Internal Libraries need to be declared in the header file with the {extern} value before the {variable_type}.\n" <<
		"- Variables from External Libraries do not need to be declared within the file, and can just be called upon when needed.\n" <<
		space <<
		"std::strings are variables which hold characters as text.\n" <<
		"Strings can hold any (base) characters, but are unable to hold certain characters under certain situations.\n" <<
		"- The backwards slashes can not be added to a string in the editor, but can be added through user input.\n" <<
		"- The space character can be added to a string in the editor, but can not be added through user input.\n" <<
		space <<
		"chars are variables which hold single characters as text.\n" <<
		"Chars can hold any (base) characters, but are unable to hold certain characters under certain situations.\n" <<
		"- The backwards slashes can not be added to a string in the editor, but can be added through user input.\n" <<
		"- The space character can be added to a string in the editor, but can not be added through user input.\n" <<
		space <<
		"ints are variables which hold whole numbers.\n" <<
		"Integers can hold any number between -2,147,483,647 and 2,147,483,647.\n" <<
		"- Integera can hold -2,147,483,648 or 2,147,483,648, but might run into potential problems.\n" <<
		"- An integer with a value lower then -2,147,483,648 or higher then 2,147,483,648 will be printed as 0.\n" <<
		space <<
		"doubles are variables which hold whole numbers, and decimal numbers.\n" <<
		"Doubles can hold any number between -1.7,976,931,348,623,158e+308 and 1.7,976,931,348,623,158e+308.\n" <<
		"- A double with a value lower then -1.7,976,931,348,623,158e+308 will cause an error.\n" <<
		"- a double with a value higher then 1.7,976,931,348,623,158e+308 will cause an error.\n" <<
		space <<
		"bools are variables which hold true or false statements.\n" <<
		"bools can also be read as 1 (true) or 0 (false) and can only receive related inputs.\n" <<
		space <<
		"There are a few variants of the int variable that have different limitations.\n" <<
		"- int8_t has a limit between -128 and 128.\n" <<
		"-- int8_t does not print a number by itself, and will instead print a character based on its value.\n" <<
		"- int16_t has a limit between -32,768 and 32,768.\n" <<
		"-- an int16_t with a value lower then -32,768 will be printed as -32,767.\n" <<
		"-- an int16_t with a value higher then 32,768 will be printed as 32,767"
		"- int32_t has a limit between -2,147,483,648 and 2,147,483,648.\n" <<
		"-- an int32_t with a value lower then -2,147,483,648 will be printed as -2,147,483,647.\n" <<
		"-- an int32_t with a value higher then 2,147,483,648 will be printed as 2,147,483,647"
		"- int64_t has a limit between -9,223,372,036,854,775,807 and 9,223,372,036,854,775,807.\n" <<
		"-- an int64_t with a value lower then -9,223,372,036,854,775,807. will cause an error.\n" <<
		"-- an int64_t with a value of 9,223,372,036,854,775,808 will print the number, but as a negative.\n" <<
		"--- an int64_t with a value higher then 9,223,372,036,854,775,808 will print 9,223,372,036,854,775,807 but as a negative.\n" <<
		space <<
		"There are alternate variants called unassigned int variables which also have different limitations.\n" <<
		"Unassigned int variables with a value of -1 will underflow which sets the value to the maximum number.\n" <<
		"When overflowing, the number will decrease by the negative number +1 (-2 decreases the max number by 1).\n" <<
		"- uint8_t has a limit between 0 and 255.\n" <<
		"-- uint8_t does not print a number by itself, and will instead print nothing.\n" <<
		"- uint16_t has a limit between 0 and 65,535.\n" <<
		"-- a uint16_t with a value higher then 65,535 will be printed as 0.\n" <<
		"- uint32_t has a limit between 0 and 4,294,967,295.\n" <<
		"-- a uint32_t with a value higher then 4,294,967,295 will be printed as 0.\n" <<
		"- uint64_t has a limit between 0 and 18,446,744,073,709,551,615.\n" <<
		"-- a uint64_t will a value higher then 18,446,744,073,709,551,615 will cause an error.\n";

	return 0;
}

int mathematics() {

	std::cout <<
		"Mathematics use operations to solve equations which use variables that can hold numbers (such as {int} and {double}).\n" <<
		"Depending on the type of equation that is being done, different syntax is used for different operations like addition {+}.\n" <<
		"Variables that have numberical values can be declared with a value of the result of a mathematic equation like {int v = 23 + 4;}.\n" <<
		"- Some mathematics might require External Libraries to be included into the file such as {cmath} which includes more operations.\n" <<
		"When doing mathematic equations, the system will follow the Order of Operations which dictates the order of which operations are done.\n" <<
		"The Oder of Operations are:\n" <<
		"1: Paranthesis {()}, and Brackets {[]}\n" <<
		"2: Multiplication {*}, Division {/}, and Modulo {%}\n" <<
		"3: Addition {+} and Subtraction {-}\n" <<
		"- Exponents should be after Paranthesis and Brackets, but requires the {cmath} External Library.\n";

	std::cout <<
		"Addition adds a value to another value, and uses the symbol {+}\n" <<
		"Subtraction removes a values from another value, and uses the symbol {-}\n" <<
		"Multiplication: Multiplies a value by another value, and uses the sumbol {*}\n" <<
		"Division: Divides a value by another from, and uses the symbol {/}\n" <<
		"Modulo: Finds the remainder of a whole number division equation, and uses the symbol {%}\n";

	std::cout <<
		"Addition can also be done by typing the variable/number and two addition symbols {varA++;}\n" <<
		"Subtraction can also be done by typing the variable/number and two subtraction symbols {varB--;}\n";

	return 0;
}

int conditions() {

	std::cout <<
		"Greater Than: Finds if a value is bigger than another, and uses the symbol {>}\n" <<
		"Greater Than or Equal To: Finds if a value is bigger or equal to another, and uses the symbol {>=}\n" <<
		"Lesser Than: Finds if a value is lower than another, and uses the symbol {<}\n" <<
		"Lesser Than or Equal To: Finds if a value is smaller or equal to another, and uses the symbol {<=}\n" <<
		"Equal To: Finds if a value is equal to another, and uses the symbol {==}\n" <<
		"Not Equal To: Finds if a value is not equal to another, and uses the symbol {!=}\n" <<
		"._Equal(): Finds if a text value is equal to another, and uses the syntax {._Equal()\n" <<
		"- When using operators other then ._Equal() the string is broken down into a numerical value.\n" <<
		"- The strings numerical value is the amount of characters it has, and is checked from left to right.\n" <<
		"- Only the first value is checked, if equal and the operator does not check that, the value is skipped.\n" <<
		space <<
		"And: Checks if multiple conditions are true or false, and uses the syntax {and} or {&&}\n" <<
		"Or: Checks if one condition or another is true or false, and uses the syntax {or} or {||}\n" <<
		"Not: Checks if a condition is not true or false, and uses the syntax {!}\n" <<
		"- The Not condition can be added before a variable instead of using the Not Equal To condition.\n";

	return 0;
}

int conditionalStatements() {

	std::cout <<
		"Conditional Statements are lines of code which are called upon when its conditions are met.\n" <<
		space <<
		"If Statements are executed if its conditions are met and has two sub statements.\n" <<
		"Else If Statements are executed if the above If Statement conditions are not met, but its own conditions are met.\n" <<
		"Else Statements are executed if all other If and Else If Statement conditions are not met.\n" <<
		space <<
		"Switch Statements execute code if its conditions are met, and is limited to Char and Numerical variables.\n" <<
		"Cases check if its condition is met and executes its code if the condition is met.\n" <<
		"Breaks are executed at the end of a Case and stops the system from executing other Cases.\n" <<
		"Default Statements will execute code if all other Cases fail to have their conditions met.\n" <<
		space <<
		"While Loops will constantly check if its condition is met, and will execute code while the condition is met.\n" <<
		space <<
		"For Loops will constantly check if its condition is met, and will execute code until the condition is met.\n" <<
		"For Loops are split into three conditions, each separated by a semi-colon {;}.\n" <<
		"- Statement 1 is executed once before the entire for loop is executed.\n" <<
		"- Statement 2 is the condition for the for loop to continue executing code.\n" <<
		"- Statement 3 is code that is executed once after each loop until the final loop.\n";

	return 0;
}

/*
- Vectors are a method of storing data in C++, mainly storing groups of ints and doubles.
- Vectors are created using std::vector which requires the external library <vector> which needs to be included.
- Vectors are given types and names when created: std::vector<type> name;
-- For example std::vector<int> calories;

- Vectors can also be given values when created: std::vector<double> coordinates = {24, 65, -32};
- Vector values can also be set the amount of values it can hold for later: std::vector<double> coordinates(3).

- Indexes are an elements position within a list, in this instance Vectors are 0-indexed so the index starts from 0.
-- For example std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
- In this index 0 is a, 1 is e, 2 is i, 3 is o, and 4 is u.
- Indexes can use any(?) of the main variables.

- Indexes can be output by using std::cout << vector[index];

// Example
std::vector<int> trainCosts = { 200, 300, 500 };
std::cout << "The train costs are: " << trainCosts[0] << ", " << trainCosts[1] << ", " << trainCosts[2] << "\n";

std::cout << "\n";

- Elements can be added to vectors using .push_back() or removed from vectors using .pop_back().
- Everything inside the parenthesis is what is added or removed
- If nothing is in the parenthesis then nothing is added, or the last element is removed.
-- For example trainCosts.push_back(700); will add another element with the int of 700.
-- For example trainCosts.pop_back(); will remove that 700 since nothing was added.
-- Attempting to view a vector which does not exist will present an error.

Error Example:
	trainCosts.push_back(700);
	std::cout << trainCosts[3] << "\n";
	trainCosts.pop_back();
	std::cout trainCosts[3] << "\n";

- the "trainCosts[3]" will present an error since that vector no-longer exists.

- The amount of elements stored inside a Vector is that vectors size.
- This can be viewed using .size() to see how many elements are in a vector.
- For example std::cout << trainCosts.size() << "\n";

- Vectors can be used in other operations such as For Loops and If statements.

// Example
trainCosts.push_back(700);
std::cout << "The vector size is: " << trainCosts.size() << "\n";
std::cout << trainCosts[3] << "\n";
trainCosts.pop_back();
std::cout << "The vector size is now: " << trainCosts.size() << " after the 700 was removed.\n";
*/