#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    int Rseri, Rbesar, Rkecil, R1, R2, R3, rangkaian;
    cout<<"====== Menghitung rangkaian seri ======"<<endl;
    cout<<"[1] menghitung total rangkaian seri"<<endl;
    cout<<"[2] menghitung Hambatan (R) terbesar"<<endl;
    cout<<"[3] menghitung Hambatan (R) terkecil"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Masukkan R1 : "; cin>>R1;
    cout<<"\nMasukkan R2 : "; cin >>R2;
    cout<<"\nMasukkan R3 : "; cin>>R3;
    cout<<"\nMasukkan Pilihan Anda : "; cin>>rangkaian;
    switch(rangkaian){
        case 1: Rseri=R1+R2+R3;
            cout<<"Hasil Penjumlahan dari "<<R1<<"+"<<R2<<"+"<<R3<< "= "<<Rseri; break;
        case 2: 
            if(R1<R2){
                Rbesar=R2;
            }else{
                Rbesar = R1;
            }
            if(R3>Rbesar){
                Rbesar=R3;
            }
            cout<<"Hambatan (R) terbesar adalah : "<<Rbesar;
            break;
        case 3: 
            if(R1>R2){
                Rkecil=R2;
            }else{
                Rkecil=R1;
            }
            if(R3<Rkecil){
                Rkecil=R3;
            }
            cout<<"Hambatan (R) kecil adalah : "<<Rkecil; break;
        default:
            cout<<"Pilihan salah";
    }
}