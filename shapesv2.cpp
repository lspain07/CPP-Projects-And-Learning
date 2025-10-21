// SpainL_Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 09/30/2025
// Shapes Version 2

#include <iostream>

using namespace std;

//declare constants
const double PI = 3.14159;

int main()
{
	//declare variables
	int choice;
	bool error = false;

	//program title
	cout << "Shapes" << endl;
	cout << "By Lukas Spain" << endl << endl;

	//Program description
	cout << "This program will offer the user a choice of shapes and then" << endl;
	cout << "calculate the area of the chosen shape based on user input." << endl << endl;

	//shape choice menu
	do
	{
		cout << "For which shape would you like to calculate area?" << endl;
		cout << "1. Circle" << endl;
		cout << "2. Rectangle" << endl;
		cout << "3. Triangle" << endl;
		cout << "4. Parallelogram" << endl;
		cout << "5. Exit Program" << endl;
		do
		{
			cout << "Enter your choice (1-5): ";
			cin >> choice;
			if (!cin)
			{
				cout << "Invalid input." << endl;
				cout << "For which shape would you like to calculate area?" << endl;
				cout << "1. Circle" << endl;
				cout << "2. Rectangle" << endl;
				cout << "3. Triangle" << endl;
				cout << "4. Parallelogram" << endl;
				cout << "5. Exit Program" << endl;
				error = true;
			}
			else if (choice < 1 || choice > 5)
			{
				cout << "Choice out of range. Please enter a number between 1 and 5: " << endl;
				cout << "For which shape would you like to calculate area?" << endl;
				cout << "1. Circle" << endl;
				cout << "2. Rectangle" << endl;
				cout << "3. Triangle" << endl;
				cout << "4. Parallelogram" << endl;
				cout << "5. Exit Program" << endl;
				error = true;
			}
			else if (choice == 1) {
				//circle
				double radius, circleArea;
				cout << "You chose Circle." << endl;
				cout << "Enter the radius of the circle: ";
				cin >> radius;
				if (!cin) { // Check if the input is valid
					cout << "Invalid input. Please enter numeric values." << endl;
					return 1; // Exit the program with an error code
				}
				circleArea = PI * radius * radius;
				cout << "The area of the circle with radius " << radius << " is: " << circleArea << endl;
				error = true;
			}
			else if (choice == 2)
			{
				//rectangle
				double length, width, rectangleArea;
				cout << "You chose Rectangle." << endl;
				cout << "Enter the length of the rectangle: ";
				cin >> length;
				if (!cin) { // Check if the input is valid
					cout << "Invalid input. Please enter numeric values." << endl;
					return 1; // Exit the program with an error code
				}
				cout << "Enter the width of the rectangle: ";
				cin >> width;
				if (!cin) { // Check if the input is valid
					cout << "Invalid input. Please enter numeric values." << endl;
					return 1; // Exit the program with an error code
				}
				rectangleArea = length * width;
				cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << rectangleArea << endl;
				error = true;
			}
			else if (choice == 3)
			{
				//triangle
				double base, height, triangleArea;
				cout << "You chose Triangle." << endl;
				do
				{
					cout << "Enter the base of the triangle: ";
					cin >> base;
					if (!cin) {
						// Check if the input is valid
						cout << "Invalid input. Please enter numeric values." << endl;
					}
					cout << "Enter the height of the triangle: ";
					cin >> height;
					if (!cin) { // Check if the input is valid
						cout << "Invalid input. Please enter numeric values." << endl;
					}
				} while (!cin);
				triangleArea = 0.5 * base * height;
				cout << "The area of the triangle with base " << base << " and height " << height << " is: " << triangleArea << endl;
				error = true;
			}
			else if (choice == 4)
			{
				//parallelogram
				double paraBase, paraHeight, paraArea;
				cout << "You chose Parallelogram." << endl;
				cout << "Enter the base of the parallelogram: ";
				cin >> paraBase;
				if (!cin) { // Check if the input is valid
					cout << "Invalid input. Please enter numeric values." << endl;
					return 1; // Exit the program with an error code
				}
				cout << "Enter the height of the parallelogram: ";
				cin >> paraHeight;
				if (!cin) { // Check if the input is valid
					cout << "Invalid input. Please enter numeric values." << endl;
					return 1; // Exit the program with an error code
				}
				paraArea = paraBase * paraHeight;
				cout << "The area of the parallelogram with base " << paraBase << " and height " << paraHeight << " is: " << paraArea << endl;
				error = true;
			}
			else if (choice == 5)
			{
				cout << "Exiting program. Goodbye!" << endl;
				return 0;
			}
			cin.clear();
			cin.ignore(100, '\n');
		} while (error == true);
	} while (error = true);

	return 0;
}
