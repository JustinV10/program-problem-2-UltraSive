/*
Aidan Perry - 9/25/2017 Period 2
Assignment Name : Program Problem 2: Take_in_Data
Brief Description of the Assignment: Create a New Project to display to the user questions to take in data and create variables to store aforementioned data. Create and make sure that all data of this type is stored in the appropriate variables. Assume users will follow your directions and enter data of the requested types. ** Today, in the future we will handle all users. 
Goal take in all data of the types we currently have talked about. Use some numbers to compute small sums, products, divisions, and subtractions and display the values as well as the initial values. Display all the values stored at the end of your project. 
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
	char choice_answer_bully;
	char choice_answer; // What they picked
	bool answersMatcheds = false; // is it true or false
	int calc_1, calc_2, calc_3;
	// Display Text
	cout << "what is 2 * 3 - (A = 4 / B = 5 / C = 6 / D = 7)" << endl; // question                                                  
	cin >> choice_answer; 
	if (choice_answer == 'c' || choice_answer == 'C') {
		answersMatcheds = true;
	}
	cout << "Give me three random numbers. : " << endl;
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;
	// Actions with the new variables
	cout << boolalpha << "I think that is " << answersMatcheds << " for question 2." << endl;

	cout << calc_1 << " * " << calc_2 << " = " << calc_1 * calc_2 << endl;
	cout << calc_1 << " / " << calc_3 << " = " << calc_1 / calc_2 << endl;
	cout << "all values : " << " 1= " << calc_1 << " 2= " << calc_2 << " 3= " << calc_3 << endl;

	pause(); // pauses to see the displayed text
}