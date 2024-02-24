#include <iostream>
#include <algorithm>
#include <vector>

#include <glfw3.h>
#include <glad.h>
// #include is used to include External and Internal libraries which give additional code that can be used.
// When including External libraries, the library name is surrounded by arrows pointing outward.
// When including Internal libraries, the library name is surrounded by single quotation marks
// - The External libraries give full access to all code available within the library.
// - The Internal Libraries give full access to all code available within the header file.

std::string space = "\n";
std::string input;
char s = '"';
// These are global variables that can be used in all functions in this file.

float a;
long int b;
short int c;

int d = 12;
std::string e = "hello.";

std::string incent;
std::vector<std::string> blockName;
int size = -1;

int recfBlock() {

	std::cout << "Block Name: ";	std::cin >> input;
	blockName.push_back(input);
	size++;
	std::cout << "Again?\n";	std::cin >> input;

	if (input == "yes") {

		recfBlock();
	}
	else {

		while (size > -1) {

			std::cout << size << "\n";
			std::cout << blockName[size] << "\n";
			size--;
		}
	}

	return 0;
}

int recf() {

	std::cout << "Input Type: ";	std::cin >> input;

	if (input == "block") {

		recfBlock();
	}

	return 0;
}

int inputInit() {

	std::transform(input.begin(), input.end(), input.begin(), ::tolower);

	return 0;
}

int test() {

	return 0;
}

int main() {
	// This is the main function of this file, it is of the "int" type and has no parameters/arguments.

/*
	External Compiling and Executing via GCC.
	- To compile c++ files from scratch inside the terminal, type the command {g++ "file_name".cpp} and enter the command.
	- When compiling the file a name can be given to the compiled c++ code by using the command {g++ "file_name".cpp -o "new_name"}.
	- To execute compiled files inside the terminal, the the command {./a.out "file_name"} or {./"custom_file_name"}.
*/

//----------

/*
- On September 9th, 1947 a computer scientist named Grace Hopper found a moth in the Harvard Mark II computer log book
- and reported the world's first literal computer bug. However, the term "bug" in the sence of a technical error dates
- back to at least 1878 from Thomas Edison.

- C++ has several different errors which may occur during development.

- Compile-Time Errors are errors which are found by the compiler, the first line of defence against bugs.
-- Syntax Compile Error is an error which happens when certain C++ syntax rules are broken
--- For example missing semicolens ";", missing parenthesis "()", missing brackets "[]", or missing curly braces "{}".

-- Type Compile Error is an error which happens when a mismatch happens between types that are declared.
--- For example forgetting to declare a variable, or storing a value in the wrong variable type.

- Link-Time Error is an error which is found by the linker when trying to combine object files into an executable.
- This may happen after compiling a file as the linker takes separate files and combines them into an executable file.
-- For example using an undefined function, or writing Main() instead of main().

- Run-Time Error is an error which is found by checks when running an executable file which is not found by the compiler.
- This may happen when Compile-Time and Link-Time errors ask the system to do something it is unable to do.
-- For example dividing numbers by 0 creating a division error, or trying to open a non-existant file.

- Logic Error is an error which is found by the programmer when looking for the cause of an error result.
- This may happen after other errors have been solved but ends up with no result despite the code looking error-free.
-- For example if the programming logic is flawed or a mistake in an if statement or a loop.
*/

//----------

	std::cout <<
		"C++ files are split into .cpp files and .h files. These are C++ and Header files respectively.\n" <<
		"- C++ files hold code which is executed upon the file being compiled and executed.\n" <<
		"- Header files work as Internal Libraries, and allow code to be called from one C++ file to another.\n" <<
		space <<
		"Comments are lines of information inside the code which is not read by the Operating System.\n" <<
		"The comments added are not executed by the Operating System and holds info readable by the user.\n" <<
		"Comments are split into Single Line Comments and Multi-Line Comments.\n" <<
		"- Single Line Comments are created using two forward slashes (//) for the syntax.\n" <<
		"- Single Line Comments hold a single line of information after the syntax.\n" <<
		"- Multi-Line Comments are created using two forward slashes and two asterisks (/**/) for the syntax.\n" <<
		"- Multi-Line Comments hold multiple lines of information between the asterisks on separate lines.\n" <<
		"-- Multi-Line Comments can NOT be nested inside each other, as the syntaxes will intercept each other.\n" <<
		"If comments are not created using the correct syntax, an error will occur.\n" <<
		space <<
		"When creating lines of code, the code needs a line break to tell the system when to read the next line of code.\n" <<
		"In C++ the line break is the semi-colan (;) which is placed at the end of code.\n" <<
		"- For example, the line of code {std::cout << " << s << "Hello World" << s << ";}\n" <<
		"- In the above example, the code would print to the console " << s << "Hello World" << s << "\n" <<
		"- Without the semi-colan the system would not be able to read the next line of code, causing an error.\n" <<
		"There is another line break specifically for printing out text as a backwards slash and the letter n. \n" <<
		"When the line break is present, any additional text printed afterwards will be placed on the next line down.\n" <<
		"- With the last example, if the line break was added any text after {Hello World} would be printed on the next line.\n" <<
		space;

	//recf();
	// Testing using vectors with the Mod Creator.

	//commands(input);

	return 0;
}