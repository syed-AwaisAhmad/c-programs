#include<iostream.h>
#include<conio.h>

int main()
{
	int a,b,x;

	cout<<"Enter a and b:\n";
	cin>>a>>b;
	cout<<"Before swapping"<<endl<<"Value of a= "<<a<<endl<<"Value of b= "<<b<<endl;
	{
		x=a;
		a=b;
		b=x;
		cout<<"After swapping"<<endl<<"Value of a= "<<a<<endl<<"Value of b= "<<b<<endl;
	}
getch();
return 0;
}
