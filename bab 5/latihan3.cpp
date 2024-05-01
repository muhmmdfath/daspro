#include <iostream> 
using namespace std; 
int i, n;
float pembilang, penyebut, simpan[100]; 
void proses1(int n)
{
    penyebut = 1;
    for(i = 1; i<=n; i++)
    {
    if(i==1)
    cout << " 1/" << i ; else
    cout << "1/" << i ; if(i==n)
    cout << "\n= "; else
    cout << " + ";
    penyebut = penyebut * i;
    }
    for(i = 1; i<=n; i++)
    {
        simpan[i] = penyebut / i;
        cout << simpan[i] << "/" << penyebut; 
        if(i==n)
        cout << ""; else
        cout << " + ";
    }
}
int proses2(int n)
{
    pembilang = 0;
    for(i = 1; i<=n; i++)
    {
        pembilang = pembilang + simpan[i];
    }
    return(n);
}
main()
{
    penyebut = 1; 
    float desimal;
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    cout << "Program penjumlahan pecahan 1/1...1/4\n"; cout << "Penjumlahan dari...\n";
    proses1(4); proses2(4); cout << endl;
    cout << "= " << pembilang << " / " << penyebut; desimal = pembilang / penyebut;
    cout << "\n= " << desimal;
}
