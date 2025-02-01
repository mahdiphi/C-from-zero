#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
using namespace std;

class BankAccount
{
public:
    string ownerName;
    float balance;
    int accountNumber = 0;

    void displayInfo() const
    {
        cout << "\nYour name: " << ownerName;
        cout << "\nYour balance: " << balance;
        cout << "\nYour account number: " << accountNumber << endl;
    }
    void deposite(float deposite)
    {
        balance += deposite;
        cout << "New balance: " << balance << endl;
    }
    void withdraw(float withdraw)
    {
        if (withdraw > balance)
        {
            cout << "Your balance is not enough for this withdrawal.\n";
            return;
        }
        balance -= withdraw;
        cout << "New balance: " << balance << endl;
    }
};

vector<BankAccount> bankAccounts;

void createAccount()
{
    string name;
    float balance;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your full name: \n";
    getline(cin, name);

    if (name.empty())
    {
        cout << "Name cannot be empty.\n";
        return;
    }

    cout << "Enter your balance: \n";
    cin >> balance;

    BankAccount newAccount;
    newAccount.ownerName = name;
    newAccount.balance = balance;
    newAccount.accountNumber = bankAccounts.size() + 1;

    bankAccounts.push_back(newAccount);

    cout << "Account created successfully!\n";
}

void deposite()
{
    float money;
    int number;

    cout << "Enter your account number: ";
    cin >> number;

    bool accountFound = false;
    for (auto &accounts : bankAccounts)
    {
        if (accounts.accountNumber == number)
        {
            accountFound = true;
            cout << "\nEnter how much do you want to deposite: ";
            cin >> money;

            if (money < 0)
            {
                cout << "Amount must be positive.\n";
                return;
            }

            accounts.deposite(money);
            break;
        }
    }

    if (!accountFound)
    {
        cout << "Account not found.\n";
    }
}

void withdraw()
{
    float money;
    int number;

    cout << "Enter your account number: ";
    cin >> number;

    cout << "\nEnter how much do you want to withdraw: ";
    cin >> money;

    if (money < 0)
    {
        cout << "Amount must be positive.\n";
        return;
    }

    bool accountFound = false;
    for (auto &accounts : bankAccounts)
    {
        if (accounts.accountNumber == number)
        {
            accountFound = true;
            accounts.withdraw(money);
        }
    }

    if (!accountFound)
    {
        cout << "Account not found.\n";
    }
}

void dataFile()
{
    ofstream data("./data/data.txt");

    if (!data)
    {
        cout << "Error opening file!\n";
        return;
    }

    for (const auto &account : bankAccounts)
    {
        data << account.ownerName << " " << account.balance << " " << account.accountNumber << endl;
    }

    data.close();
}

int main()
{

    int choice;
    bool accountFound = false;

    while (true)
    {
        cout << "\n-----$ Welcome to your bank $----- \n";
        cout << "1. Creat account\n";
        cout << "2. Display your info: \n";
        cout << "3. Deposite\n";
        cout << "4. withdraw\n";
        cout << "\nEnter your choice(enter 0 to exit): \n";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Program closed...\n";
            break;
        }

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            int number;
            cout << "Enter your account number: ";
            cin >> number;

            for (const auto &account : bankAccounts)
            {
                if (account.accountNumber == number)
                {
                    account.displayInfo();
                    accountFound = true;
                    break;
                }
            }

            if (!accountFound)
            {
                cout << "Account not found.\n";
            }
            break;

        case 3:
            deposite();
            break;
        case 4:
            withdraw();
            break;

        default:
            cout << "Invalid choice. please enter a number between 0 to 4.";
            break;
        }
    }
    dataFile();

    return 0;
}