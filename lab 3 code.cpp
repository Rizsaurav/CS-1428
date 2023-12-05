//Saurav Rijal
//09/20/23
//CS1428 Lab
//Lab 3

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Orange" << endl
         << " 2. Yellow" << endl
         << " 3. Blue" << endl
         << "Enter a number 1-3 : ";
    cin >> user_num;


    if (user_num > 3){


        cout << "Invalid Input. Terminating Program.";

        exit(0);
    }

    else if (
        (comp_num == 1 && user_num == 2) ||
        (comp_num == 2 && user_num == 3) ||
        (comp_num == 3 && user_num == 1)
    ) {
        cout << "You win! " << (user_num == 1 ? "Orange" : (user_num == 2 ? "Blue" : "Yellow")) << " beats " <<
         (comp_num == 1 ? "Orange" : (comp_num == 2 ? "Blue" : "Yellow")) << "!" << endl;
    } else {
        cout << "Computer wins! " << (comp_num == 1 ? "Orange" : (comp_num == 2 ? "Blue" : "Yellow"))
        << " beats " << (user_num == 1 ? "Orange" :(user_num == 2 ? "Blue" : "Yellow")) << "!" << endl;
    }

    return 0;

    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):


    // Exit the program:
    return 0;
}
