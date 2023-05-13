//program to print positive number, if user enters negative number it is skipped.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout <<"Enter an integer: ";
    cin>>number;

    if(number>=0){
        cout <<"You entered a positive number."<<endl;
        // cout <<"You entered a negative number."<<endl;
    }
    
    else{
            cout << "You entered a negative number..";
    }


    return 0;
}