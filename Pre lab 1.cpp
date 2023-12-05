#include <iostream>

using namespace std;

int main()

{
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x and y.
    // The program should then print d to the power of 2 and x + 36

    int d;
    int x;



    cout << "Enter the value for d" << endl;
    cin >> d;

    cout << "Enter the value for x " << endl;
    cin >> x ;

    int d_squared = d * d;
    int x_plus_36 = x + 36;

    cout << "d to the power of 2 = " << d_squared << endl;
    cout << "x + 36 = " << x_plus_36 << endl;




return 0;
}
