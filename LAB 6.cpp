#include <iostream>
using namespace std;

int main() {
    char userChoice;

    do {
        int number;
        cout << "Enter a number (100 - 100000): ";
        cin >> number;

        if (number >= 100 && number <= 100000) {
            int sumOfDigits = 0;
            int highestDigit = 0;
            int factorial = 1;

            while (number > 0) {
                int digit = number % 10;
                sumOfDigits += digit;

                if (digit > highestDigit) {
                    highestDigit = digit;
                }

                number /= 10;
            }

            for (int i = 1; i <= highestDigit; i++) {
                factorial *= i;
            }

            cout << "Sum of digits of " << number << " = " << sumOfDigits << endl;
            cout << "Highest digit = " << highestDigit << endl;
            cout << highestDigit << "! = " << factorial << endl;
        } else {
            cout << "Error: Invalid input." << endl;
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> userChoice;
    } while (userChoice == 'y' || userChoice == 'Y');

    cout << "Have a great day!!!" << endl;

    return 0;
}
