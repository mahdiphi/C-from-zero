#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumber()
{
    int random;
    random = (rand() % 1000) + 1;
    return random;
}

void guess()
{
    int number, attempts = 0;
    int randNum = randomNumber();

    while (true)
    {
        cout << "Enter a number (press -1 to exit): \n";
        cin >> number;
        attempts++;

        if (number == -1)
        {
            cout << "Game exited. The number was: " << randNum << "\n";
            break;
        }

        if (number == randNum)
        {
            cout << "You won in " << attempts << " attempts! \n";
            break;
        }
        else if (number > randNum)
        {
            cout << "Too high. Try again. \n";
        }
        else
        {
            cout << "Too low. Try again. \n";
        }
    }
}

int main()
{
    srand(time(0));
    int choice;

    while (true)
    {
        cout << "\n----* Welcom to my game *---- \t \n";
        cout << "1. Start the game \n";
        cout << "2. Exit \n";
        cout << "\n Enter your choice:";
        cin >> choice;

        if (choice == 1)
        {
            guess();
        }
        else if (choice == 2)
        {
            cout << "Game closed...";
            break;
        }
        else
        {
            cout << "Invalid choice. please enter 1 or 2.\n";
        }
    }

    return 0;
}