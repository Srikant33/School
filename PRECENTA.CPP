//to print the persentage of a number
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,y,z;
 cout<<"Enter your marks ";
 cin>>x;
 cout<<"Enter your total marks ";
 cin>>y;
 z=x*100/y;
 cout<<"The persentage of marks you obtained is "<<z;
 getch();
}