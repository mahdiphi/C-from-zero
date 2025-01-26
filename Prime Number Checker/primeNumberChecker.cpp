#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    int i, limit;
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    limit = sqrt(n);

    for (i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    while (true)
    {
        int n;
        cout << "Enter a number (press '0' to exit): \n";
        cin >> n;
        if (n == 0)
        {
            cout << "Program successfully closed... \n";
            break;
        }
        cout << "The number " << n << " is " << (isPrime(n) ? "prime." : "not prime.") << "\n";
    }

    return 0;
}