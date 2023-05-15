#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if(number > 0){
        cout << "You entered a positive number. ";

    }

    else if (number < 0){
        cout << "You entered a negative number. ";
    }

    else{
        cout << "You entered a zero: " << endl;
    }

    cout << "This line is always printed." << endl;

return 0;
}