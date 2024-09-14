#include<iostream>
#include<string>

using namespace std;
int perWeek(int hours);
int extraHourS(int y);

int weekPerHour = 13;
int sunPerHour = 25;
main()
{
	char extraHours;
	int hour = 40,x;
	

	
	cout<<"Enter your extra hours: ";
	cin>>x;
	
	
	if(x!=0)
	{
		cout<<"If your extra working day is Saturday/Sunday then press S Else press M: ";
		cin>>extraHours;
		
		switch(extraHours)
		{
			case 'S':
				
				cout<<"Your Total Amount: "<<perWeek(hour)+extraHourS(x)<<"$"<<endl;
				break;
				
			case 'M':
				
				cout<<"Your Total Amount: "<<perWeek(hour)+perWeek(x)<<"$"<<endl;
				break;
						
		}
	}
	else if(x==0)
	{
		cout<<"Your Per Week Salary: "<<perWeek(hour)<<"$"<<endl;
	}
	
	system("pause");
}

int perWeek(int hours)
{
	int week;
	week = hours * weekPerHour;
	
	return week;
	
}
int extraHourS(int y)
{
	int total;
	total = y * sunPerHour;
	
	return total;
}
