#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    vector<double> grades(numSubjects);
    vector<int> credits(numSubjects);

    double totalPoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter the grade for subject " << (i + 1) << ": ";
        cin >> grades[i];
        cout << "Enter the credit hours for subject " << (i + 1) << ": ";
        cin >> credits[i];

        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    if (totalCredits == 0) {
        cout << "Total credits cannot be zero." << endl;
        return 1;
    }

    double cgpa = totalPoints / totalCredits;

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
