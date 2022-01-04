//to use switch case to show holiday
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int num,y;
 cout<<"Monday=1"<<endl<<"Tuesday=2";
 cout<<"Wednesday=3"<<endl<<"Thursday=4";
 cout<<"Friday=6"<<endl<<"Saturday=7";
 cout<<"Sunday=7"<<endl<<endl;
 cout<<"Enter the number of the day asper the list ";
 cin>>num;
 switch (num)
{  case 1:
    cout<<"You have to go to school";
    break;
   case 2:
    cout<<"You have to go to school";
    break;
   case 3:
    cout<<"You have to go to school";
    break;
   case 4:
    cout<<"You have to go to school";
    break;
   case 5:
    cout<<"You have to go to school";
    break;
   case 6:
    cout<<"It's a holiday";
    break;
   case 7:
    cout<<"It's a holiday!!";
    break;
  }
getch();
}