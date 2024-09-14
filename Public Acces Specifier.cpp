#include<iostream>

using namespace std;
class Men{
		
		public:
			int age;
			string name;
			float height;
			
		void Input()
		{
			cout<<"Enter Name:: ";
			cin>>name;
			cout<<"Enter Age:: ";
			cin>>age;
			cout<<"Enter Height:: ";
			cin>>height;
			
		}
		void showDisplay()
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"Your Personal Information is ready:"<<endl;
			cout<<"Name:: "<< name<<endl;
			cout<<"Age:: "<< age<<endl;
			cout<<"Height:: "<<height<<endl;
		}
	
};
main()
{
	Men Haris;
	Haris.Input();
	Haris.showDisplay();
	
	
	system("pause");
}
