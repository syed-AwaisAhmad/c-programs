#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    clrscr();
    swap(a, b);  // passing value to function
    cout<<"Value of a"<<a;
    cout<<"Value of b"<<b;
    getch();
    return 0;
}
