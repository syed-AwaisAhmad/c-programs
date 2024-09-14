#include<iostream>

using namespace std;
// parent class
class Parent{
	protected:
		int id_protected;
};
// child class 
class Child : public Parent{
	public:
		// set function
		void setProtected(int id)
		{
			id_protected = id;
		}
		// print function
		void printProtected()
		{
			cout<<"id_protected is: "<<id_protected<<endl;
		}
}; 

// main function
main()
{
	// create a object
	Child obj;
	
	//set the value of id
	obj.setProtected(25);
	
	//print the value of id
	obj.printProtected();
	
	
	system("pause");
}
