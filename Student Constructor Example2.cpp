#include<iostream>
#include<string.h>

using namespace std;
class Student{
	private:
		string name, fatherName;
		int age,marks[5],rollNo;
		char* section;
		double average,obtainedMarks;
				
	public:
		Student() //default constructor
		{
			name = "Nothing";
			fatherName = "Nothing";			
			age = 0;
			section = "?blank";
			average = 0;
			rollNo = 0;
			obtainedMarks = 0;
		}
		//prototype & declare function
		void Input();    	
		void showDisplay();
	
};
//defining function with scope resolution operator
void Student :: Input()	
{
	cout<<"Enter Student's Name: ";
	cin>>name;
	cout<<"Enter Student's Father Name: ";
	cin>>fatherName;
	cout<<"Enter Student's Roll No: ";
	cin>>rollNo;
	cout<<"Enter Student's Age: ";
	cin>>age;
	cout<<"Enter Student's Section: ";
	cin>>section;
	
	for(int i=1; i<=5; i++)
	{
		cout<<"Enter "<<i<<" subject marks: ";
		cin>>marks[i];
		obtainedMarks += marks[i];
		
	}
	average = (obtainedMarks/5);
	
	
}
void Student :: showDisplay()
{
	cout<<"-------------------------------"<<endl;
	cout<<"Student's Information is Ready to go: "<<endl<<endl;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Student's Father Name: "<<fatherName<<endl;
	cout<<"Student's Roll No: "<<rollNo<<endl;
	cout<<"Student's Section: "<<section<<endl;
	cout<<"Students Age: "<<age<<endl;
	cout<<"Student's Obtained marks: "<<obtainedMarks<<endl;
	cout<<"Student's Average of marks: "<<average<<endl<<endl;
	
}

main()
{
	Student Haris;
	Haris.showDisplay();
	
	
	system("pause");
}
