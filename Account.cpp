// Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;


int main()
{
	Account myAccount; // create account object myAccount

	cout << "Initial name is: " << myAccount.getName();

	// prompt for and read name
	cout << "\nPlease enter the name: ";
	string theName;
	getline(cin, theName); // read a line of text
	myAccount.setName(theName); // set the name in the account object

	cout << "\nName in object myAccount is: " << myAccount.getName() << endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
