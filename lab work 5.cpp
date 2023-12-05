//Saurav Rijal
//yty10 - netID
//Lab - 5

//Modify Lab 5 Program.cpp Download Lab 5 Program.cpp
//to create a program that asks the user for a positive integer value
//and prints a triangular pattern with the # symbol in the even positions
//and the @ symbol in the odd positions.


//The program should use for loops to print the pattern.
//Your output needs to be formatted as shown below.
//Your program should only accept numbers 3 – 10


#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number (3-10): ";
    cin >> num;

    if (num < 3 || num > 10) {
        cout << "ERROR: Valid numbers are 3 to 10" << endl;
        return 1;
    }

    for (int i = num; i >= 1; i--)
    {

    for (int j = 1; j <= i; j++)
    {

            if (j % 2 == 0)
     {
                cout << "@ ";
     }

            else
            {
                cout << "# ";
            }
     }
        cout << endl;
    }

    return 0;
}
