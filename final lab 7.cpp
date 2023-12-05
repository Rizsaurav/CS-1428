#include <iostream>

using namespace std;

// Function prototype
int calculateValue(int a, int b, int c);

int main() {
    int a, b, c;

    // Input values for a, b, and c
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    // Function call
    int result = calculateValue(a, b, c);

    // Display the result
    cout << "The result of c + a * b is: " << result << endl;

    return 0;
}

// Function definition
int calculateValue(int a, int b, int c) {
    return c + (a * b);
}









#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function prototypes
int placeBet(int remainingFunds);
int getRoll();
char playAgain();

int main() {
    cout << "Gambling is an addiction...\n";
    int userFunds = 1000;

    while (userFunds > 0) {
        cout << "You currently have $" << userFunds << endl;
        int bet = placeBet(userFunds);

        int userRoll = getRoll();
        int computerRoll = getRoll();

        cout << "You rolled " << userRoll << endl;
        cout << "Your opponent rolled " << computerRoll << endl;

        if (userRoll < computerRoll) {
            userFunds -= bet;
            cout << "You lose $" << bet << endl;
        } else {
            userFunds += bet;
            cout << "You win $" << bet << endl;
        }

        char playChoice = playAgain();
        if (playChoice == 'N') {
            break;
        }
    }

    if (userFunds <= 0) {
        cout << "You are out of money. You can't play anymore.\n";
        userFunds = 0;
    }

    cout << "You ended with $" << userFunds << endl;

    return 0;
}

int placeBet(int remainingFunds) {
    int bet;
    cout << "How much would you like to bet? $";
    cin >> bet;
    if (bet <= remainingFunds && bet > 0) {
        return bet;
    } else {
        cout << "ERROR: Invalid bet amount.\n";
        return placeBet(remainingFunds);
    }
}

int getRoll() {
    srand(time(0)); // Seed the random number generator
    return rand() % 6 + 1;
}

char playAgain() {
    char choice;
    cout << "Would you like to continue? (Y or N): ";
    cin >> choice;
    return toupper(choice);
}




