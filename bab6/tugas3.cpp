#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main ()
{
cout << endl;
cout << "Nama\t: Muhammad Fatih 'Ad-Li " << endl;
cout << "Nim\t: 32602200017" << endl << endl;
	int pilih, i, n;
   char plaint[100], chipert[100];
 again:
   cout << "Silahkan masukan 1, 2, atau 3\n";
   cout << "1. Cari Chipert Text\n";
   cout << "2. Cari Plaint Text\n";
   cout << "3. Keluar\n";
   cout << "\t\tInput : ";
   cin>>pilih;
   std::cin.ignore();
   if (pilih==1)
   {
	cout << "Plaint text : ";
	cin.getline(plaint,100);
	n = strlen (plaint);
	cout << "\nChiper text : ";
	for (i=0;i<n;i++)
      {
	chipert[i] = (plaint[i]+3);
	cout << chipert[i];
	}
     //getche();
	cout<<endl<<endl;
     goto again;
   }
   else if(pilih==2)
   {
	cout << "Chiper text : ";
	cin.getline (chipert,100);
	n = strlen (chipert);
      cout << "\nPlaint text : ";
	for (i=0;i<n;i++)
      {
	plaint[i] = (chipert[i]-3);
			cout << plaint[i];
	}
	cout<<endl<<endl;
// getche();
 goto again;
   }
   else
   exit(0);}
