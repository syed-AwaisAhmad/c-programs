#include<iostream>

using namespace std;
class Vehicle{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle."<<endl;
		}
};
class FourWheeler : public Vehicle{
	public:
		FourWheeler()
		{
			cout<<"Objects with 4 wheel is Car."<<endl;
		}
};
class Car : public FourWheeler{
	public:
		Car()
		{
			cout<<"Car has 4 wheels."<<endl;
		}
};
main()
{
	Car cobj;
		
	system("pause");
}
