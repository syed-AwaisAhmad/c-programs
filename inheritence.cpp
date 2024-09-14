#include<iostream>

using namespace std;
class Parent{
	public:
		int p_id;
};
class Child : public Parent{
	public:
		int c_id;
};
main()
{
	Child obj;
	
	obj.p_id = 7;
	obj.c_id = 5;
	
	cout<<"Parent Id is: "<<obj.p_id<<endl;
	cout<<"Child Id is: "<<obj.c_id<<endl;
	
	
	system("pause");
}
