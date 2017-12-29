#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
int main(){
   string pass ="";
   char ch;
   cout << "PLEASE ENTER PASSWORD \n";
   ch = getch();
  while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "SDvrdcss"){
      system("C:\\project\\locker\\sa");
   }else{
      cout << "\nAccess aborted...\n";
   }
}
