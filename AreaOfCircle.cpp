#include<iostream> //header file

using namespace std; // namespace standard

class Circle{ //declare a class
	
	public:
		double radius;
		
		double compute_area()
		{
			return (3.14 * radius * radius);
		}
		
};
main()
{
	Circle c1;
	cout<<"Area of Circle"<<endl;
	cout<<"Enter the radius to find the area of circle: ";
	cin>>c1.radius;
	
	cout<<"Area of the Circle is: "<<c1.compute_area()<<endl;
	
	
	system("pause");
}
