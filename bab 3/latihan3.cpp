#include <iostream>
using namespace std;
int main() {
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    int bulan;
    cout<<"Program menentukan nama bulan berdasarkan inputan"<<endl;
    cout<<"================================================"<<endl;
    cout<<"Masukkan kode bulan [1-12] : ";
    cin>>bulan;
    cout<<"================================================"<<endl;
    switch (bulan)
    {
    case 1:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : januari";
        break;
    case 2:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Februari";
        break;
    case 3:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Maret";
        break;
    case 4:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : April";
        break;
    case 5:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Mei";
        break;
    case 6:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Juni";
        break;
    case 7:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : juli";
        break;
    case 8:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Agustus";
        break;
    case 9:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : september";
        break;
    case 10:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : oktober";
        break;
    case 11:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : November";
        break;
    case 12:
        cout<<"Anda memasukkan kode "<<bulan<<" yang merupakan bulan : Desember";
        break;
    default:
        cout<<"Kode yang anda masukkan salah";
        break;
    }
    return 0;
}