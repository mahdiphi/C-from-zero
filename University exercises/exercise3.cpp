#include <iostream>
using namespace std;

int main(){
    // Calculating a student's GPA.
    float grade1,grade2,grade3,gpa;
    
    cout << "Enter the three scores you got: ";
    cin >> grade1 >> grade2 >> grade3;
    
    gpa = (grade1 + grade2 + grade3) / 3;
    cout << "Your grade is: " << gpa;
    return 0; 
}