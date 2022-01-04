/************************RAILWAY RESERVATION MACHINE************************/
#include<iostream.h>
#include<conio.h>
#include<dos.h>
/**************************       STRUCTURE      ***************************/
struct passenger
 {char name[20];
  int age;
  char gender;
 };
/**************************       FUNCTION       ***************************/
int train()
{clrscr();
 int first;
 cout<<"(1)Ticket cancellation\n ";
 cout<<"(2)Availability\n ";
 cin>>first;
//ticket cancellation
 if (first==1)
 { clrscr();
   float c;
   cout<<"Enter your ticket no ";
   cin>>c;
   cout<<"\nThe ticket number "<<c<<" has successfully been cancelled\n";
 }
//ticket availability
 else if (first==2)
 { clrscr();
   cout<<"This is a holiday special express.\n";
   cout<<"This train is available for all days in a week.\n";
   cout<<"Timings 2:30am only.\n";
 }
}
/*************************        PROGRAM        ***************************/
void main()
{ start:
  clrscr();
  int to,first,from,go,opt,n,o,total;
  char c,m,k,d;
  sound(1000);
  delay(900);
  nosound();
  cout<<" \n\n*-*-*-*-*-*-*  Welcome to Indian Railways Point To Point Services  *-*-*-*-*-*-*\n";
  cout<<"	(1)For tickets from Delhi press 1 \n";
  cout<<"	(2)For tickets from other stops press 2 \n";
  cout<<"	(3)To exit press 3\n";
  cout<<"	(4)For other details press 4\n";
  loop1:
  cin>>first;
				//IF FROM DELHI
   if (first==1)
     { int to;
       clrscr();
       cout<<"          FROM DELHI TO ...... ";
       cout<<" \n\n	(1)Press 1 for options of trains from Delhi to Chennai \n";
       cout<<"	(2)Press 2 for options of trains from Delhi to Mumbai \n";
       cout<<"	(3)Press 3 for options of trains from Delhi to Kolkata \n";
       cin>>to;
       switch (to)
	 { case 1: clrscr();
		   cout<<"\n\nOptions for your desired option are :\n";
		   cout<<"           (A)For ticket booking press 1\n " ;
		   cout<<"           (B)For other options press 2\n";
		   cin>>opt;
		   if (opt==1)
		     {  clrscr();
			passenger p[20];
			cout<<"\n\nCost of 1 adult ticket is Rs2500.\n";
			cout<<"Enter the number of adults.\n";
			cin>>n;
			for (int i=1;i<=n;i++)
			  {  cout<<"Enter name of passenger ";
			     cin>>p[i].name;
			     cout<<"Enter age of passenger ";
			     cin>>p[i].age;
			     cout<<"Enter gender of passenger ";
			     cin>>p[i].gender;

			  }
			 cout<<"Cost of 1 child is Rs 2000.\n";
			 cout<<"Enter the no of children.\n";
			 cin>>o;
			 for (int j=1;j<=o;j++)
			   {  cout<<"Enter name of passenger ";
			      cin>>p[j].name;
			      cout<<"Enter age of passenger ";
			      cin>>p[j].age;
			      cout<<"Enter gender of passenger ";
			      cin>>p[j].gender;
			   }
			   delay(1500);
			  total=(2500*n)+(2000*o);
			  cout<<"\n    Your have to pay Rs"<<total;
			  cout<<"\n    Your seat has successfullly been booked!!\n";
		     }
		   else if (opt==2)
		     {train();}
		   break    ;
	   case 2: clrscr();
		   cout<<"\n\n     Options for your desired option are :\n";
		   cout<<"            (A)For ticket booking press 1\n " ;
		   cout<<"            (B)For other options press 2\n";
		   cin>>opt;
		   if (opt==1)
		     {  passenger p[20];
			cout<<"Cost of 1 adult ticket is Rs2500.\n";
			cout<<"Enter the number of adults.\n";
			cin>>n;
			for (int i=1;i<=n;i++)
			  {  cout<<"Enter name of passenger ";
			     cin>>p[i].name;
			     cout<<"Enter age of passenger ";
			     cin>>p[i].age;
			     cout<<"Enter gender of passenger ";
			     cin>>p[i].gender;

			  }
			 cout<<"Cost of 1 child is Rs 2000.\n";
			 cout<<"Enter the no of children.\n";
			 cin>>o;
			 for (int j=1;j<=o;j++)
			   {  cout<<"Enter name of passenger ";
			      cin>>p[j].name;
			      cout<<"Enter age of passenger ";
			      cin>>p[j].age;
			      cout<<"Enter gender of passenger ";
			      cin>>p[j].gender;
			   }
			   delay(1500);
			  total=(2500*n)+(2000*o);
			  cout<<"\n   Your have to pay Rs"<<total;
			  cout<<"\n   Your seat has successfullly been booked!!\n";
		     }
		   else if (opt==2)
		     {train();}
		   break ;
	   case 3: clrscr();
		   cout<<"\nOptions for your desired option are :\n";
		   cout<<"          (A)For ticket booking press 1\n " ;
		   cout<<"          (B)For other options press 2\n";
		   cin>>opt;
		   if (opt==1)
		      {  passenger p[20];
			cout<<"Cost of 1 adult ticket is Rs2500.\n";
			cout<<"Enter the number of adults.\n";
			cin>>n;
			for (int i=1;i<=n;i++)
			  {  cout<<"Enter name of passenger";
			     cin>>p[i].name;
			     cout<<"Enter age of passenger";
			     cin>>p[i].age;
			     cout<<"Enter gender of passenger";
			     cin>>p[i].gender;

			  }
			 cout<<"Cost of 1 child is Rs 2000.\n";
			 cout<<"Enter the no of children.\n";
			 cin>>o;
			 for (int j=1;j<=o;j++)
			   {  cout<<"Enter name of passenger";
			      cin>>p[j].name;
			      cout<<"Enter age of passenger";
			      cin>>p[j].age;
			      cout<<"Enter gender of passenger";
			      cin>>p[j].gender;
			   }
			   delay(1500);
			  total=(2500*n)+(2000*o);
			  cout<<"\n     Your have to pay Rs"<<total;
			  cout<<"\n     Your seat has successfullly been booked!!\n";
		     }
		   else if (opt==2)
		     {train();}
		   break;}

	 cout<<"\n(A)Main menu press 1\n(B)Exit press 2\n";
	 cin>>go;
	 if(go==1)
	 {goto start;}
	 else if (go==2)
	 {goto end;}

     }
			     //IF NOT FROM DELHI
   else if (first==2)
      { clrscr();
	cout<<"                         FROM AND TO ";
	cout<<"\n       (1)Chennai\n	(2)Mumbai\n	(3)Kolkata\n	(4)Delhi\n ";
	cout<<"\n   Enter the place of boarding ";
	cin>>from;
	cout<<"  \n Enter the terminal station ";
	cin>>to;
	cout<<"        \nOptions for your desired option are :\n";
	cout<<"        (A)For ticket booking press 1 \n" ;
	cout<<"        (B)For other options press 2\n";
	cin>>opt;
	   if (opt==1)
		      {  passenger p[20];
			cout<<"     Cost of 1 adult ticket is Rs2500.\n";
			cout<<"     Enter the number of adults.\n";
			cin>>n;
			for (int i=1;i<=n;i++)
			  {  clrscr();
			     cout<<"Enter name of passenger ";
			     cin>>p[i].name;
			     cout<<"Enter age of passenger ";
			     cin>>p[i].age;
			     cout<<"Enter gender of passenger ";
			     cin>>p[i].gender;

			  }
			 cout<<"Cost of 1 child is Rs 2000.\n";
			 cout<<"Enter the no of children.\n";
			 cin>>o;
			 for (int j=1;j<=o;j++)
			   {  cout<<"Enter name of passenger";
			      cin>>p[j].name;
			      cout<<"Enter age of passenger";
			      cin>>p[j].age;
			      cout<<"Enter gender of passenger";
			      cin>>p[j].gender;
			   }
			   delay(1500);
			  total=(2500*n)+(2000*o);
			  cout<<"\n    Your have to pay Rs"<<total;
			  cout<<"\n    Your seat has successfullly been booked!!\n";
		     }
	   else if (opt==2)
		     {train();}
	 cout<<"\n(A)Main menu press 1\n(B)Exit press 2\n";
	 cin>>go;
	 if(go==1)
	 {goto start;}
	 else if (go==2)
	 {goto end;}}

			    //IF HE WANTS TO EXIT
   else if (first==3)
     {goto end;}
			//IF HE WANTS OTHER DETAILS
   else if (first==4)
     {clrscr();
      cout<<"                               CREDITS";
      cout<<"\nEfforts by : K Srikant Iyer\n Class:XI-C\n Roll No:20\n";
      cout<<"Special thanks to Mrs Sofia Goel\n for giving this chance to expres our ideas in this project.\n";
      cout<<"For any further programing help please contact our office \n";
      cout<<"Toll Free :9458868661 OR 9013017661\n";
	 cout<<"\n(A)Main menu press 1\n(B)Exit press 2";
	 cin>>go;
	 if(go==1)
	 {goto start;}
	 else if (go==2)
	 {goto end;}
     }
   else
     {
      cout<<"\nPlease enter a valid option\n";
      goto loop1;}
end:
cout<<"		Thank you for using Indian Railways.Please come again.";
cout<<"				Press any key to shut down.";
getch();

}
