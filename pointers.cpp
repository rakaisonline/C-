//C++ call by reference to pass pointers as an argument to the function with the help of examples.
//In the C++ Functions tutorial, we learned about passing arguments to a function. 
//This method used is called passing by value because the actual value is passed.
//However, there is another way of passing arguments to a function where 
//the actual values of arguments are not passed. Instead, the reference to values is passed.

#include<iostream>
using namespace std;

void swap(int &n1, int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    

return 0;
}