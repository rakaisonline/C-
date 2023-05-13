#include<iostream>
using namespace std;
int main()
{
    int salary, service;
    cout<<"Enter salary : ";
    cin>>salary;

    cout<<"Enter year of service: ";
    cin>>service;

    if(service>=5){
        int bonus = salary*0.05;
        cout<<"Eligible for bonus. Net bonus amount = " << bonus <<endl;
    }

    else{
        cout<<"Not eligible for bonus. "<<endl;
    }

return 0;
}