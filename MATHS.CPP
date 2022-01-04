//to do mathematical operators
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
 float x;
 int choise=0;
 cout<<"Enter a number";
 cin>>x;
 cout<<endl<<"1=sine,2=cos,3=tan,4=log";
 cin>>choise;
 if (choise=1)
 {cout<<"Sine of it is "<<sin(x);
 }
 else if (choise=2)
 {cout<<"Cos of it is "<<cos(x);
 }
 else if (choise=3)
 {cout<<"Tan of it is "<<tan(x);
 }
 else if (choise=4)
 {cout<<"Log of it is "<<log(x);
 }
 getch();
}