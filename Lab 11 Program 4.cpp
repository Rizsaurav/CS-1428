#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define the StudentInfo struct
struct StudentInfo {
    string name;
    int ID;
    float grades[5];
};

int main() {
    const int NUM = 3, NUM_GRADES = 5;
    StudentInfo stud[NUM]; // Array of Student structs
    float total = 0;
    float highest_avg = 0;
    int highest_avg_index = 0;

    // Loop to input data for each student
    for (int i = 0; i < NUM; i++) {
        cout << "Student #" << i + 1 << "\n";
        cout << "Enter student name: ";
        cin >> stud[i].name;
        cout << "Enter ID: ";
        cin >> stud[i].ID;

        // Loop to input grades for each student
        for (int j = 0; j < NUM_GRADES; j++) {
            cout << "Enter grade " << j + 1 << ": ";
            cin >> stud[i].grades[j];
            total += stud[i].grades[j];
        }

        // Calculate average grade for each student
        stud[i].average = total / NUM_GRADES;
        total = 0; // Reset total for the next student

        // Find the index of the student with the highest average
        if (stud[i].average > highest_avg) {
            highest_avg = stud[i].average;
            highest_avg_index = i;
        }
    }

    // Output the information for the student with the highest average
    cout << "The student " << stud[highest_avg_index].name << " has the highest average of " << fixed << setprecision(2) << highest_avg << "\n";

    return 0;
}
