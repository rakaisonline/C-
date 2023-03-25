//This is a pure work done by Sudhanshu Ranjan
//Protected Inheritence
//Since private and protected members are not accessible from main(), 
//we need to create public functions getPVT() and getProt() to access them

#include<iostream>
using namespace std;

class Base{
    private:
    int pvt = 1;

    protected:
    int prot = 2;

    public:
    int pub = 3;

    int getPVT(){
        return pvt;
    }
    

};

class ProtectedDerived : protected Base {
    public:

    int getProt(){
        return prot;
    }

    int getPub(){
        return pub;
    }
};

int main()
{
    ProtectedDerived object1;
    cout << "Private cannot be accessed. " << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;

return 0;
}