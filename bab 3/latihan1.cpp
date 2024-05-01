#include <iostream>
using namespace std;
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    int angka;
    cout<<"Masukkan angka [0-7]: ";
    cin>>angka;
    switch(angka){
        case 0:
        case 1:{
            cout<<"Belajar menggunakan";
        }
        case 2:{
            cout<<" Bahasa C";
        }
        case 3:{
            cout<<" Pernyataan Switch Case \n";
            break;
        }
        case 4:{
            break;
        }
        case 5:{
            cout<<"Program ini menggunakan efek";
        }
        case 6:
        case 7:{
            cout<<" dari pernyataan break \n";
            break;
        }
        default:{
            cout<<"Angka yang anda masukan tidak terdaftar\n";
        }
    }
    cout<<"Keluar dari pernyataan swtich";
    return 0;
}