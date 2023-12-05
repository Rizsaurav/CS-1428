//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 9
//Description: this program will find a pattern in a sequence
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int SIZE, PSIZE; //number of elements to be stored in an array

    cout << "Enter the size of an array:" << endl;
    cin >> SIZE;

    cout << "Enter the size of a pattern:" << endl;
    cin >> PSIZE;

    char sequence[SIZE], pattern[PSIZE];
    int pattern_count = 0;


    for(int i = 0; i < SIZE; i++)
    {
        // TODO: Populate array with random characters
    }
    cout << "\n The sequence array is: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << sequence[i];
    }
    cout << endl;

    for(int i = 0; i < PSIZE; i++)
    {
        // TODO: Get the input (pattern) from the user
    }

    //TODO: Determine if the pattern is found in the sequence


    cout << "The pattern ";
    for(int i = 0; i < PSIZE; i++)
    {
        cout << pattern[i];
    }

    cout << "occurred " << pattern_count << " times. " << endl;


    return 0;
}

