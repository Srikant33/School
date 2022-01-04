//to change case of a number
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a,b,x=32;
 char c,d;
 cout<<"Enter an alphabet ";
 cin>>c;
 a=c;
 if (a>90)
  {
  b=a-x;
  d=b;
  cout<<d;
  }
 else
  {
  b=a+x;
  d=b;
  cout<<d;
  }

 getch();
}