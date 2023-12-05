//Saurav Rijal
//NetId: yty10
//25th October 2023

//CS1428 Lab
//Lab 8
//Description: this program will calculate change for the Vend-O-Matic

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes:
bool isValidChoice(char);
float calcTotal(int, float);
float calcChange(float, float);

int main()
{
    char choice;
    int quantity;
    float total, payment_amount, change, item_cost;

    cout << "Welcome to the Vend-o-matic! Here are your choices:" << endl
         << "a)Ice Cream - $2.75" << endl
         << "b)Candy - $1.25" << endl
         << "c)Soda - $1.50" << endl
         << "d)Gum - $0.50" << endl
         << "Please select an item: ";

    cin >> choice;

    while(!isValidChoice(choice)) // Function Call
    {
        cout << "Error: Invalid choice. Please select a valid item: ";
        cin >> choice;
    }

    if(choice == 'a')
    {
        item_cost = 2.75;
    }
    else if(choice == 'b')
    {
        item_cost = 1.25;
    }
    else if(choice == 'c')
    {
        item_cost = 1.50;
    }
    else if(choice == 'd')
    {
        item_cost = 0.50;
    }

    cout << endl << "Enter Quantity: ";
    cin >> quantity;

    while(quantity < 1 || quantity > 20)
    {
        cout << "ERROR: Invalid Quantity. Please re-enter: ";
        cin >> quantity;
    }

    total = calcTotal(quantity, item_cost); // Function Call

    cout << fixed << setprecision(2) << "Total with tax: $" << total << endl;

    cout << "Enter Payment Amount: $";
    cin >> payment_amount;

    while(payment_amount < total)
    {
        cout << "ERROR: Insufficient funds. Please re-enter payment: $";
        cin >> payment_amount;
    }

    change = calcChange(total, payment_amount); // Function Call

    cout << "Your change is: $" << change;

    return 0;
}

// TODO: add function definitions here
// Function to check if the user choice is valid
bool isValidChoice(char choice)
{
    return (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd');
}

// Function to calculate the total with tax
float calcTotal(int quantity, float item_cost)
{
    const float SALES_TAX_RATE = 0.0825;
    float subtotal = quantity * item_cost;
    return subtotal + (subtotal * SALES_TAX_RATE);
}

// Function to calculate the change
float calcChange(float total, float payment)
{
    if (payment >= total)
    {
        return payment - total;
    }
    else
    {
        return -1; // Indicates insufficient funds
    }
}
