//TO-DO: AADITYA BANIYA
//TO-DO: 13th September 2023
//CS1428 Lab
//Lab 2
//Description: this program will calculate the average grades
//  of several students in South Park, CO and save the results
//  in a file

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string name;
    int studentId, grade1, grade2, grade3, grade4;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("Student_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open("averages.txt");

    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << setw(10) << "SID" << setw(13) << "Name" << "Average" << endl;

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file (x3):

    while (fin >> studentId >> name >> grade1 >> grade2 >> grade3 >> grade4){

        average = static_cast<double>(grade1 + grade2 + grade3 + grade4) / 4;

        fout << setw(10) << studentId << setw(13) << name << fixed << setprecision(2) << average << endl;
    }

    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}
