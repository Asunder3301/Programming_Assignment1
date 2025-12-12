//Miguel Bautista
//CISP-1010 W01
//Programming Assignment 1
//Sept 17, 2025
//Descption: Program takes name, the current day, month, year and takes a degree in Celsius from the user, then it outputs the information onto the console as well as the Celsius degree converted into Fahrenheit and Kelvin.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	//Variables
	string name, day, month, year, city, state;
	double fahrenheit, celsius, kelvin;

	//Inputs;
	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Enter the month: ";
	getline(cin, month);

	cout << "Enter the day: ";
	getline(cin, day);

	cout << "Enter the year: ";
	getline(cin, year);

	cout << "Enter the city: ";
	getline(cin, city);

	cout << "Enter the state: ";
	getline(cin, state);

	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	//Outputs
	cout << endl;
	cout << "Hello, " << name << endl;
	cout << "Today's date is " << month << " " << day << ", " << year << endl;
	cout << "Current city: " << city << ", " << state << endl;
	cout << "It is currently " << celsius << " degrees Celsius" << endl;
	cout << "It is currently " << fixed << setprecision(1) << ((celsius * 9 / 5) + 32) << " degrees Fahrenheit" << endl;
	cout << "It is currently " << fixed << setprecision(1) << (celsius + 273.2) << " degrees Kelvin" << endl;
}