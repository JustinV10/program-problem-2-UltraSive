# Take_In_Data
Program Problem #2

## Program Problem 2: Take_in_Data

Create a New Project to display to the user questions to take in data and create variables to store aforementioned data. Create and make sure that all data of this type is stored in the appropriate variables. Assume users will follow your directions and enter data of the requested types. ** Today, in the future we will handle all users. 
Goal take in all data of the types we currently have talked about. Use some numbers to compute small sums, products, divisions, and subtractions and display the values as well as the initial values. Display all the values stored at the end of your project. 

Below is a template to start your program:

/*

Your Name - Date Period 

Assignment Name : *

Brief Description of the Assignment

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
	
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std; //*

// Functions() 

void pause() {

	cout << "Press any key to continue . . .";
	
	while (!_kbhit());
	
	_getch();
	
	cout << '\n';	
	
}

// MAIN

void main() { 

	// Define and Assign your variable(s)

	// Display Text
	
	pause(); // pauses to see the displayed text
	
} 
