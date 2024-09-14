#include<iostream.h>
#include<conio.h>

int main()
{
    int i, n1, factorial=1;
    clrscr() ;
    cout<<"Enter the number to find it's factorial : " ;
    cin>>n1 ;
    for(a=1;a<=n1;a++)
    {
        factorial*=a;
    }
    if(n1==0)
    {
        cout<<"\nThe factorial is : 1";
    }
    else
    {
        cout<<"\nThe factorial is : "<<factorial;
    }
    getch() ;
    return 0;
}

