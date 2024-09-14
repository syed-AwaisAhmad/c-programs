#include <iostream>

using namespace std;
class Cars{
	public:
		
		int car_id;
		double distance;
		
		void display(int a, double b)
		{
			cout<<"Car id is:\t"<<a<<"\nDistance Travel by the car is:\t"<<b+5<<endl;
		}
};
main()
{
	Cars c1;
	c1.car_id = 13;
	c1.distance = 5;
	c1.display(c1.car_id, c1.distance);
	
	system("pause");
}
