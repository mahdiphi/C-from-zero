#include <iostream>
using namespace std;

int main()
{
    // Multiplication table from 1 to 10.
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}