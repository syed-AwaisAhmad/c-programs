#include<iostream>

using namespace std;
class Vehicle{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle."<<endl;
		}
};
class Fare{
	public:
		Fare()
		{
			cout<<"Fare of a Car"<<endl;
		}
};
class Car: public Vehicle{
	
};
class Bus : public Vehicle, public Fare{
	
};
main()
{
	Bus obj;
	
	system("pause");
}
