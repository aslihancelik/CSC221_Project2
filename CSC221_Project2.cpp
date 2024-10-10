// CSC221_Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
// Programmer: Aslihan Celik
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    do {
        int number1, number2; // Variables to store the two numbers for calculations 
        int userInput; // String to hold the user's input

        // Display instructions for the user
        cout << "Please choose the calculation you would like to make by typing one of the following numbers:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Exit the program."  << endl;
        cout << "Then press enter." << endl;

        // Read input
        cin >> userInput;

        // Check if the user wants to exit the program
        if (userInput == 6) {
            cout << "Exiting the program..." << endl;
            break; // Exit the loop
        }
        
        cout << "Please enter the first number." << endl;
        cin >> number1;
        cout << "Please enter the second number." << endl;
        cin >> number2;

        switch (userInput) {
            case 1:
                cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
                break;
            case 2:
                cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
                break;
            case 3:
                cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
                break;
            case 4:
                //check the denominator, it shouldn't be zero
                if (number2 != 0) {
                    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
                }
                else {
                    cout << "Error: Division by zero is undefined." << endl;
                }
                break;
            case 5:
                cout << number1 << " to the power of " << number2 << " is " << pow(number1, number2) << " ." << endl;
                break;
            default:
                cout << " Error: Unknown operator.";
                break;
       
        }
    } while (true); // Repeat until the user chooses to exit

    return 0;
}

