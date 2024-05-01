#include <iostream>
using namespace std;
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    char operatore;
    double num1,num2;
    cout<<"Program kalkuator sederhana"<<endl;
    cout<<"operator yang digunakan adalah : "<<endl;
    cout<<"[*] Perkalian"<<endl;
    cout<<"[/] Pembagian"<<endl;
    cout<<"[+] Penjumlahan"<<endl;
    cout<<"[-] Pengurangan"<<endl;
    cout<<"contoh menghitung => 5/2 lalu tekan ENTER"<<endl;
    cout<<"silahkan masukkan operasi anda : ";
    cin>>num1>>operatore>>num2;
    switch(operatore){
        case '*': cout<<"Hasil = "<<num1*num2;break;
        case '/': cout<<"Hasil = "<<num1/num2;break;
        case '+': cout<<"Hasil = "<<num1+num2;break;
        case '-': cout<<"Hasil = "<<num1-num2;break;
        default: cout<<"\nperintah anda salah";break;
    }
    return 0;
}