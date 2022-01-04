//to print the marks obtained and the total percentage
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float p,c,m,tot,per;
 cout<<"Enter your marks in maths out of 100 ";
 cin>>m;
 cout<<"Enter your marks in physics out of 100 ";
 cin>>p;
 cout<<"Enter your marks in chemistry out of 100 ";
 cin>>c;
 tot=p+c+m;
 cout<<"Your totla marks obtained is "<<tot<<endl;
 per=tot*100/300;
 cout<<"Your total persentage is "<<per;
 getch();
}