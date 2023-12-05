// Saurav Rijal
// NetID: yty10
//18th October 2023
// Lab 7 Prelab Assignment
// Move the indicated code into functions.

#include <iostream>
using namespace std;

//TODO - write a void function to print out to console this welcome message
void printWelcomeMessage()
{
    cout << "Welcome to my fabulous rectangle area calculator!" << endl
        << "This program will take the length and width of a rectangle, and" << endl
        << "return the area of that rectangle!"
        << endl << endl;
}

// TODO - write a function that will prompt the length and width
// of a rectangle. Then calculate and return the
// rectangle area (returns a double). Remember to assign the retuned value
// to the variable 'area'.
double calculateArea()
{
    int length, width;
    cout << "please enter a length: ";
    cin >> length;
    cout << "please enter a width: ";
    cin >> width;
    return static_cast<double>(length * width);
}

int main()
{
    double area;

    // Call the function to print the welcome message
    printWelcomeMessage();

    // Call the function to calculate the area and assign it to the 'area' variable
    area = calculateArea();

    // this should remain inside your main function
    cout << "Rectangle area is: " << area;

    return 0;
}


