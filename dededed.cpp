//Lab 8
//Description: this program will calculate change for the Vend-O-Matic

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <string>

using namespace std;

// Function prototype
string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName);

int main() {
    const int ArrSize = 20;
    string nameArr[ArrSize];
    string phoneNumberArr[ArrSize];
    string contactName;
    int N;

    cout << "Enter the number of word pairs (name and number): ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cout << "Enter the first name of the person: ";
        cin >> nameArr[i];

        cout << "Enter the phone number of " << nameArr[i] << ": ";
        cin >> phoneNumberArr[i];
    }

    cout << "Enter the name you're looking for on the list to get the matching phone number: ";
    cin >> contactName;

    bool contactFound = false;
    for (int i = 0; i < N; ++i) {
        if (nameArr[i] == contactName) {
            contactFound = true;
            cout << "Phone number: " << phoneNumberArr[i] << endl;

            if (contactName == "YourFirstName") {
                cout << "*** MY NAME ***" << endl;
            }

            return -1;  // Exit the loop once a match is found
        }
    }

    if (!contactFound) {
        cout << "Contact not found." << endl;
    }

    return 0;
}

// Function definition
string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {


    for (int i = 0; i < size; ++i) {
        if (nameArr[i] == contactName) {
            return phoneNumberArr[i];
        }
    }

    return ""; // Return empty string if contact not found
}
