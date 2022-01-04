//to swap numbers
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,y,z;
 cout<<"Enter a number ";
 cin>>x;
 cout<<"Enter another number ";
 cin>>y;
 z=x;
 x=y;
 y=z;
 cout<<"The first number is "<<x<<endl;
 cout<<"The second number is "<<y;
 getch();
}