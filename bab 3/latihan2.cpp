#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    int alas, tinggi, pilihan;
    double sisi_miring, luas, keliling;
    cout<<"========Menghitung Segitiga siku siku========"<<endl;
    cout<<"[1] Menghitung sisi miring segitiga"<<endl;
    cout<<"[2] Menghitung Luas segitiga"<<endl;
    cout<<"[3] Menghitung Keliling Segitiga"<<endl;
    cout<<"==================================";
    cout<<"\nMasukkan Pilihan anda : ";
    cin>>pilihan;
    switch(pilihan){
        case 1:{
            cout<<"Masukkan alas segitiga : ";
            cin >> alas;
            cout<<"Masukkan tinggi segitiga: ";
            cin>>tinggi;
            sisi_miring=sqrt((alas*alas)+(tinggi*tinggi));
            cout<<"sisi miring segitiga adalah : "<<sisi_miring;
            break;
        }
        case 2:{
            cout<<"Masukkan alas segitiga : ";
            cin >> alas;
            cout<<"Masukkan tinggi segitiga: ";
            cin>>tinggi;
            luas=(0.5)*(alas+tinggi);
            cout<<"Luas segitiga adalah : "<<luas;
            break;  
        }
        case 3:{
            cout<<"Masukkan alas segitiga : ";
            cin >> alas;
            cout<<"Masukkan tinggi segitiga: ";
            cin>>tinggi;
            sisi_miring=sqrt((alas*alas)+(tinggi*tinggi));
            keliling=sisi_miring+alas+tinggi;
            cout<<"Keliling segitiga adalah : "<<keliling;
            break;
        }
        default:
        cout<<"pilihan anda salaah";
        break;
    }
    return 0;
}