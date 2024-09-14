#include<iostream>

using namespace std;
class Student{
	private:
		string name;
		int age;
		char section;
		
	public:
		void Input(); 		 //declare function
		void showDisplay(); // declare function 
		
};
void Student :: Input() // defining the function & with scope resolution operator
{
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>> age;
	cout<<"Enter your section: ";
	cin>>section;
		
}
void Student :: showDisplay() //defining the function & with scope resolution operator
{
	cout<<"---------------------------------------"<<endl<<endl;
	cout<<"Student personal information is ready: "<<endl<<endl;
	cout<<"Student's Name: "<<name<<endl;
	cout<<"Student's Age: "<<age<<endl;
	cout<<"Student's Section: "<<section<<endl<<endl;
	
}

main()
{
	Student Haris;
	Haris.Input(); 
	Haris.showDisplay();
	
	system("pause");
}
