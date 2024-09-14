#include<iostream>

using namespace std;
class Circle{
	private:
		double radius;
		
	public:
		
		double computeArea(double r)
		{
			radius = r;
			cout<<"Radius of the circle is: "<<radius<<endl;
			return (3.14 * radius * radius);
			
		}
};
main()
{
	Circle obj;
		
	
	cout<<"The Area of the circle is: "<<obj.computeArea(25)<<endl;
	
	system("pause");
}
