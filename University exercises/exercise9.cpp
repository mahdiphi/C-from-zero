#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Obtaining a person's personal information;
    int age;
    string firstName, lastName;

    cout << "Enter your first name: " << endl;
    cin >> firstName;
    cout << "Enter your last name: " << endl;
    cin >> lastName;
    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "fist name: " << firstName << endl;
    cout << "last name: " << lastName << endl;
    cout << "age: " << age << endl;

    return 0;
}