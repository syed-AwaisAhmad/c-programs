#include<iostream>

using namespace std;
class Cars{
	private:
		string name,color;
		int model;
			
	public:
		Cars(string iname, string icolor,int imodel)
		{
			name = iname;
			color = icolor;
			model = imodel;
		}
		void showDisplay();
		
};
void Cars :: showDisplay()
{
	cout<<"-----------------------------------------"<<endl;
	cout<<"Some properties of car is following: "<<endl<<endl;
	cout<<"Name of car is: "<<name<<endl<<"Color of car is: "<<color<<endl<<"Model of car is: "<<model<<endl;
	
}
main()
{
	Cars car1("Corola","Black",2020);
	car1.showDisplay();
	
	
	cout<<endl;
	system("pause");
}
