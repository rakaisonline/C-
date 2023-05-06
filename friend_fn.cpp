// // Working of friend funcion
// #include<iostream>
// using namespace std;

// class Distance{
//     private:
//     int meter;

//     friend int addFive(Distance);

//     public:
//     Distance() : meter(0) {}
// };

// int addFive (Distance d){

//     d.meter +=5;
//     return d.meter;
// }

// int main()
// {
//     Distance D;
//     cout<< "Distance: " << addFive(D);
//     return 0;
// }

//adding members of two different class

#include<iostream>
using namespace std;

class ClassB;

class ClassA{

    public:
    ClassA() : numA(12) {}

    private:
    int numA;
    friend int add(ClassA, ClassB);
};

class ClassB {

    public:

        ClassB() : numB(1) {}

    private:
        int numB;

        friend int add(ClassA, ClassB);

};

int add(ClassA objectA, ClassB objectB){
    return (objectA.numA + objectB.numB);
}
    

int main()
{
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}

