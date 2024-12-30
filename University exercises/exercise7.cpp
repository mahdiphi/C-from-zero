#include <iostream>
using namespace std;

int main()
{
    // Calculating the area of a triangle.
    double height, base, area;

    cout << "Enter height of your triangle: " << endl;
    cin >> height;
    cout << "Enter base of your triangle: " << endl;
    cin >> base;

    area = (base * height) / 2;
    cout << "The area is: " << area;

    return 0;
}