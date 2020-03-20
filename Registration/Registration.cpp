#include "Registration.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

const string fileName = "registr.txt";

void Info()
{
	Registration newUser;
	cout << "Enter Login :\n" << endl;
	getline(cin, newUser.Name);
	cout << "Enter your email :\n" << endl;
	cin >> newUser.Email;
	cout << "Enter password :\n" << endl;
	cin >> newUser.Password;

	ofstream fout;
	fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Error: Application can't connecting to database file!" << endl;
	}
	else {
		fout << newUser.Name << endl;
		fout << newUser.Email << endl;
		fout << newUser.Password << endl;

	}
	if (newUser.Name == newUser.Name) {
		cout << "Hello" << newUser.Name << endl;
	}
	else
	{
		newUser.Password == newUser.Password;
		cout << "Hello" << newUser.Name << endl;
	}
	fout.close();
	cout << "New contact successful added..." << endl;
}
