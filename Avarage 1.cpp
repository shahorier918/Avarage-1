#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

double calculateAverage(double gradeA, double gradeB) {
    double weightA = 3.5;
    double weightB = 7.5;
    double totalWeight = weightA + weightB;
    double weightedGradeA = gradeA * weightA;
    double weightedGradeB = gradeB * weightB;
    double average = (weightedGradeA + weightedGradeB) / totalWeight;
    return average;
}

int main() {
    double gradeA, gradeB;

    // Read the input grades from the user
    cin >> gradeA >> gradeB;

    // Calculate the average
    double average = calculateAverage(gradeA, gradeB);

    // Print the result with 5 digits after the decimal point
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;

    return 0;
}