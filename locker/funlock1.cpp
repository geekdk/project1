#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
void unlockfolder()
{
 char folder[255]={"C:\\Users\\vrd\\Desktop\\VRD\\HIGHLY"}; 
 char tempfolder[255];
 char attributes[50];
 char del[50];
 ofstream lfolder;

 strcpy(tempfolder, folder);

 strcat(folder, "\\Desktop.ini");

 strcpy(del, "del ");
 strcat(del, folder);
 system(del);

 strcpy(attributes, "attrib -h -s ");
 strcat(attributes, tempfolder);
 
 WinExec(attributes, NULL);

 lfolder.open("C:\\windows\\db.dat", ios::app);
 lfolder << "! Folder Unlocked: " << tempfolder << endl;
 lfolder.close();

 cout << "\n\n"<< "folder has been unlocked successfully!\n";
}
int main()
{
	unlockfolder();
	return 0;
}
