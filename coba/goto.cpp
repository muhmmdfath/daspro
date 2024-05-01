#include <iostream>
using namespace std;
int main(){
    int angka=0;
    CobaLagi:
    cout<<"Masukkan Angka : ";
    cin>>angka;
    if(angka!=5)goto CobaLagi;
}