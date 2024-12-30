#include <iostream>
using namespace std;

int main(){
    // Determining whether a number in even or odd.
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(x % 2 == 0){
        cout << "Your number is even";
    }else{
        cout << "Your number is odd";
    }
    return 0;
}