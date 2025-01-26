#include <iostream>
using namespace std;
int main()
{
    // Identifying larger numbers.
    int x, y;
    cout << "enter two numbers: ";
    cin >> x >> y;
   
    if (x > y)
    {
        cout << "The bigger number is: " << x;
    }
    else
    {
        cout << "The bigger number is: " << y;
    }
    return 0;
}