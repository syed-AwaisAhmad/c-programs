#include<iostream> // another constructor example

using namespace std;
class Employee
{
	private:
		int salary;
		string grade;
		string name;
	public:
		Employee()
		{
			name = "Nothing";
			grade = "Nothing";
			salary = 0;
		}
		void Input();
		void showDisplay();
	
};
void Employee :: Input()
{
	cout<<"Enter your Name: ";
	cin>>name;
	cout<<"Enter your Grade: ";
	cin>>grade;
	cout<<"Enter your Salary: ";
	cin>>salary;
	
}
void Employee :: showDisplay()
{
	cout<<"\n--------------------------------------"<<endl;
	cout<<"Employee Information is ready to show: "<<endl<<endl;
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee Grade: "<<grade<<endl;
	cout<<"Employee Salary: "<<salary<<endl;
	
}

main()
{
	Employee haris;
	haris.Input();
	haris.showDisplay();	
	
	cout<<endl;
	system("pause");
}
