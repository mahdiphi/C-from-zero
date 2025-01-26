#include <iostream>
using namespace std;

int main()
{
    // Placing numbers from smallest to largest.
    int a, b, c, temp;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << "numbers from small to large: " << a << ", " << b << ", " << c;
    return 0;
}