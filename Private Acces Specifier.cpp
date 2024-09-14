#include<iostream>

using namespace std;
class Men{
	
	private:
		string name;
		int age;
		float height;
		
	public:
		void Input()
		{
			cout<<"Enter Person Name:: ";
			cin>>name;
			cout<<"Enter Person Age:: ";
			cin>>age;
			cout<<"Enter Person Height:: ";
			cin>>height;	
		}
		void showDisplay()
		{	
			cout<<"-------------------------------"<<endl;
			cout<<"Your Personal detail is ready."<<endl;
			cout<<"Person Name:: "<<name<<endl<<"Person Age:: "<<age<<endl<<"Person Height:: "<<height<<endl;
		}	
	
};
main()
{
	Men Haris;
	Haris.Input();
	Haris.showDisplay();
	
	
	system("pause");
}
