#include <iostream>
using namespace std;
main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017";
    int pesan;
    cout<<"\t\t\t\tSOUP BUAH";
    cout<<"\n\n\nCategori dan Harganya : ";
    cout<<"\n\n\t1. Komplit = Rp 10.000";
    cout<<"\n\n\t2. No milk = Rp 8.000";
    cout<<"\n\n\t3. Buah Saja = Rp 5.000";
    cout<<"\n\n\tSilahkan Pesan (1/2/3) : ";
    cin >>pesan;
    if(pesan==1){
        cout<<"\n\tAnda Harus membayar 10.000, Terimakasih";
    }else if(pesan==2){
        cout<<"\n\tAnda Harus membayar 8.000, Terimakasih";
    }else if(pesan==3){
        cout<<"\n\tAnda Harus membayar 5.000, Terimakasih";
    }else{
        cout<<"\n\tPesanan tidak tersedia, Terimakasih";
    }
}