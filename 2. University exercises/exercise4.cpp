#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Calculating employee's real earn.
    double earn, insurance, taxes;
    cout << setprecision(15);
    cout << "Enter how much do you earn per mounth: ";
    cin >> earn;

    insurance = earn * 0.07;
    taxes = earn * 0.1;
    earn = earn - (insurance + taxes);

    cout << "Your real earning after deductions are: $" << earn << endl;
    cout << "Insurance cost: $" << insurance << endl;
    cout << "Taxes cost: $" << taxes;
    return 0;
}