//to print the tax of a preson
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 float sal,tax;
 cout<<"Enter your sallery ";
 cin>>sal;
 if (sal<250000)
  {tax=sal*0;}
 else if (sal>250000&&sal<2500000)
  {tax=sal*10/100;}
 else if (sal>2500000)
  {tax=sal*15/100;}
 cout<<"You will have to pay tax amount of "<<tax;
 getch();
}