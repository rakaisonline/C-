//practice by sr
//Memory Management: new and delete
//C++ allows us to allocate the memory of a variable or an array in run time. 
//This is known as dynamic memory allocation.
//In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.
//new operator allocates memory to a variable.
//delete operator deletes memory from a variable.

// int* pointVar; //declare an int pointer

// pointVar = new int; //dynamically allocae memory

// *pointVar = 45; // assign value to the variable memory

// cout << *pointVar; //print the value stored in memory

// delte pointVar; //deallocate the memory

//Example-1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int* pointInt;
//     float* pointFloat;

//     pointInt = new int;
//     pointFloat = new float;

//     *pointInt = 45;
//     *pointFloat = 45.45f;

//     cout << *pointInt << endl;
//     cout << *pointFloat << endl;

//     delete pointInt;
//     delete pointFloat;

// return 0;
// }

//Example-2
//C++ new dnd delete operator for arrays
// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter total number of students: ";
//     cin >> num;
//     float* ptr;

//     ptr = new float[num];

//     cout << "Enter GPA of students. " << endl;
//     for(int i = 0; i < num; ++i){
//         cout << "Student" << i + 1 << ": ";
//         cin >> *(ptr + i);
//     }

//     cout << "\nDisplaying GPA of students. " << endl;
//     for (int i = 0; i < num; ++i){
//         cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
//     }

//     delete[] ptr;
// return 0;
// }

//Example-3
//C++ new and delete operator for objects

#include<iostream>
using namespace std;

class Student{
    private:
    int age;

    public:

    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};
int main()
{
    //dynamically declare student object
    Student* ptr = new Student();

    //call getAge() function
    ptr->getAge();

    //ptr memory is released
    delete ptr;
return 0;
}



