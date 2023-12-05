#include <iostream>

using namespace std;

int main()
{
     char letter;
     string text;

     cout << "Is Cyclops better than Wolverine? ('Y' or 'N')" << endl;
     cin >> letter;

     int choice;
     switch (letter)
     {
     case 'Y':
     case 'y':
          choice = 1;
          break;
     case 'N':
     case 'n':
          choice = 2;
          break;
     default:
          choice = 0;
          break;
     }

     switch (choice)
     {
     case 1:
          cout << "You think Cyclops is better than Wolverine..." << endl;
          text = "Wrong!";
          break;
     case 2:
          cout << "You do not think Cyclops is better than Wolverine..." << endl;
          text = "Correct!";
          break;
     default:
          text = "Invalid Input.";
          break;
     }

     cout << text << endl;

     return 0;
}
