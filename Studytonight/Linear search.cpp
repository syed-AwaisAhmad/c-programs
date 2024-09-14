#include<iostream>
using namespace std;

main()
{
	int z,k = -1,num ;
	int arr[5] = {5,8,9,7,4};
	
	cout<<"Enter a number for searching: ";
	cin>>num;
	for(int i=0;i<5;i++)
	{
		if(num == arr[i])
		{ 
			z = i;
			k = 0;
			break;
		}
		
	}
	if(k==0)
	{
		cout<<"Number Found at index: "<<z<<endl;
	}
	else
	{
		cout<<"Number Not Found"<<endl;
	}
	
	cout<<endl;
	system("pause");
}
