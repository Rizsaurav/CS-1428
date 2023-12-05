//Net ID= yty10
//Saurav Rijal


#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x and y.
    // The program should then print d to the power of 2 and x + 36

    int x;
    int y;



    cout << "Enter the first integer" << endl;
    cin >> x;

    cout << "Enter the second integer " << endl;
    cin >> y;

    int square = x * x;
    int percent = y % 30 * y;

    cout << "d to the power of 2 = " << square << endl;
    cout << "y % 30 = " << percent << endl;


// 2.
// Write code that takes the number of pounds the user can lift (use cin),\
 divides that number by 2.20462, and then prints it to the screen. This will convert pounds to kg.
// (200 pounds is equal to 90.7186 kilograms)

        double P;
        cout<< "How many pounds can you lift?"<<endl;
        cin>>P;

    double kilogram = P/2.20492;

    cout << "The weight lifted in Kilograms = " <<setprecision(10) << kilogram <<endl;


return 0;
}

