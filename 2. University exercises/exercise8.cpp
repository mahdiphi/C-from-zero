#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Calculating the root of a number.
    double x, root;
    cout << "Enter a number: ";
    cin >> x;

    root = sqrt(x);
    cout << "The root of the number is: " << root;

    return 0;
}