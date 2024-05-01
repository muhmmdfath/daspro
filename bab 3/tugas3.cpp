#include<iostream> 
#include<math.h> 
using namespace std; 
int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017\n";
    int a;
    float Phi = 3.14;
    float x, y, z, b, c, d, e;
    cout<<"====Program Menghitung Luas Penampang dan Volume Bangun Ruang====";
    cout<<"\n\n\t[1].Kubus"; 
    cout<<"\n\t[2].Balok"; 
    cout<<"\n\t[3].Kerucut"; 
    cout<<"\n\t[4].Tabung"; 
    cout<<"\n\t[5].Bola";
    cout<<"\n========================================";
    cout<<"\n\nPilihan Anda : "; 
    cin>>a; 
    switch(a){
    case 1:
        cout<<"\n====Anda memilih bangun ruang Kubus===="; cout<<"\n\nPanjang Sisi Kubus \t: "; cin>>x;
        b= (x*x)*6;
        cout<<"\nLuas Penampang Kubus \t: "<<b; c= x*x*x;
        cout<<"\nVolume Kubus \t\t: "<<c; break;
    case 2:
        cout<<"\n====Anda memilih bangun ruang Balok ===="; cout<<"\n\nMasukkan Panjang \t: ";
        cin>>x;
        cout<<"\nMasukkan Lebar \t\t: ";
        cin>>y;
        cout<<"\nMasukkan Tinggi \t: "; cin>>z;
        b= 2*(x*y+x*z+y*z);
        cout<<"\nLuas Penampang Balok \t: "<<b; c= x*y*z;
        cout<<"\nVolume Balok \t\t: "<<c; break;
    case 3:
        cout<<"\n====Anda memilih bangun ruang Kerucut===="; cout<<"\n\nMasukkan Diameter \t: ";
        cin>>x;
        cout<<"\nMasukkan Tinggi \t: "; cin>>z;
        d= x/2; //r
        e= sqrt((d*d)+(z*z)); //s b= (Phi*d)*(d+e); cout<<"\nLuas Penampang Kerucut \t: "<<b; c= (Phi*d*d*z)/3;
        cout<<"\nVolume Kerucut \t\t: "<<c; break;
    case 4:
        cout<<"\n====Anda memilih bangun ruang Tabung===="; cout<<"\n\nMasukkan Diameter \t: ";
        cin>>x; cout<<"\nMasukkan Tinggi \t: "; cin>>z;
        d= x/2; //r
        b= 2*(Phi*d*(d+z));
        cout<<"\nLuas Penampang Tabung \t: "<<b; c= Phi*d*d*z;
        cout<<"\nVolume Tabung \t\t: "<<c; break;
    case 5:
        cout<<"\n====Anda memilih bangun ruang Bola===="; cout<<"\n\nMasukkan Diameter \t: ";
        cin>>x;
        d= x/2; //r
        b= 4*(Phi*d*d);
        cout<<"\nLuas Penampang Bola \t: "<<b;
        c= ((Phi*d*d*d)*4)/3; cout<<"\nVolume Bola \t\t: "<<c; break;
    default:
        cout<<"Perintah salah."; break;
    }
}
