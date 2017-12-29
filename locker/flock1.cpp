#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
void lockfolder()
{
 char pass[15]="";
 ofstream lfolder;
 char folder[200]={"C:\\Users\\vrd\\Desktop\\VRD\\HIGHLY"}; 
 char tempfolder[200]={'0'};
 char attributes[50]={'0'};
 strcpy(tempfolder, folder);

 strcat(folder, "\\Desktop.ini");
 
 lfolder.open(folder, ios::out);
 
 lfolder << "[.shellClassInfo]" << endl;
 lfolder << "CLSID = {63E23168-BFF7-4E87-A246-EF024425E4EC}" << endl;

 lfolder.close();

 strcpy(attributes, "attrib +h +s ");
 strcat(attributes, tempfolder);
 
 WinExec(attributes, NULL); 
 
 lfolder.open("C:\\windows\\db.dat", ios::app);
 lfolder << "Folder Locked: " << tempfolder << endl;
 lfolder.close();
 
 cout << "\n\n"<< "folder has been locked successfully!\n";
}
int main()
{
	lockfolder();
}
