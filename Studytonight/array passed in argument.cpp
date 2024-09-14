#include<iostream>
using namespace std;

int summation(int array[])
{
	int result = 0;
	for(int i=0;i<5;i++)
	{
		result += array[i];
	}
	return result;
}
main()
{
	int sum , arr[5] = {1,25,45,87,98};
	
	sum = summation(arr);
	cout<<"The sum of values of array: "<<sum<<endl;
	
	cout<<endl;
	system("pause");
}
