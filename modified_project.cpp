#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<Lmcons.h>
using namespace std;
const int MAX=2000;
void menu();
char name0[]="mon",name1[]="tue",name2[]="wed",name3[]="thu",name4[]="fri",name5[]="sat",name6[]="sun",uname[10],name[10],wname[10];
   char name7[]="rmon",name8[]="rtue",name9[]="rwed",name10[]="rthu",name11[]="rfri",name12[]="rsat",name13[]="rsun";
	int count=0;
void rfun();
void battery()
{
	int bat;
	  SYSTEM_POWER_STATUS spsPwr;
    if( GetSystemPowerStatus(&spsPwr) ) {
      //  cout << "\nAC Status : " << static_cast<double>(spsPwr.ACLineStatus)
      //       << "\nBattery Status : " << static_cast<double>(spsPwr.BatteryFlag)
           bat= static_cast<double>(spsPwr.BatteryLifePercent);
             if(bat<25)
             {
             	system("C:\\project1\\vbs\\battery.vbs");
			 }
        
    } 
}

void chatter_box();

	string s1,s2("hi there"),s3("what's up"),s4("yo man"),s5("hey mate"),s6("hello"),s7("yo"),s8("hello buddy"),s9("hello mate"),s10("namaste"),s11("namaskar"),s12("good morning"),s13("good afternoon"),s14("good evening"),s15("hey");
	string u1,u3,u2,zzz,t;
	string s16("i am feeling lonely"),s17("i am getting bored"),s18("i am feeling bored"),s19("i like to have some fun"),s20("i like to check my pnr status"),s21("i like to browse facebook");
	string s22("facebook"),s23("there is no one there to talk to me"),s24("i like to know about an area code"),s25("i wish to search a word"),s26("dictionery");
	string s27("can you talk to me"),s28("i like to talk to someone"),s29("facts"),s30("current affairs"),s31("i am all alone"),s32("i have no one to talk to"),s33("i am alone");
    string s34("i am too lonely"),s35("it is too lonely");
    char zz[MAX],zz1[MAX],zz2[MAX],zz3[MAX],zz4[MAX],zz5[MAX],zz6[MAX],zz7[MAX],zz8[MAX],zz9[MAX],zz10[MAX];
    char cse[50],user[UNLEN+1];
	int d;
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
	chatter_box();
}
	void chatter_box()
	{
		int pos,pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10,pos11,pos12,pos13,pos14,pos15,pos16,pos17,pos18,pos19,pos20,pos21,pos22,pos23,pos24,pos25,pos26,pos27,pos99;
	
	 start1:
	 	battery();
		system("cls");
	/*	cout<<"\nHOW is YOUR DAY GOING SIR"<<endl;
		getline(cin,zzz);
		cout<<"\nWHAT CAN I DO FOR YOU\n"<<endl;*/
		DWORD user_len=UNLEN+1;
	GetUserName(user, &user_len);
	
	cout<<"**************************************************************  {THE DOST} *********************************************                                                          {Enter 1 for main menu}"<<endl;
   cout<<"\n\n\n\n\nTHE DOST: "<<"Hello!! Sir How is your day going "<<endl;
   getline(cin,zzz);
  // system("C:\\project\\vbs\\aiwelcome.vbs");
   cout<<user<<": ";
	    //start:
	system("cls");
			
		cout<<"**************************************************************  {THE DOST} *********************************************                                                          {Enter 1 for main menu}"<<endl;
   cout<<"\n\n\n\n\nTHE DOST: "<<" Sir What can I do for you?"<<endl;
   cout<<user<<": ";
		getline(cin,u2);
		pos1=u2.find("bluetooth");
if(pos1>=0)
{system("C:\\Windows\\System32\\fsquirt.exe");
chatter_box();
}
pos=u2.find("browser");
pos99=u2.find("search");
if(pos2>=0||pos99>=0)
{system("C:\\Program Files\\Internet Explorer\\iexplore.exe");
//chatter_box();
}
pos3=u2.find("calculator");
if(pos3>=0)
{
system("C:\\Windows\\System32\\calc.exe");
//chatter_box();
}
		 pos26= u2.find("dice");
		 if(pos26>=0)
		 {
		 		system("C:\\project1\\vbs\\random");
		 		chatter_box();
		 }
		 pos= u2.find("source code");
		 if(pos>=0)
		 {
		 	system("C:\\project1\\vbs\\dm");
		 	string pass ="";
   char ch;
   cout << "PLEASE ENTER PASSWORD \n";
   ch = getch();
  while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "MRDcss"){
      system("C:\\project1\\modified_project.cpp");
   }else{
      cout << "\nAccess aborted...\n";
   }
		 }
	//	if(u2==s16||u2==s31||u2==s32||u2==s33||u2==s34||u2==s35)
	 pos16 = u2.find("lonely"); 
	if(pos16>=0)
		{
			cout<<"\nWHY ARE YOU FEELING LONELY SIR \n"<<"CAN I HELP YOU IN SOME WAY, LIKE TELLING YOU JOKES,FACTS,INSPIRING QUOTES ETC."<<endl;
			cin>>u3;
		//	if(u3=="jokes"||u3=="i want to read some jokes"||u3=="i want some jokes"||u3=="i want jokes"||u3=="i want to read jokes"||u3=="i want jokes")//||u3="can you tell me some jokes")
	pos1=u3.find("jokes");
	pos2=u3.find("facts");
	pos3=u3.find("quotes");
	if(pos1>=0)	
			{
				jokes();
			}
			 
		   //if(u3=="facts"||u3=="tell me facts"||u3=="tell me few facts"||u3=="i want facts"||u3=="i want some facts")
		if(pos2>=0)
		{
		 facts();	
		}
	//	if(u3=="i want inspiring quotes"||u3=="inspire me"||u3=="i want quotes"||u3=="quotes"||u3=="inspiring quotes")
	if(pos3>=0)
		{
			quotes();
		}
		
	}
	 pos4= u2.find("learn"); //write vbs file for study mode activated
	 if(pos4>=0)
	//if(u2=="i want to learn something new"||u2=="want to learn new"||u2=="teach me something new"||u2=="i dont know what to learn"||u2=="want to learn different"||u2=="somthing different"||u2=="want to learn something amazing")
	{
		cout<<endl;
		system("cls");
		cout<<"So do you want to Learn Something new Amazing:-";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		system("cls");
		cout<<"Are you exited to learn somthing new Everytime";
		d=(rand()%15);
		switch(d)
		{
	    case 1:cout<<"Starting";
		system("start https://www.edx.org");
		system("pause");
	//	goto start;
		break;
		case 2:cout<<"Starting";
		system("start https://www.quora.com");
		system("pause");
		goto start1;
		break;
		case 3:cout<<"Starting";
		system("start http://www.allaboutcircuits.com");
		system("pause");
		goto start1;
		break;
		case 4:cout<<"Starting";
		system("start https://www.hackster.io");
		system("pause");
		goto start1;
		break;
		case 5:cout<<"Starting";
		system("start https://www.livecoding.tv");
		system("pause");
		goto start1;
		break;
		case 6:cout<<"Starting";
		system("start https://www.nayuki.io");
		system("pause");
		goto start1;
		break;
		case 7:cout<<"Starting";
		system("start http://www.instructables.com/");
		system("pause");
		goto start1;
		break;
		case 8:cout<<"Starting";
		system("start https://www.coursera.org/");
		system("pause");
		goto start1;
		break;
		case 9:cout<<"Starting";
		system("start http://ai2.appinventor.mit.edu/#6628989137846272");
		system("pause");
		goto start1;
		break;
		case 0:cout<<"Starting";
		system("start https://www.hackerrank.com");
		system("pause");
		goto start1;
    	case 11:cout<<"Starting";
		system("start http://community.ebooklibrary.org/");
		system("pause");
		goto start1;
		case 12:cout<<"Starting";
		system("start http://nptel.ac.in/");
		system("pause");
		goto start1;
		case 13:cout<<"Starting";
		system("start https://curiosity.com");
		system("pause");
		goto start1;
		case 14:cout<<"Starting";
		system("start https://www.dreamincode.com");
		system("pause");
		goto start1;


	}
}
	else
	{
		cout<<"So you have choosen Not to Learn New Amazing ";
		//sleep(100);
		goto start1;
	}
	}
	
/*	if(u2=="i want to learn physics"||u2=="I want to study physic"||u2=="teach me physics"||u2=="to learn physics"||u2=="learn physics")
	{
		cout<<endl;
		system("cls");
		cout<<"So do you want to Learn Physics:-";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		system("cls");
		cout<<"Starting Physics Website";
		system("start ");
		system("pause");
		goto start;
	
	}}
	else
	{
		cout<<"So you have choosen Not to Study Physics ";
		//sleep(100);
		goto start;
	}*/
	if(u2=="i want to learn CSE"||u2=="I want to study cse"||u2=="teach me programming"||u2=="to learn computer programming"||u2=="learn programming"||u2=="study cse"||u2=="study programming")
	{
		cout<<"So do you want to Learn Programming:- ";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		cout<<"Which startic you want to study :- ";
		cin>>cse;
		
			if(cse=="classes")
			{
			system("cls");
			cout<<"Starting toutorials of classes"<<endl;
 			                system("start https://www.cplusplus.com/doc/tutorial/classes/");
							system("pasue");
							goto start1;
					
						}
			if(cse=="file handling")
			{
			system("cls");
			cout<<"Starting Toutorials of File handling"<<endl;
			                system("start https://www.csegeek.com/csegeek/view/tutorials/cpp_lang/cpp_file.php");
							system("pausew");
							goto start1;
				}
			if(cse=="polymorphysim")
			{
			system("cls");
			cout<<"Starting toutorials of Polymorphysim"<<endl;
			                system("start https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm");
							system("pasue");
							goto start1;
										}
			if(cse=="inheritance")
			{
			system("cls");
			cout<<"Starting tutorials of Inheritance"<<endl;
			                system("start https://www.programiz.com/cpp-programming/inheritance");
							system("pasue");
							goto start1;
		}
			if(cse=="general")
			{
			system("cls");
			cout<<"Starting tutotials of Programming"<<endl;
			        		system("start https://www.tutorialspoint.com/cplusplus/");
							system("pasue");
							goto start1;
				
						}
		if(cse=="normal")
		{
		system("cls");
			cout<<"Starting tutotials of Programming"<<endl;
			        		system("start https://www.learncpp.com/");
							system("pasue");
							goto start1;
				
						}
 	if(cse=="programming")
	 {
	 system("cls");
			cout<<"Starting tutotials of Programming"<<endl;
			        		system("start https://www.udemy.com/free-learn-c-tutorial-beginners/");
							system("pasue");
							goto start1;
										}
	if(cse=="tutorials")
	{
	system("cls");
			cout<<"Starting tutotials of Programming"<<endl;
			        		system("start https://www.cprogramming.com/tutorial/c++-tutorial.html");
							system("pasue");
							goto start1;
						
						}
	  if(cse=="computer science")
	  {
	  system("cls");
			cout<<"Starting tutotials of Programming"<<endl;
			        		system("start https://www.tutorialspoint.com/cplusplus/");
							system("pasue");
							goto start1;
							
						}
		}
	

	else
	{
		cout<<endl<<"So you have choosen Not to Study Computer Progamming :-";
		goto start1;
	}
}
	if(u2=="i want to learn english"||u2=="I want to study english language"||u2=="teach me english"||u2=="to learn english"||u2=="learn programming"||u2=="study english")
	{
		cout<<"So do you want to Learn English Language:- ";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		cout<<"Which topic you want to study :- ";
		cin>>cse;
		if(cse=="grammer")
		{
		system("cls");
			cout<<"Starting toutorials of English grammer"<<endl;
 			                system("start https://www.talkenglish.com/grammar/grammar.aspx");
							system("pasue");
							goto start1;
						}
			if(cse=="vacabulary")
			{
			system("cls");
			cout<<"Starting Toutorials of English vocabulary"<<endl;
			                system("start https://www.englishpage.com/vocabulary/vocabulary.htm");
							system("pause");
							goto start1;
				
						}
		if(cse=="Verbal")
		{
		system("cls");
			cout<<"Starting toutorials of Verbal english"<<endl;
			                system("start https://www.englishpage.com/verbpage/verbtenseintro.html");
							system("pasue");
							goto start1;
						
						}
		if(cse=="Verbs")
		{
		system("cls");
			cout<<"Starting tutorials of Verbs"<<endl;
			                system("start https://www.talkenglish.com");
							system("pasue");
							goto start1;
						
						}
			if(cse=="conversation")
			{
			system("cls");
			cout<<"Starting tutotials of english conversation"<<endl;
			        		system("start https://www.talkenglish.com");
							system("pasue");
							goto start1;
					
						}
			if(cse=="tenses")
			{
			system("cls");
			cout<<"Starting tutotials of English Tenses /n";
			        		system("start https://www.englishpage.com/verbpage/verbtenseintro.html");
							system("pasue");
							goto start1;
				
						}
 		if(cse=="formal")
		 {
		 system("cls");
			cout<<"Starting tutotials of Formal English";
			        		system("start https://www.talkenglish.com");
							system("pasue");
							goto start1;
				
						}
		if(cse=="tutorials")
		{
		system("cls");
			cout<<"Starting tutotials of English";
			        		system("start https://www.talkenglish.com");
							system("pasue");
							goto start1;
					
						}
		}
	
	}
	if(u2=="i want to learn chemistry"||u2=="I want to study chemistry"||u2=="teach me chemistry"||u2=="to learn chemistry"||u2=="learn chemistry")
	{
		cout<<endl;
		system("cls");
		cout<<"So do you want to Learn chemistry:-";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		system("cls");
		cout<<"Starting Chemistry Website"<<endl;
		system("start https://nptel.ac.in/courses/122106028");
		system("pause");
		goto start1;
}
	else
	{
		cout<<"So you have choosen Not to Study Chemistry ";
		goto start1;
	}}
	if(u2=="i want to learn maths"||u2=="I want to study maths"||u2=="teach me maths"||u2=="to learn maths"||u2=="learn maths")
	{
		cout<<endl;
		system("cls");
		cout<<"So do you want to Learn maths:-";
		cin>>t;
		if(t=="YES"||"yes"||"YA"||"ya"||"YEAH"||"yeah"||"sure"||"ofcourse")
		{
		system("cls");
		cout<<"Starting maths Website"<<endl;
		system("start https://nptel.ac.in/courses/111105035");
		system("pause");
		goto start1;
	
	}
	else
	{
		cout<<"So you have choosen Not to Study chemistry ";

		goto start1;
	}
}
//if(u2=="i want news"||u2=="I want to study news"||u2=="to learn news"||u2=="show news")
 pos5 = u2.find("news"); 
 if(pos5>=0)
	{
		
		system("cls");
		cout<<"Starting NEWS Website";
		system("start www.bbc.com/news");
		system("pause");
		goto start1;
	
	}
	pos6=u2.find("pnr");
	if(pos6>=0)
	//if(u2=="pnr status"||u2=="pnr"||u2==s20)
	{
		system("C:\\project\\vbs\\pnr");
	}
//	if(u2==s22||u2=="i want to browse facebook"||u2=="fb"||u2=="open facebook"||u2=="start facebook"||u2=="start fb"||u2=="open fb")
 pos7= u2.find("facebook");
  pos8= u2.find("fb");
  if(pos7>=0||pos8>=0)  
	{
		system("C:\\project\\fb");
	}
//	if(u2=="i want to check my gmail account"||u2=="open gmail"||u2=="start gmail"||u2=="gmail")
	 pos9= u2.find("gmail");
	  pos10= u2.find("mail");
	  if(pos9>=0||pos10>=0)  
	{
		system("C:\\project\\mail");
}
  pos11= u2.find("dictionary"); 
 //   if(u2==" open dictionery"||u2==s26||u2==s25)
   if(pos11>=0)
    {
    	 system("C:\\project\\vbs\\search");
	}
	if(u2==s30||u2=="i want to know what is going on"||u2=="i want to know about news"||u2=="news"||u2=="current affairs"||u2=="breaking news"||u2=="tell me breaking news"||u2=="tell me some fresh news"||u2=="breaking new")
	{
		system("C:\\project\\news");
		
		
	}
		//	if(u2=="jokes"||u2=="i want to read some jokes"||u2=="i want some jokes"||u2=="i want few jokes"||u2=="i want to read jokes"||u2=="i want jokes")//||u2="can you tell me some jokes")
	 pos12= u2.find("jokes");
	 if(pos12>=0) 
			{
				jokes();
			}
			 
		   //if(u2=="facts"||u2=="tell me facts"||u2=="tell me few facts"||u2=="i want facts"||u2=="i want some facts")
	 pos13= u2.find("facts"); 
		if(pos13>=0)
		{
		 facts();	
		}
	//	if(u2=="i want inspiring quotes"||u2=="inspire me"||u2=="i want quotes"||u2=="quotes"||u2=="inspiring quotes")
	 pos14= u2.find("quotes");
	 if(pos14>=0||u2=="inspire me") 
		{
			quotes();
		}
		//if(u2=="i want to open my ums account"||u2=="ums"||u2=="please open ums"||u2=="run ums"||u2=="ums account"||u2=="start ums"||u2=="open my ums account"||u2=="i want to log into my ums account"||u2=="i want to log into ums")
		 pos15= u2.find("ums"); 
	if(pos15>=0)
		{
			system("C:\\project\\ums");
			chatter_box();
		}
		if(u2=="i want to talk"||u2=="will you talk with me"||u2=="we should talk"||u2=="i want to talk with you"||u2=="can we talk"||u2=="could you talk with me"||u2=="talk with me"||u2=="let's talk"||u2=="let us talk"||u2=="can we talk for a while"||u2=="let us just talk"||u2=="i want talk to you"||u2=="i like to talk to someone"||u2=="i wish to talk to someone"||u2=="i wish to talk"||u2=="talk"||u2=="i need to talk")
		{
			 system("C:\\project\\vbs\\emotions1");
			 cout<<"\nLET US TALK SIR"<<endl;
			 gets(zz10);
			cout<<"\nWHAT DO YOU LIKE TO TALK  ABOUT SIR\n\n"<<endl;
			gets(zz);
			cout<<"\nGOOD TOPIC TO DISCUSS SIR\n";
			cout<<"\nWHY YOU HAVE CHOSEN THIS TOPIC\n"<<endl;
			gets(zz1);
			cout<<"\nI LIKE THE WAY YOU THINK SIR\n\n";
			gets(zz2);
			cout<<"\nWELL NOW TELL ME ABOUT YOUR HOBBIES\n"<<endl;
			gets(zz3);
			cout<<"\nWOW !!!"<<zz3<<" ARE PRETTY NICE HOBBIES\n"<<endl;
			cout<<"\nHOW DO YOU PASS YOUR TIME \n\n";
			gets(zz4);
			cout<<"\n SOUNDS GOOD SIR\n";
			cout<<"\nTELL ME ABOUT YOUR BEST MEMORY FROM PAST\n"<<endl;
			gets(zz5);
			cout<<"\nAWESOME NOW EVEN I CAN FEEL WHAT HUMMAN EMOTIONS ARE\n"<<endl;
			gets(zz6);
			cout<<"\nTELL ME WHAT ABOUT YOUR FAVOURITE FOOD\n"<<endl;
			gets(zz7);
			cout<<"\nWELL ACCORDING TO A SURVEY THIS IS MOST LOVED FOOD IN INDIA, SO I REALLY                 APPRECIATE YOUR CHOICE\n"<<endl;
			cout<<"\nBUT TELL ME WHY YOU LIKE IT SO MUCH\n\n";
			gets(zz8);
			cout<<"\nWELL I CAN'T FEEL ANY TASTE BUT STILL THE WAY YOU DESCRIBE IT, I CAN UNDERSTAND WHY PEOPLE LIKE IT SO MUCH\n"<<endl;
			system("pause");
			cout<<"\n WELL MY PROCESSOR NEEDS SOME REST WE WILL TALK LATER SIR IT'S NICE TALKING TO YOU SIR"<<endl<<endl<<"I AM NOW TRANSFERRING YOU OUT OF EMOTIONS MODE"<<endl<<endl;
			system("C:\\project\\vbs\\emotions2");
			system("pause");
			chatter_box();
			
			
			
		}
		if(u2=="tell me about yourself"||u2=="who are you"||u2=="what are you"||u2=="tell me about you"||u2=="about you"||u2=="who the hell are you"||u2=="about")
		{
			system("C:\\project\\vbs\\about");
			chatter_box();
		}
		if(u2=="tell me about your creator"||u2=="who created you"||u2=="who has written your program"||u2=="who had written your program"||u2=="who wrote you"||u2=="who had written you"||u2=="who is your god"||u2=="the creator"||u2=="creator")
		{
			MessageBox(NULL, " My code is written by highly skilled engineers's group called THE MRD" , "THE CREATOR", MB_OK);
		chatter_box();		
		}
		
		pos17= u2.find("fuck");
		pos18=u2.find("motherfucker");
		pos19=u2.find("motherfucking");
		pos20=u2.find("fag");
		pos21=u2.find("faggot");
		pos22=u2.find("chutiya");
		pos23=u2.find("madarchod");
		pos24=u2.find("behnchod");
		pos25=u2.find("sala");
		if(pos17>=0||pos18>=0||pos19>=0||pos20>=0||pos21>=0||pos22>=0||pos23>=0||pos24>=0||pos25>=0)
		{
			system("cls");
		MessageBox(NULL, "PLEASE BE POLITE ", "WARNING !!!", MB_OK);
		//	system("C:\\project1\\vbs\\hurt.vbs");
		//	system("pause");
			count++;
			if(count>=5)
			{
				system("C:\\project1\\vbs\\hurt.vbs");
			}
			chatter_box();
			
		}
		if(u2=="exit")
		{
			system("C:\\project\\vbs\\ai2");
			return;
		}
		pos27=u2.find("menu");
		if(pos27>=0)
		{
			//cout<<"bhr";
			menu();
			//cout<<"gandu";
			system("pause");
			return;
		}
		
		
	}
	
void getdt(char name[])
{
	system("cls");
   ofstream off;
	char line[MAX];
	off.open(name);
	cout<<"please enter the time table line by line and you also have to enter the time manually and terminate it with ."<<endl;
	cin.get(line,MAX,'.');
	off<<line;
	off.close();
	return;
}
void getd(char name[])
{
	system("cls");
   ofstream off;
	char line[MAX];
	int t;
	off.open(name);
	cout<<"please enter the reminder line by line and terminate it with ."<<endl;
	cin.get(line,MAX,'.');
	off<<line;
	off.close();
	return;
}
void putd(char name[])
{
	
	char ch;
	ifstream iff;
	iff.open(name);
	if(iff.fail())
	{
	MessageBox(NULL, "No Data to Display, Please enter from main menu ", "Sorry Note", MB_OK);
		return ;
	}
	while(!iff.eof())
	{
		ch=(char)iff.get();
		cout.put(ch);
	}
	iff.close();
	return;

}
void putd1(char name[])
{
	char ch;
	ifstream iff;
	iff.open(name);
	if(iff.fail())
	{
		MessageBox(NULL, "No Data to Display, Please enter from main menu ", "Sorry Note", MB_OK);
		return ;
	}
	while(!iff.eof())
	{
		ch=(char)iff.get();
		cout.put(ch);
	}
	iff.close();
	cout<<endl;
	return;
	

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
	{  case 0: MessageBox(NULL, "Good Morning! HAVE A GOOD DAY             ", "WELCOME NOTE", MB_OK);
	              break; 
	case 1: MessageBox(NULL, "Good Morning! Nice to See you                 ", "WELCOME NOTE", MB_OK);
	              break;
	   case 2: MessageBox(NULL, "Good Morning! I am here to Help you         ", "WELCOME NOTE", MB_OK);
	               break;
		case 3:MessageBox(NULL, "Good Morning! reSific Tecnnologies Welcomes you ", "WELCOME NOTE", MB_OK);             
		 
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
	{  case 0: MessageBox(NULL, "Good Afternoon! HAVE A GOOD DAY             ", "WELCOME NOTE", MB_OK);
	              break; 
	case 1: MessageBox(NULL, "Good Afternoon ! Nice to See you                 ", "WELCOME NOTE", MB_OK);
	              break;
	   case 2: MessageBox(NULL, "Good Afternoon ! I am here to Help you         ", "WELCOME NOTE", MB_OK);
	               break;
		case 3:MessageBox(NULL, "Good Afternoon ! reSific Tecnnologies Welcomes you ", "WELCOME NOTE", MB_OK);             
		 
	}

}
void salutation::evening()
{
	int a,t;
	srand(time(NULL));
	a=(rand()%4);
	switch(a)
	{  case 0: MessageBox(NULL, "Good Evening ! HAVE A GOOD DAY             ", "WELCOME NOTE", MB_OK);
	              break; 
	case 1: MessageBox(NULL, "Good Evening ! Nice to See you                 ", "WELCOME NOTE", MB_OK);
	              break;
	   case 2: MessageBox(NULL, "Good Evening ! I am here to Help you         ", "WELCOME NOTE", MB_OK);
	               break;
		case 3:MessageBox(NULL, "Good Evening ! reSific Tecnnologies Welcomes you ", "WELCOME NOTE", MB_OK);             
		 
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
	case 0: MessageBox(NULL, "Good Morning! HAVE A GOOD DAY             ", "WELCOME NOTE", MB_OK);
	break;
	case 1: MessageBox(NULL,"GOODBYE SIR ENJOY YOUR DAY","WELCOME NOTE",MB_OK);
	break;
}
}
void salutation::night()
{
	int a;
	srand(time(NULL));
	a=(rand()%2);
	switch(a)
	{ case 0: MessageBox(NULL, "GOOD Evening  SIR!!             ", "WELCOME NOTE", MB_OK);
	break;
	case 1: MessageBox(NULL, "GOOD EVENING SIR HOPE YOUR DAY WENT FINE             ", "WELCOME NOTE", MB_OK);
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

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
   
   	int d,t;
	salutation s;
	fun f;
	time_t now=time(0);
	tm *ltm=localtime(&now);
	d= ltm->tm_wday;
	t=ltm->tm_hour;
	system("C:\\project\\greet");
	if(t>0&&t<12)
	s.morning();
	if(t<17&&t>=12)
	s.noon();
	if(t>=17&&t<24)
	s.evening();
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
	start:	
	int p1,p2,p3,p4,p5,p6,p7;	
		system("C:\\project\\vbs\\ai1");         
  z: { system("cls");
  cout<<"HEY BUDDY \n";
	cin>>s1;
	p1=s1.find("hello");
	p2=s1.find("hi");
	p3=s1.find("hey");
	p4=s1.find("good morning");
	p5=s1.find("good afternoon");
	p6=s1.find("good evening");
	p7=s1.find("yo");
	if(s1==s2||s1==s3||s1==s4||s1==s5||s1==s6||s1==s7||s1==s8||s1==s9||s1==s10||s1==s11||s1==s12||s1==s13||s1==s14||s1==s15||s1=="yo buddy"||s1=="hi"||p1>=0||p2>=0||p3>=0||p4>=0||p5>=0||p6>=0||p7>=0)
	{
		cout<<"NICE TO SEE YOU HERE\n";
		system("pause");
		chatter_box();
		return 0;
		
	}
	}
  

//	goto start;
	return 0;
	
	
	
	
	
}
void menu()
{

   	int d,c,t,y,k,z;
   	fun f;
	cout<<"NOW SIR WHAT WOULD YOU LIKE TO DO"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\t\t1)TODAY'S COLLEGE TIME TABLE"<<endl<<endl<<"\t\t2)CLASS TIME TABLE"<<endl<<endl<<"\t\t3)DO YOU WANT TO LOG INTO UMS"<<endl<<endl<<"\t\t4)DO YOU WANT TO SET ANY IMPORTANT REMINDER"<<endl<<endl;
	cout<<"\t\t5)DO YOU WANT TO UPDATE TIME TABLE"<<endl<<endl<<"\t\t6)DO YOU WANT TO HAVE SOME FUN!!!"<<endl<<endl<<"\t\t7)MORE THAT WE OFFER"<<endl<<endl;
	cout<<"\t\t8)DO YOU WANT TO SET ANY URGENT REMINDER"<<endl<<endl<<"\t\t9) HIGHLY ADVANCE A.I. MODE"<<endl<<endl<<"10)exit"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
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
		case 2: system("cls");
		        cout<<"For Which day you want to see the Time table"<<endl<<"Please Enter first three letter of day: ";
				cin>>name;
				putd(name);
				         
		case 3: system("C:\\Users\\VisitoRs\\Desktop\\New folder (2)\\New folder\\ums");
		        break;
		case 4: system("cls");
		       cout<<"FOR WHICH DAY YOU WANT TO SET A REMINDER"<<endl;
		       cout<<"PLEASE ENTER FIRST THREE LETTERS OF THE WEEK ALSO PLEASE USE LETTER R AS PREFIX "<<endl; 
		       cin>>uname;
		       getd(uname);
		      // goto start;
		       break;
			   
		case 5:
		          system("cls");
		        cout<<"PLEASE ENTER THE DAY FOR WHICH YOU WANT TO UPDATE TIME TABLE"<<endl<<"PLEASE ENTER FIRST THREE LETTERS"<<endl;
		       cin>>wname;
		       getdt(wname);
		       //goto start;
		       break;
				         
		case 6: cout<<"SO YOU WANT TO HAVE SOME FUN"<<endl;
		        cout<<"SO PLEASE ENTER YOUR CHOICE"<<endl;
				cout<<"1) FACEBOOK"<<endl<<"2) GMAIL"<<endl<<"3) Main Menu";
				cin>>k;
				switch(k)
				{
				case 1: f.fb();
				break;
				case 2: f.mail();
				break;
				//case 3: goto start;
			}
				break;
		case 7: system("cls");
		int x;
			cout<<"\n====================================================="<<endl;
		cout<<"\nPLEASE ENTER YOUR CHOICE\n"<<"\n1) PNR ENQUIRY\n"<<"\n2)FASTER GOOGLE SEARCH\n"<<"\n3)PIN CODE ENQUIRY\n"<<"\n4)CURRENT LOCATION\n"<<endl;
			cout<<"\n====================================================="<<endl;
		cin>>x;
		switch(x)
		{
			case 1: system("C:\\project\\vbs\\pnr");
			break;
			case 2: system("C:\\project\\vbs\\search");
			break;
			case 3: system("C:\\project\\vbs\\pin_enquiry");
			break;
			case 4: system("C:\\project\\vbs\\current_loc");
			break;
		}
			
		case 8: system("C:\\Users\\VisitoRs\\Desktop\\New folder (2)\\New folder\\djj");
				 break;
		case 10:  MessageBox(NULL, "Thankyou for choosing  us", "reSific Technologies", MB_OK);
		exit(1);
		break;
		case 9:	 {
		int p1,p2,p3,p4,p5,p6,p7;	
		system("C:\\project\\vbs\\ai1");
	cout<<"HEY BUDDY \n";
	cin>>s1;
	p1=s1.find("hello");
	p2=s1.find("hi");
	p3=s1.find("hey");
	p4=s1.find("good morning");
	p5=s1.find("good afternoon");
	p6=s1.find("good evening");
	p7=s1.find("yo");
	if(s1==s2||s1==s3||s1==s4||s1==s5||s1==s6||s1==s7||s1==s8||s1==s9||s1==s10||s1==s11||s1==s12||s1==s13||s1==s14||s1==s15||s1=="yo buddy"||s1=="hi"||p1>=0||p2>=0||p3>=0||p4>=0||p5>=0||p6>=0||p7>=0)
	{
		cout<<"NICE TO SEE YOU HERE\n";
		system("pause");
		chatter_box();
	}
	break;}
			 		       
		default: cout<<"You made a Wrong Choice";
		exit(1);
		break;             
	} 	
}


