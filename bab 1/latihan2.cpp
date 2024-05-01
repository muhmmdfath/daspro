#include <iostream>
using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"NIM : 32602200017\n";
    int jumlah_buku, lusin_buku, lusin, buku;
    lusin_buku = 12;

    cout<<"masukkan jumlah buku : ";
    cin>>jumlah_buku;
    lusin = jumlah_buku/lusin_buku;
    buku = jumlah_buku%lusin_buku;
    cout<<jumlah_buku<<" buku = "<<lusin<<" lusin, "<<buku<<" buku";

}