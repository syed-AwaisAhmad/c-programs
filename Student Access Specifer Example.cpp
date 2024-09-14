#include<iostream>

using namespace std;
class Student{
	private:
		string name;
		int age;
		string section;
		string fatherName;
		int rollNo;
		int marks[5];
		double obtainedMarks = 0;
		double average = 0;
			
	public:
	//	obtainedMarks = 0;
	//	average = 0;
		void Input()
		{
			cout<<"Enter Student's Name: ";
			cin>>name;
			cout<<"Enter Student's Father Name: ";
			cin>>fatherName;
			cout<<"Enter Student's Section: ";
			cin>>section;
			cout<<"Enter Student's Roll No: ";
			cin>>rollNo;
			cout<<"Enter Student's Age: ";
			cin>>age;
			for(int i=1; i<=5; i++)
			{
				cout<<"Enter "<<i<<" subject Marks: ";
				cin>>marks[i];
				obtainedMarks += marks[i];
			}
			average = obtainedMarks/5;
			
		}
		void showDisplay()
		{
			cout<<"------------------------------------"<<endl;
			cout<<"Student Personal Detail is ready: "<<endl;
			cout<<"Student's Name: "<<name<<endl;
			cout<<"Students's Father Name: "<<fatherName<<endl;
			cout<<"Student's Roll No: "<<rollNo<<endl;
			cout<<"Student's Section: "<<section<<endl;
			cout<<"Student's Age: "<<age<<endl;
			cout<<"Student's Obtained Marks: "<<obtainedMarks<<endl;
			cout<<"Average of Student Marks: "<<average<<endl;
			
		}
};

main()
{
	Student obj;
	obj.Input();
	obj.showDisplay();
	
	system("pause");
}
