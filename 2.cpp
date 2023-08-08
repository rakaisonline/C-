//practice by sr
//passing by referece using pointers

#include<iostream
using namespace std;

void swap(int*, int*);

int main()
{
    int a = 1, b = 2;

    cout <<"Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function by passing variable addresses
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

    //function to define swap numbers
    //Since n1 and n2 contain the addresses of a and b, anything is done to *n1 and *n2 will change the actual values of a and b.
    void swap(int* n1, int* n2){
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
