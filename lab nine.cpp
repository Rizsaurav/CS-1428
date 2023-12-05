//Saurav Rijal
//1st November 2023
//NetId: yty10

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

    cout << "Enter the size of an array:";
    cin >> SIZE;

    cout << "Enter the size of a pattern:";
    cin >> PSIZE;

    while (PSIZE > SIZE) // check if the size of pattern is greater
    {
    cout << "ERROR: Pattern size must be less than the sequence size." << endl;
    cout << "Enter the size of a pattern:" << endl;
    cin >> PSIZE;
    }

    char sequence[SIZE], pattern[PSIZE];

    int pattern_count = 0;


    for(int i = 0; i < SIZE; i++)
    {
        // TODO: Populate array with random characters
        sequence[i] = rand() % 26 + 'a';
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
        cout << "Enter the character: ";
        cin >> pattern[i];

    }

    //TODO: Determine if the pattern is found in the sequence
    for (int i = 0; i < SIZE - PSIZE + 1; i++)
    {
        bool found = true;

        for (int j = 0; j < PSIZE; j++)
        {
            if (sequence[i + j] != pattern[j])
            {
                found = false;
                break; // Exit the inner loop if a mismatch is found
            }
        }

        if (found)
        {
            pattern_count+=1;
        }
    }


    cout << "The pattern ";

    for(int i = 0; i < PSIZE; i++)
    {
        cout << pattern[i];
    }

    cout << " occurred " << pattern_count << " times. " << endl;


    return 0;
}
