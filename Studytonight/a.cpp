#include<iostream>
using namespace std;

class Abc
{
    int i;           //data variable
    public:
    void display()         //Member Function
    { 
        cout << "Inside Member Function";
    }
}; // Class ends here

int main()
{
    Abc obj;  // Creatig Abc class's object
    obj.display();  //Calling member function using class object
}
