// C++ program to explain destructors
#include<iostream>
using namespace std;

class Geeks
{
	public:
	int id;
	
	//Definition for Destructor
	~Geeks()
	{
		cout << "Destructor called for id: " << id <<endl;
	}
};

main()
{
	Geeks obj1;
	obj1.id=7;
	int i = 0;
	while ( i < 5 )
	{
		Geeks obj2;
		obj2.id=i;
		i++;		
	} // Scope for obj2 ends here

	system("pause");
} // Scope for obj1 ends here

