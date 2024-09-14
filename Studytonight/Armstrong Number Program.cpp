#include<iostream.h>

void main()
{
    int no, ld, nn=0, cn;
    cout<<"Enter a number to be checked : "
    cin>>no;
    cn==no;
    while(no > 0)
    {
        ld=no%10;
        nn=nn+ld*ld*ld;
        no=n/10;
    }
    if(nn==cn)
    {
        cout<<"\n"<<cn<<" is an armstrong number";
    }
    else
    {
        cout<<"\n"<<cn<<" is not an armstrong number";
    }
}
