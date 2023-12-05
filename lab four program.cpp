//Saurav Rijal
//09/27/23
//CS1428 Lab
//Lab 4
//Description: this program will calculate the cost of an Apple Device

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char user_choice;  //user's choice
    double price; //price of monthly package
    char value;
    // TODO: Display the list of device plans

    cout << "The list of Apple devices are as follows:"<<endl;
           cout <<  "P: iPhone - From $33.29 per month. AppleCare is $7.99 per month."<<endl;
           cout <<  "M: Mac - From $83.25 per month. AppleCare is $20.75 per month."<<endl;
           cout <<  "W: Watch - From $8.29 per month. AppleCare is $2.49 per month."<<endl;
           cout <<  "A: iPad - From $49.91 per month. AppleCare is $3.49 per month"<<endl;

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total monthly price

    switch (user_choice){
    case 'P||P':

        cout << "Would you like to purchase the AppleCare? (Y/N) ";

        cin >> value;
        if (value == 'Y' || value == 'y'){

        cout << "The total price of your monthly package is $41.28 ";

        }
       else{

        cout << "The total price of your monthly package is: $33.29 ";
       }
        break;

    case 'M||m':
        cout << "Would you like to purchase the AppleCare? (Y/N)";
        cin >> value;
        if (value == 'Y' || value == 'y'){

            cout << "The total price of your monthly package is $104";

        }
       else{

        cout << "The total price of your monthly package is: $83.25";
       }
        break;


        case 'W'||'w':
        cout << "Would you like to purchase the AppleCare? (Y/N)";
        cin >> value;
        if (value == 'Y' || value == 'y'){

            cout << "The total price of your monthly package is $10.78";

        }
       else{

        cout << "The total price of your monthly package is: $8.29";
       }
        break;

    case 'A||a':
        cout << "Would you like to purchase the AppleCare? (Y/N)";
        cin >> value;
        if (value == 'Y' || value == 'y'){

            cout << "The total price of your monthly package is $52.9";

        }
       else{

        cout << "The total price of your monthly package is: $49.91";
       }
        break;

    default:
        cout<<"Invalid Input";
        exit(0);

    }





    return 0;
}
