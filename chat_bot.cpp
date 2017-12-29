#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void chatter_box();

	string s1,s2("hi there"),s3("what's up"),s4("yo man"),s5("hey mate"),s6("hello"),s7("yo"),s8("hello buddy"),s9("hello mate"),s10("namaste"),s11("namaskar"),s12("good morning"),s13("good afternoon"),s14("good evening"),s15("hey");
	string u1,u2,u3;
	string s16("i am feeling lonely"),s17("i am getting bored"),s18("i am feeling bored"),s19("i like to have some fun"),s20("i like to check my pnr status"),s21("i like to browse facebook");
	string s22("facebook"),s23("there is no one there to talk to me"),s24("i like to know about an area code"),s25("i wish to search a word"),s26("dictionery");
	string s27("can you talk to me"),s28("i like to talk to someone"),s29("facts"),s30("current affairs"),s31("i am all alone"),s32("i have no one to talk to"),s33("i am alone");
    string s34("i am too lonely"),s35("it is too lonely");
    string zz,zz1,zz2,zz3,zz4,zz5,zz6,zz7,zz8,zz9;
    void jokes()
    {
    		int a,t;
	srand(time(NULL));
	a=(rand()%10);
	switch(a)
	{
		     case 0 :	MessageBox(NULL, "When I see lovers' names carved in a tree, I don't think it's sweet. I just think it's surprising how many people bring a knife on a date." , "JOKES", MB_OK);
		break;
		       case 1:	 MessageBox(NULL, "Can a kangaroo jump higher than a house? Of course, a house doesn’t jump at all." , "JOKES", MB_OK);
		break;
		       case 2: 	MessageBox(NULL, "It is so cold outside I saw a politician with his hands in his own pockets.","JOKES", MB_OK);
		break;
		       case 3: 	MessageBox(NULL, "My dog used to chase people on a bike a lot. It got so bad, finally I had to take his bike away." , "JOKES", MB_OK);
		break;
		        case 4:  	MessageBox(NULL, "I haven’t spoken a word to my wife in years. She hates to be interrupted." , "JOKES", MB_OK);
	    break;
				case 5:  	MessageBox(NULL, ". Scientists have now discovered how women keep their secrets. They do so within groups of 40" , "JOKES", MB_OK);
		break;
				case 6:  	MessageBox(NULL, "My wife’s cooking is so bad we usually pray after our food." , "JOKES", MB_OK);
		break;
				case 7:  	MessageBox(NULL, "You can train a cat to do anything the cat wants to do at the moment it wants to do it." , "JOKES", MB_OK);
		break;
				case 8:  	MessageBox(NULL, "I can’t believe I forgot to go to the gym today. That’s 7 years in a row now." , "JOKES", MB_OK);
		break;
				case 9:  	MessageBox(NULL, "Woke up with a dead leg this morning. I will not take out a loan with the mafia ever again" , "JOKES", MB_OK);
		break;
	}
	chatter_box();
}
void facts()
{
			int a,t;
	srand(time(NULL));
	a=(rand()%10);
	switch(a)
	{
		case 0:	MessageBox(NULL, "Months that begin on a Sunday always have a Friday the 13th in them." , "FACTS", MB_OK);
		break;
			case 1:	MessageBox(NULL, "It takes more calories to eat a piece of celery than the celery has in it." , "FACTS", MB_OK);
		break;
			case 2:	MessageBox(NULL, "The tip of a bullwhip moves so fast that the sound it makes is actually a tiny sonic boom." , "FACTS", MB_OK);
		break;
			case 3:	MessageBox(NULL, "Native Americans used to name their children after the first thing they saw as they left their tepees after their children were born, hence the names Sitting Bull and Running Water." , "FACTS", MB_OK);
		break;
			case 4:	MessageBox(NULL, "Coca-Cola would be green if the food colorant wasn't added." , "FACTS", MB_OK);
		break;
			case 5:	MessageBox(NULL, "\"Almost\" is the longest word in the English language with all the letters in alphabetical order" , "FACTS", MB_OK);
		break;
			case 6:	MessageBox(NULL, "Earth is the only planet not named after a god." , "FACTS", MB_OK);
		break;	
		case 7:	MessageBox(NULL, "Human thigh bones are stronger than concrete." , "FACTS", MB_OK);
		break;
			case 8:	MessageBox(NULL, "The bloodhound is the only animal whose evidence is admissible in court." , "FACTS", MB_OK);
		break;
			case 9:	MessageBox(NULL, "The elephant is the only mammal that can't jump!" , "FACTS", MB_OK);
		break;
	}
	chatter_box();
}
void quotes()
{
			int a,t;
	srand(time(NULL));
	a=(rand()%10);
	switch(a)
	{
		case 0: MessageBox(NULL, "The best preparation for tomorrow is doing your best today." , "QUOTES", MB_OK);
		break;
		case 1: MessageBox(NULL, "The best and most beautiful things in the world cannot be seen or even touched - they must be felt with the heart." , "QUOTES", MB_OK);
		break;
		case 2: MessageBox(NULL, "I can't change the direction of the wind, but I can adjust my sails to always reach my destination." , "QUOTES", MB_OK);
		break;
		case 3: MessageBox(NULL, "Start by doing what's necessary; then do what's possible; and suddenly you are doing the impossible." , "QUOTES", MB_OK);
		break;
		case 4: MessageBox(NULL, "Perfection is not attainable, but if we chase perfection we can catch excellence." , "QUOTES", MB_OK);
		break;
		case 5: MessageBox(NULL, "Try to be a rainbow in someone's cloud." , "QUOTES", MB_OK);
		break;
		case 6: MessageBox(NULL, "We must let go of the life we have planned, so as to accept the one that is waiting for us" , "QUOTES", MB_OK);
		break;
		case 7: MessageBox(NULL, "Life is about making an impact not making an income" , "QUOTES", MB_OK);
		break;
		case 8: MessageBox(NULL, " You miss 100% of the shots you don’t take" , "QUOTES", MB_OK);
		break;
		case 9: MessageBox(NULL, " Definiteness of purpose is the starting point of all achievement" , "QUOTES", MB_OK);
		break;
	}
}
	void chatter_box()
	{
		system("cls");
		cout<<"\nWHAT CAN I DO FOR YOU\n"<<endl;
		getline(cin,u2);
		if(u2==s16||u2==s31||u2==s32||u2==s33||u2==s34||u2==s35)
		{
			cout<<"\nWHY ARE YOU FEELING LONELY SIR \n"<<"CAN I HELP YOU IN SOME WAY, LIKE TELLING YOU JOKES,FACTS,INSPIRING QUOTES ETC."<<endl;
			cin>>u3;
			if(u3=="jokes"||u3=="i want to read some jokes"||u3=="i want some jokes"||u3=="i want jokes"||u3=="i want to read jokes"||u3=="i want jokes")//||u3="can you tell me some jokes")
			{
				jokes();
			}
			 
		   if(u3=="facts"||u3=="tell me facts"||u3=="tell me few facts"||u3=="i want facts"||u3=="i want some facts")
		{
		 facts();	
		}
		if(u3=="i want inspiring quotes"||u3=="inspire me"||u3=="i want quotes"||u3=="quotes"||u3=="inspiring quotes")
		{
			quotes();
		}
		
	}
	if(u2=="pnr status"||u2=="pnr"||u2==s20)
	{
		system("C:\\project\\vbs\\pnr");
	}
	if(u2==s22||u2=="i want to browse facebook"||u2=="fb"||u2=="open facebook"||u2=="start facebook"||u2=="start fb"||u2=="open fb")
	{
		system("C:\\project\\fb");
	}
	if(u2=="i want to check my gmail account"||u2=="open gmail"||u2=="start gmail"||u2=="gmail")
	{
		system("C:\\project\\mail");
}
    if(u2==" open dictionery"||u2==s26||u2==s25)
    {
    	 system("C:\\project\\vbs\\search");
	}
	if(u2==s30||u2=="i want to know what is going on"||u2=="i want to know about news"||u2=="news"||u2=="current affairs"||u2=="breaking news"||u2=="tell me breaking news"||u2=="tell me some fresh news"||u2=="breaking new")
	{
		system("C:\\project\\news");
		
	}
			if(u2=="jokes"||u2=="i want to read some jokes"||u2=="i want some jokes"||u2=="i want few jokes"||u2=="i want to read jokes"||u2=="i want jokes")//||u2="can you tell me some jokes")
			{
				jokes();
			}
			 
		   if(u2=="facts"||u2=="tell me facts"||u2=="tell me few facts"||u2=="i want facts"||u2=="i want some facts")
		{
		 facts();	
		}
		if(u2=="i want inspiring quotes"||u2=="inspire me"||u2=="i want quotes"||u2=="quotes"||u2=="inspiring quotes")
		{
			quotes();
		}
		if(u2=="i want to open my ums account"||u2=="ums"||u2=="please open ums"||u2=="run ums"||u2=="ums account"||u2=="start ums"||u2=="open my ums account"||u2=="i want to log into my ums account"||u2=="i want to log into ums")
		{
			system("C:\\project\\ums");
		}
		if(u2=="i want to talk"||u2=="will you talk with me"||u2=="we should talk"||u2=="i want to talk with you"||u2=="can we talk"||u2=="could you talk with me"||u2=="talk with me"||u2=="let's talk"||u2=="let us talk"||u2=="can we talk for a while"||u2=="let us just talk"||u2=="i want talk to you"||u2=="i like to talk to someone"||u2=="i wish to talk to someone"||u2=="i wish to talk")
		{
			 system("C:\\project\\vbs\\emotions1");
			cout<<"\nWHAT DO YOU LIKE TO TALK  ABOUT SIR\n\\n"<<endl;
			cin>>zz;
			cout<<"\nGOOD TOPIC TO DISCUSS SIR\n";
			cout<<"\nWHY YOU HAVE CHOSEN THIS TOPIC\n"<<endl;
			cin>>zz1;
			cout<<"\nI LIKE THE WAY YOU THINK SIR\n\n";
			cin>>zz2;
			cout<<"\nWELL NOW TELL ME ABOUT YOUR HOBBIES\n"<<endl;
			getline(cin,zz3);
			cout<<"\nWOW !!!"<<zz3<<" ARE PRETTY NICE HOBBIES\n"<<endl;
			cout<<"\nHOW DO YOU PASS YOUR TIME \n\n";
			cin>>zz4;
			cout<<"\n SOUNDS GOOD SIR\n";
			cout<<"\nTELL ME ABOUT YOUR BEST MEMORY FROM PAST\n"<<endl;
			cin>>zz5;
			cout<<"\nAWESOME NOW EVEN I CAN FEEL WHAT HUMMAN EMOTIONS ARE\n"<<endl;
			cin>>zz6;
			cout<<"\nTELL ME WHAT ABOUT YOUR FAVOURITE FOOD\n"<<endl;
			cin>>zz7;
			cout<<"\nWELL ACCORDING TO A SURVEY THIS IS MOST LOVED FOOD IN INDIA, SO I REALLY APPRECIATE YOUR CHOICE\n"<<endl;
			cout<<"\nBUT TELL ME WHY YOU LIKE IT SO MUCH\n\n";
			cin>>zz8;
			cout<<"\nWELL I CAN'T FEEL ANY TASTE BUT STILL THE WAY YOU DESCRIBE IT, I CAN UNDERSTAND WHY PEOPLE LIKE IT SO MUCH\n"<<endl;
			cout<<"\n WELL MY PROCESSOR NEEDS SOME REST WE WILL TALK LATER SIR IT'S NICE TALKING TO YOU SIR"<<endl<<endl<<"I AM NOW TRANSFERRING YOU OUT OF EMOTIONS MODE"<<endl<<endl;
			system("C:\\project\\vbs\\emotion2.vbs");
			
			
			
			
		}
		
	}
	
int main()
{
	 system("C:\\project\\vbs\\ai1");
	cout<<"HEY BUDDY \n";
	getline(cin,s1);
	if(s1==s2||s1==s3||s1==s4||s1==s5||s1==s6||s1==s7||s1==s8||s1==s9||s1==s10||s1==s11||s1==s12||s1==s13||s1==s14||s1==s15||s1=="yo buddy"||s1=="hi")
	{
		cout<<"NICE TO SEE YOU HERE\n";
		system("pause");
		chatter_box();
	}
	

}
