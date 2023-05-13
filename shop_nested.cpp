#include<iostream>
using namespace std;
int main()
{
    int amount;

    cout << "Cost of purchase: ";
    cin >> amount;

    if(amount>=10000){
        int discount = amount/10;
        cout<<"Discount is applicable. Total discount = " << discount << endl;
    }

    else{
        cout << "No discount applicable.";
    }
return 0;
}