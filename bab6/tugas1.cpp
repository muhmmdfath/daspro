#include<iostream> 
#include<windows.h> 
using namespace std;
int main()
{
cout<<endl;
cout<<"Nama\t : Muhamad Fatih 'Ad-Li "<<endl; 
cout<<"NIM\t : 32602200017"<<endl<<endl;
string nama, alamat, email; 
cout<<"Masukkan nama : "; 
getline(cin, nama); 
cout<<"Masukkan email : "; 
getline(cin, email); 
cout<<"Masukkan alamat : "; 
getline(cin, alamat);
system("clear");
cout<<"Nama Anda	: "<< nama << endl; 
cout<<"Email Anda	: "<< email << endl; 
cout<<"Alamat Anda 	: "<< alamat << endl;
return 0;}
