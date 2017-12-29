#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctime>
#include<cstdlib>
#include<stdlib.h>
#include<fstream>
using namespace std;
const int MAX=2000;
void getdt(char name[])
{
	system("cls");
   ofstream off;
	char line[MAX];
	off.open(name);
	cout<<"please enter the time table line by line and you also have to enter the time manually and terminate it with @"<<endl;
	cin.get(line,MAX,'@');
	off<<line;
	off.close();
}
void getd(char name[])
{
	system("cls");
   ofstream off;
	char line[MAX];
	off.open(name);
	cout<<"please enter the reminder line by line and terminate it with @"<<endl;
	cin.get(line,MAX,'@');
	off<<line;
	off.close();
}
void putd(char name[])
{
	char ch;
	ifstream iff;
	iff.open(name);
	if(iff.fail())
	{
		cout<<"NO DATA TO DISPLAY, PLEASE ENTER FROM MAIN MENU \n";
		return ;
	}
	while(!iff.eof())
	{
		ch=(char)iff.get();
		cout.put(ch);
	}
	iff.close();

}
void putd1(char name[])
{
	char ch;
	ifstream iff;
	iff.open(name);
	if(iff.fail())
	{
		cout<<"NO DATA TO DISPLAY, PLEASE ENTER FROM MAIN MENU \n";
		return ;
	}
	while(!iff.eof())
	{
		ch=(char)iff.get();
		cout.put(ch);
	}
	iff.close();
	cout<<endl;
	system("pause");

}


class salutation
{
	public:
		void morning();
		void noon();
		void evening();
		void mn();
		void night();
		
};
void salutation::morning()
{
	int a,t;
	srand(time(NULL));
	a=(rand()%4);
	switch(a)
	{  case 0:cout<<"GOOD MORNING SIR HOW IS IT GOING"<<endl;
	              break; 
	case 1: cout<<"GOOD MORNING SIR HOW ARE YOU"<<endl;
	              break;
	   case 2: cout<<"GOOD MORNING ITS BEAUTIFUL DAY TODAY"<<endl;
	               break;
		case 3: cout<<"GOOD MORNING NEW DAY NEW SPIRIT SIR "<<endl;		              
		 
	}
	time_t now=time(0);
	tm *ltm=localtime(&now);
	t=ltm->tm_hour;
	if(t>=8&&t<9)
	cout<<"HURRY SIR YOU ARE  LATE FOR BREAKFAST"<<endl;
	
	
}
void salutation::noon()
{
	int a;
	srand(time(NULL));
	a=(rand()%4);
	switch(a)
	{
		case 0: cout<<"GOOD AFTERNOON SIR HOW IS YOUR DAY GOING"<<endl;
		break;
		case 1:  cout<<"GOOD AFTERNOON HOPE YOUR DAY IS GOING GOOD"<<endl;
		break;
		case 2: cout<<"AFTERNOON SIR "<<endl;
		break;
		case 3: cout<<"GOOD AFTERNOON SIR !!!! WHAT BRING YOU HERE NOW"<<endl;
		
	}

}
void salutation::evening()
{
	int a,t;
	srand(time(NULL));
	a=(rand()%4);
	switch(a)
	{
		case 0: cout<<"GOOD EVENING SIR HOPE YOU HAD A GOOD DAY TODAY"<<endl;
		break;
		case 1: cout<<"GOOD EVENING SIR HOW WAS DAY TODAY"<<endl;
		break;
		case 2: cout<<"EVENING SIR HOW CAN I HELP YOU"<<endl;
		break;
		case 3: cout<<"GOOD EVENING SIR WHAT CAN I DO FOR YOU"<<endl;
		
	}
	time_t now=time(0);
	tm *ltm=localtime(&now);
	t=ltm->tm_hour;
	if(t>=18&&t<19)
	cout<<"SORRY SIR YOU MISSED YOUR EVENING SNACK"<<endl;
	if(t<18&&t>=17)
	cout<<"HURRY!!!! SIR FOR YOUR EVENING SNACK"<<endl;
	
	
}
void salutation::mn()
{
	int a;
	srand(time(NULL));
	a=(rand()%2);
	switch(a)
	{
	case 0: cout<<"GOODBYE SIR HAVE A NICE DAY AHEAD"<<endl;
	break;
	case 1: cout<<"GOODBYE SIR ENJOY YOUR DAY"<<endl;
	break;
}
}
void salutation::night()
{
	int a;
	srand(time(NULL));
	a=(rand()%2);
	switch(a)
	{ case 0: cout<<"GOOD NIGHT SIR SEE YOU TOMORROW"<<endl;
	break;;
	case 1: cout<<"GOOD NIGHT SIR SWEET DREAMS"<<endl;
	break;
		
	}
}
class fun
{
	public:
		void fb();
		void mail();
		void pn();
};
void fun::fb()
{
	system("C:\\project\\fb");
}
void fun::mail()
{
	system("C:\\project\\mail");
}

int main()
{
   char name0[]="mon",name1[]="tue",name2[]="wed",name3[]="thu",name4[]="fri",name5[]="sat",name6[]="sun",uname[10],name[10];
   char name7[]="rmon",name8[]="rtue",name9[]="rwed",name10[]="rthu",name11[]="rfri",name12[]="rsat",name13[]="rsun";
   	int d,c,t,y,k,z;
	salutation s;
	fun f;
	time_t now=time(0);
	tm *ltm=localtime(&now);
	d= ltm->tm_wday;
	t=ltm->tm_hour;
	if(t>0&&t<12)
	s.morning();
	if(t<17&&t>=12)
	s.noon();
	if(t>=17&&t<24)
	s.evening();
	system("pause");
	system("cls");
	cout<<"TODAY'S REMINDER :-"<<endl<<endl;
	switch(d)
	         { 	
	          		case 0: putd(name13);
	          		break;
	          		case 1: putd(name7);
	          		break;
	          		case 2: putd(name8);
	          		break;
	          		case 3: putd(name9);
	          		break; 
	          		case 4: putd(name10);
	          		break;
	          		case 5: putd(name11);
	          		break;
	          		case 6: putd(name12);
	          		        
	          		
	          			}          
	cout<<endl<<endl;	         
	system("pause");	         
    system("cls");
	cout<<"NOW SIR WHAT WOULD YOU LIKE TO DO"<<endl;
	cout<<"PLEASE ENTER YOUR CHOICE"<<endl<<"\t\t1)TODAY'S COLLEGE TIME TABLE"<<endl<<endl<<"\t\t2)DO YOU WANT TO LOG INTO UMS"<<endl<<endl<<"\t\t3)DO YOU WANT TO SET ANY IMPORTANT REMINDER"<<endl<<endl;
	cout<<"\t\t4)DO YOU WANT TO UPDATE TIME TABLE"<<endl<<endl<<"\t\t5)DO YOU WANT TO HAVE SOME FUN!!!"<<endl<<endl<<"\t\t6)DO YOU WANT TO QUIT"<<endl<<endl;
	cout<<"\t\t7)DO YOU WANT TO SET ANY URGENT REMINDER"<<endl;
	cin>>c;
	switch(c)
	{
		case 1: switch(d)
	          	{
	          		case 0: system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					  putd1(name6);
	          		break;
	          		case 1:system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					   putd1(name0);
	          		break;
	          		case 2:system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					   putd1(name1);
	          		break;
	          		case 3:system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					   putd1(name2);
	          		break; 
	          		case 4:system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					   putd1(name3);
	          		break;
	          		case 5: system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					  putd1(name4);
	          		break;
	          		case 6:system("cls");
	          		cout<<"TODAY'S TIME TABLE :-\n";
					   putd1(name5);
	          		break;
	          		
			
		         }
		         break;
		case 2: system("C:\\project\\ums");
		        break;
		case 3: system("cls");
		       cout<<"FOR WHICH DAY YOU WANT TO SET A REMINDER"<<endl;
		       cout<<"PLEASE ENTER FIRST THREE LETTERS OF THE WEEK ALSO PLEASE USE LETTER R AS PREFIX "<<endl; 
		       cin>>uname;
		       getd(uname);
		       break;
			   
		case 4:
		          system("cls");
		        cout<<"PLEASE ENTER THE DAY FOR WHICH YOU WANT TO UPDATE TIME TABLE"<<endl<<"PLEASE ENTER FIRST THREE LETTERS"<<endl;
		       cin>>name;
		       getdt(name);
		       break;
				         
		case 5: cout<<"SO YOU WANT TO HAVE SOME FUN"<<endl;
		        cout<<"SO PLEASE ENTER YOUR CHOICE"<<endl;
				cout<<"1) FACEBOOK"<<endl<<"2) GMAIL"<<endl;
				cin>>k;
				switch(k)
				{
				case 1: f.fb();
				break;
				case 2: f.mail();
				break;
			}
				break;
		case 6: if(t>0&&t<=16)
		        s.mn();
				break;
			    if(t>16&&t<24)
				s.night();
				break;	
		case 7: system("C:\\project\\re");
				 break;		       
		                 
	} 

	return 0;
	
	
	
	
	
}

