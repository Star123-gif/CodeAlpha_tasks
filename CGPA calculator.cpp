#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    
    cout << "=========================================================\n";
    cout << "        CGPA Calculator Program     \n";
    cout << "========================================================\n\n";

    cout << "Enter total number of courses taken: ";
    cin >> numCourses;

    float grade[numCourses], credit[numCourses];

    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "Enter Course Details\n";

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << ":\n";

        cout << "Enter Grade Points (e.g., 4.0, 3.5, 3.0) ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    float gpa = totalGradePoints / totalCredits;
    float cgpa = gpa; 

    cout << "\n=======================================================\n";
    cout << "        Course Grades Summary       \n";
    cout << "=========================================================\n";

    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1
             << " | Grade: " << grade[i]
             << " | Credits: " << credit[i] << endl;
    }

    cout << fixed << setprecision(2);

    cout << "Total Credits Taken: " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;

    cout << "\nSemester GPA: " << gpa << endl;
    cout << "Final CGPA  : " << cgpa << endl;

    cout << "===================================================\n";
    cout << "        Program Finished 😊         \n";
    cout << "===================================================\n";

    return 0;
}