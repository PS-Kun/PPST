#include <iostream>
using namespace std;

int main(){
     int marks;
    char grade;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if(marks >= 90 && marks <= 100)
        grade = 'A';
    else if(marks >= 80 && marks < 90)
        grade = 'B';
    else if(marks >= 70 && marks < 80)
        grade = 'C';
    else if(marks >= 60 && marks < 70)
        grade = 'D';
    else if(marks >= 50 && marks < 60)
        grade = 'E';
    else if(marks >= 0 && marks < 50)
        grade = 'F';
    else {
        cout << "Invalid marks entered!" << endl;
        return 0;
    }

    cout << "Your Grade: " << grade << endl;

    return 0;

}