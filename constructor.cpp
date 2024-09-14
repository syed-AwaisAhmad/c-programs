#include<iostream>

using namespace std;
class Geeks{
	public:
		int id;
		// Default Constructor
		Geeks()
		{
			cout<<"Default Constructor is Called. "<<endl;
			id = 0;
		}
		//Parametrized Constructor
		Geeks(int x)
		{
			cout<<"Parametrized Constructor is Called."<<endl;
			id = x;
		}
		void printId()
		{
			cout<<"Id: "<<id<<endl;
		}
		
};

main()
{
	// create a object
	
	Geeks obj;
	obj.printId();
	
	// create second object
	Geeks obj1(25);
	obj1.printId();
	
	
	
	system("pause");
}
