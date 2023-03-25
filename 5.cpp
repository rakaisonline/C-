//new and delete operator for arrays
// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include<iostream>
using namespace std;
int main()
{
int num;
cout << "Enter total number of students: ";
cin >> num;
float* ptr;

ptr = new float[num];

cout << "Enter GPA of students." << endl;
for (int i = 0; i < num; ++i){
    cout << "Student" << i + i << ": ";
    cin >> *(ptr + i);
}

    cout << "\Displaying GPA of students." << endl;
    for (int i = 0; i < num; ++i){
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
}

delete[] ptr;

return 0;
}