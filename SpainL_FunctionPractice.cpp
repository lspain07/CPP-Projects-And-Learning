// SpainL_FunctionPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 11/06/2025
// Function Practice Version 1

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// function declaration
bool nicknameCheck(string nickName);
void valueCheck(int value[]);
string concat(string lName, string fName);
void output(ofstream& fout, string fName, string lName, string nickName, bool nncheck, string fullName, int value[]);

int main()
{
    // file stream variables
    ofstream fout;

    // variable declarations
    int value[5];
    string fName, lName, fullName, nickName;
    bool nnCheck;

    // Open output file
    fout.open("output.txt");

    //program info
    cout << "Welcome to Programming 1: All About Functions!" << endl << endl;
    
    // user prompts
    cout << "Please enter your first name: ";
    cin >> fName;
    cout << "Please enter your last name: ";
    cin >> lName;
    cout << "Please enter a one-word nickname (if none enter none): ";
    cin >> nickName;

    // call bool function to check for nickname
    nnCheck = nicknameCheck(nickName);

    // call a function to record five values and error check
    valueCheck(value);

    // call a function that will take the name information and concat
    fullName = concat(fName, lName);

    // call a function to write to file and console
    output(fout, fName, lName, nickName, nnCheck, fullName, value);


    return 0;
}

// function definitions

// Function to check for nickname
bool nicknameCheck(string nickName)
{
    //variable
    bool nn;

    if (nickName == "None" || nickName == "none" || nickName == "NONE")
    {
        nn = false;
    }
    else
    {
        nn = true;
    }
    return nn;
}

//Function to record five values and error check
void valueCheck(int value[])
{
    cout << "Please enter your top 5 favorite whole numbers between 1 and 100." << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value[i];

        //error check each value
        while (!cin || value[i] < 1 || value[i] > 100)
        {
            cout << "Not a valid value. Please try again";
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Enter value " << i + 1 << ": ";
            cin >> value[i];
            
        }
    }
}

//Function to take name information and concat
string concat(string lName, string fName)
{
    return fName + " " + lName;
}

//Function to write to file and console
void output(ofstream& fout, string fName, string lName, string nickName, bool nncheck, string fullName, int value[])
{
    cout << "First thank you, " << fullName << ", for participating in our function practice!" << endl << endl;

    cout << "We have learned that your first name is " << fName << ", and your last name is " << lName;
    fout << "We have learned that your first name is " << fName << ", and your last name is " << lName;

    if (nncheck == false)
    {
        cout << ", and you do not have a preferred nickname. " << endl;
        fout << ", and you do not have a preferred nickname. " << endl;
    }
    else
    {
        cout << ", and you prefer to be called " << nickName << "." << endl;
        fout << ", and you prefer to be called " << nickName << "." << endl;
    }

    cout << endl << "We also learned that your top 5 favorite numbers are: ";
    fout << endl << "We also learned that your top 5 favorite numbers are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << value[i] << " ";
        fout << value[i] << " ";
    }
    cout << endl << endl << "Thank you for participating! A copy of your answers is located";
    cout << " \"output.txt\". Have a great day!" << endl << endl;
    fout << endl << endl << "Thank you for participating! Have a great day!" << endl << endl;
}