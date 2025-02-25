#include <iostream>
#include <vector>
using namespace std;

struct ids
{
    vector<int> queue;
    vector<int> stacks;
} Ids;

void stacks()
{
    int choice, num;
    cout << "\n**********stacks storage**********\n";
    cout << "1. Add\n";
    cout << "2. Delete\n";
    cout << "3. Show\n";
    cout << "Enter your choice:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        num = Ids.stacks.size() + 1;
        Ids.stacks.push_back(num);
        break;
    case 2:
        Ids.stacks.pop_back();
        break;
    case 3:
    {
        if (Ids.stacks.empty())
        {
            cout << "there are no stacks here;";
            break;
        }
        int show = Ids.stacks.back();
        cout << "The stacks are: " << show;
    }
    break;
    default:
        cout << "wrong choice!";
        break;
    }
}

void queue()
{
    while (true)
    {

        int choice, num;
        cout << "\n**********queue storage**********\n";
        cout << "1. Add\n";
        cout << "2. Delete\n";
        cout << "3. Show\n";
        cout << "0. Exite\n";
        cout << "Enter your choice:\n";
        cin >> choice;
        if (choice == 0)
            break;

        switch (choice)
        {
        case 1:
            Ids.queue.push_back(Ids.queue.size() + 1);
            break;
        case 2:
            Ids.queue.pop_back();
            break;
        case 3:
            for (int j = 0; j < Ids.queue.size(); j++)
            {
                cout << Ids.queue[j] << ", ";
            }
            break;
        default:
            cout << "wrong choice!";
            break;
        }
    }
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