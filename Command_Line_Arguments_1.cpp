// // program named mainreturn.cpp
// #include <iostream>
// using namespace std;

// // defining main with arguments
// int main(int argc, char* argv[])
// {
// 	cout << "You have entered " << argc << " arguments:"<< "\n";

// 	for (int i = 0; i < argc; ++i)
// 		cout << argv[i] << "\n";

// 	return 0;
// }


// C++ program to illustrate command line arguments
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Program name is: " << argv[0] << endl;

	if (argc == 1) 
    {
		cout << "No extra Command Line Argument passed "
				"other than program name"
			<< endl;
	}
	if (argc > 1) 
    {
		cout << "Number of arguments passed: " << argc
			<< endl;
		cout << "----Following are the commnand line "
				"arguments passed----"
			<< endl;
		for (int i = 0; i < argc; i++) {
			cout << "argv[" << i << "]: " << argv[i]
				<< '\n';
		}
	}
}