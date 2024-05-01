#include<iostream> 
using namespace std; 
int urutan(int a); 
int main(){
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    int angka;
    cout << "Masukkan Angka : "; cin >> angka;
    cout << "Urutan Angka : "<< endl; 
    cout << urutan(angka);
    return 0;
}
int urutan(int a){ 
    if(a != 0){
        cout << a << " "; 
        a -= 1;
        urutan(a);
    }else { 
        return 0;
    }
}
