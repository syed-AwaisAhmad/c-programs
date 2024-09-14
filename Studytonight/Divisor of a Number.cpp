#include<iostream.h>
#include<conio.h>

int main()
{
    int i, n1;
    clrscr() ;
    cout<<"Enter the number to find it's divisors : " ;
    cin>>n1 ;
    cout<<"\nThe divisors are :\n") ;
    for(i = 1 ; i <= n1 ; i++)
        if(n1 % i == 0)
            cout<<"\t"<<i ;
    getch() ;
    return 0;
}
