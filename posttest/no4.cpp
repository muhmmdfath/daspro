#include <iostream>
using namespace std;
int hasil (int a, int b, char c){
    int jadi;
    if (c=='+'){
        jadi=a+b;
    }else if(c=='-'){
        jadi = a - b;
    }else if(c=='/'){
        jadi = a / b;
    }else if(c=='*'){
        jadi = a * b;
    }else{
        cout<<"ERROR";
    }
    cout<<"hasil dari "<<a<<" "<<c<<" "<<b <<" adalah : "<<jadi;
}
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"Nim : 32602200017\n\n";
    int angka1, angka2;
    char operatore;
    cout<<"masukkan angka 1 : ";cin>>angka1;
    cout<<"masukkan angka 2 : ";cin>>angka2;
    cout<<"masukkan operator : ";cin>>operatore;
    hasil(angka1, angka2, operatore);
}