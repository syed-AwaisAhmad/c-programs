#include<iostream>

using namespace std;
class Vehicle{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle."<<endl;
		}
};
class FourWheeler{
	public:
		FourWheeler()
		{
			cout<<"This is a 4 Wheeler Vehicle."<<endl;
		}
};
class Car : public FourWheeler, public Vehicle {
	public:
		
};
main()
{
	Car obj;
	
	system("pause");
}
