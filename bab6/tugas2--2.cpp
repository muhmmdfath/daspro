#include<iostream> 
#include<conio.h> 
#include<string.h> 
using namespace std;
main()
{
cout<<endl;
cout<<"Nama\t : Muhammad Fatih 'Ad-Li"<<endl; 
cout<<"NIM\t : 32602200017"<<endl<<endl;
string kata="?ASPROG"; 
char ch;
for(ch='A'; kata!="DASPROG"; ch++)
{
cout<<kata<<endl; kata[0]=ch;
}
cout<<"setelah loop berhenti, kata adalah "<<kata; 
getche();
}
