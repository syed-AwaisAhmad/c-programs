#include<iostream.h>

void main()
{
    int no, i;
    cout<<"Enter a number to be checked (greater than 2) : ";
    cin>>no;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            break;
        }
    }
    if(no==i)
    {
        cout<<"\n"<<no<<" is a prime number";
    }
    else
    {
        cout<<"\n"<<no<<" is not a prime number";
    }
}
