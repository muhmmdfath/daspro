#include <iostream>
using namespace std;
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017";
    int warna1, warna2;
    cout<<"\tNomor WARNA DASAR : \n\t\t1. Merah, \n\t\t2. Kuning, \n\t\t3. Biru";
    cout<<"\n\n\tmasukkan nomor dari 2 warna dasar ";
    cout<<"\n\t\tNomor Warna 1 : ";
    cin>>warna1;
    cout<<"\n\t\tNomor Warna 2 : ";
    cin>>warna2;
    cout<<"\n";
    if(warna1==1){
        if(warna2==2){
            cout<<"\t\tkombinasi warna merah & kuning \n\t\tmenghasilkan warna JINGGA";
        }else if(warna2==1){
            cout<<"\t\t\tKombinasi Warna merah & merah \n\t\tmenghasilkan warna MERAH";
        }else{
            cout<<"Kombinasi warna Merah & biru \n\t\tmenghasilkan warna UNGU";
        }
    }else if(warna1==2){
        if(warna2==1){
           cout<<"\t\tkombinasi warna merah & kuning \n\t\tmenghasilkan warna JINGGA";
        }else if(warna2==1){
            cout<<"\t\t\tKombinasi Warna merah & merah \n\t\tmenghasilkan warna KUNING";
        }else{
            cout<<"Kombinasi warna Merah & biru \n\t\tmenghasilkan warna HIJAU";
        } 
    }else{
        if(warna2==1){
            cout<<"\t\tkombinasi warna merah & kuning \n\t\tmenghasilkan warna UNGU";
        }else if(warna2==3){
            cout<<"\t\t\tKombinasi Warna merah & merah \n\t\tmenghasilkan warna BIRU";
        }else{
            cout<<"Kombinasi warna Merah & biru \n\t\tmenghasilkan warna HIJAU";
        }
    }
}