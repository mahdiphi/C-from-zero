#include <iostream>
using namespace std;

float x, y;
char operation;

void scan()
{
    cout << "enter first number: \n";
    cin >> x;
    cout << "enter second number: \n";
    cin >> y;
    cout << "enter one of the operations(+, -, /, *): \n";
    cin >> operation;
}

float calculate()
{
    float result;
    if (operation == '+')
    {
        result = x + y;
    }
    else if (operation == '-')
    {
        result = x - y;
    }
    else if (operation == '*')
    {
        result = x * y;
    }
    else if (operation == '/')
    {
        if (y == 0)
        {
            cout << "Error: Division by zero is not allowed!\n";
            return 0;
        }
        result = x / y;
    }
    else
    {
        cout << "Invalid operation entered!\n";
        return 0;
    }
    return result;
}

int main()
{
    char n;
    while (true)
    {
        scan();
        cout << "Result: " << calculate() << "\n";
        cout << "Do you want to continue?(y/n) ";
        cin >> n;
        if (n == 'n')
            break;
    }
    return 0;
}