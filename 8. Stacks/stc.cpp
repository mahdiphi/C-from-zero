#include <iostream>
#include <String>
#include <vector>
using namespace std;

vector<string> nameList;

class info {
    string name;

    void push(){
        
    }
};

void stacks()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);


}

void queue()
{

}

int main()
{
    while (true)
    {

        int choice;
        cout << "\n========= Welcome To My App =========\n";
        cout << "1. Stacks\n";
        cout << "2. Queue\n";
        cout << "0. Exite\n";
        cout << "Enter your choice: \n";
        cin >> choice;
        if (choice == 0)
        {
            cout << "Programm closed...";
            break;
        }

        switch (choice)
        {
        case 1:
            stacks();
            break;
        case 2:
            queue();
            break;

        default:
        cout << "Error: wrong choice! Please enter 1, 2 or 0.\n";
            break;
        }
    }

    return 0;
}