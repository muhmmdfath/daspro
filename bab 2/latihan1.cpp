#include <iostream>
using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017";
    char pilihan;
    cout<<"Program ini akan MEMFORMAT HARDDISK anda ! & merusak semua data anda !";
    cout<<"\n\nApakah anda Yakin akan melanjutkannya? \n\t\t(Y/N) : ";
    cin >> pilihan;
    if (pilihan=='Y'||pilihan=='y'){
        cout<<"\n\n\n\t\t\t\a\a\a\a\a\a";
        cout<<"HARDDISK ANDA TERFORMAT!";
    }else{
        cout<<"Pilihan yang bijak, terimakasih";
    }
}