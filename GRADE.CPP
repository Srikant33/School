//to print the grades obtained
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x;
 cout<<"Marking scheme"<<endl<<"A very good"<<endl<<"B good"<<endl<<"C poor"<<endl<<"D very poor"<<endl<<endl;
 cout<<"Enter your marks ";
 cin>>x;
 if (x>=80)
  {cout<<"A";}
 else if (80>x&&x>=60)
  {cout<<"B";}
 else if (60>x&&x>=40)
  {cout<<"C";}
 else if (40>=x)
  {cout<<"D you have failed";}
 getch();
}