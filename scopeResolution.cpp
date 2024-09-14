#include<iostream>

using namespace std;
class Geeks{
	public:
		int id;
		string name;
		
		void printId()
		{
			cout<<"Id: "<<id<<endl;
		}
		void printName();
};
void Geeks :: printName()
{
	cout<<"Name: "<<name<<endl;
}
main()
{
	Geeks obj;
	obj.id = 17;
	obj.name = "Haris";
	obj.printId();
	obj.printName();
	
	system("pause");
}
