//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 10
//Description: this program will find letter grades from 5 number grades

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
using namespace std;

double getAverage(double g[], const int SIZE)
{
    double total = 0;
    for(int i = 0; i < SIZE; i++)
    {
        total += g[i];
    }
    return total / SIZE;
}

void getGrades(double g[], const int SIZE)
{
    cout << "Please enter 5 grades:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> g[i];
    }
}

// TODO: Complete function definitions

int main()
{
    const int SIZE = 5;
    double grades[SIZE],
           average;
    int numberOfAs = 0,
        numberOfBs = 0,
        numberOfCs = 0,
        numberOfDs = 0,
        numberOfFs = 0;

    //TODO: Add function calls

    return 0;
}
