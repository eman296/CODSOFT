#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;
    double totalGrade = 0.0;

    int numStudents;

    cout << "Welcome to the Student Grade Calculator!" << endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> name;
        studentNames.push_back(name);

        cout << "Enter the grade of student " << (i + 1) << ": ";
        cin >> grade;
        studentGrades.push_back(grade);

        totalGrade += grade;
    }

    if (numStudents == 0) {
        cout << "No students to calculate grades." << endl;
    } else {
        double averageGrade = totalGrade / numStudents;
        double highestGrade = *max_element(studentGrades.begin(), studentGrades.end());
        double lowestGrade = *min_element(studentGrades.begin(), studentGrades.end());

        cout << "\nStudent Grade Summary:" << endl;
        cout << "-----------------------" << endl;
        cout << "Average Grade: " << averageGrade << endl;
        cout << "Highest Grade: " << highestGrade << endl;
        cout << "Lowest Grade: " << lowestGrade << endl;
    }

    cout << "Thank you for using the Student Grade Calculator!" << endl;

    return 0;
}
