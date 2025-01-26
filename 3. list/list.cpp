#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

vector<string> product;

void addItem()
{
    string name;

    while (true)
    {
        cout << "enter your product (press 'n'/'N' and enter to exit): \n";
        getline(cin, name);
        if (name.empty())
        {
            cout << "Error: You must enter a product name, or press 'n'/'N' to exit.\n";
            continue;
        }
        if (name == "n" || name == "N")
            break;
        product.push_back(name);
    }
}

void showItems()
{
    if (product.empty())
    {
        cout << "Your shopping cart is empty!\n";
        return;
    }
    cout << "\n";
    for (size_t i = 0; i < product.size(); i++)
    {
        cout << i + 1 << ". " << product[i] << "\n";
    }
}

void deleteItem()
{
    if (product.empty())
    {
        cout << "Your shopping cart is empty!\n";
        return;
    }

    cout << "Your cart items:\n";
    showItems();

    string item;

    cout << "Enter name of product you want to delete: \n";
    getline(cin, item);

    auto it = find(product.begin(), product.end(), item);

    if (it != product.end())
    {
        product.erase(it);
        cout << "Item '" << item << "' deleted successfully.\n";
    }
    else
    {
        cout << "Item" << item << "' not found in your cart.\n";
        cout << "Try checking your cart again:\n";
        showItems();
    }
}

int main()
{
    int num;
    bool running = true;

    while (running)
    {
        cout << "\n";
        cout << "========================== \n";
        cout << "        MAIN MENU         \n";
        cout << "========================== \n";
        cout << "1. Add item to your shopping cart \n";
        cout << "2. Delete item from your shopping cart \n";
        cout << "3. Show your items \n";
        cout << "enter (press '0' to exite): \n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> num;

        switch (num)
        {
        case 1:
            addItem();
            break;
        case 2:
            deleteItem();
            break;
        case 3:
            showItems();
            break;
        case 0:
            running = false;
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 0 and 3.\n";
            break;
        }
    }

    return 0;
}
