#include<iostream>
using namespace std;

struct employee{
	int id;
	float salary;
	string name;
	
	
};
main()
{
	employee e1;
	
	cout<<"Enter your ID: ";
	cin>>e1.id;
	cout<<"Enter your Name: ";
	cin>>e1.name;
	cout<<"Enter your salary: ";
	cin>>e1.salary;
	
	cout<<"--------------------------------"<<endl;
	cout<<"Entered value is: "<<endl<<endl;
	cout<<"Employee ID: "<<e1.id<<endl;
	cout<<"Employee Name: "<<e1.name<<endl;
	cout<<"Employee Salary: "<<e1.salary<<endl;
	
	cout<<endl;
	system("pause");
}
