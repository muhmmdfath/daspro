#include <iostream>
using namespace std;

int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017";
    int nim, nilai_uts, nilai_uas, nilai_tugas;
    string nama;
    cout<<"\n\n\tLAPORAN NILAI MAHASISWA";
    cout<<"\n\n\t=========================";
    cout<<"\n\n\tMasukan Nama : ";
    cin>>nama;
    cout<<"\n\n\tMasukan NIM : ";
    cin>>nim;
    cout<<"\n\n\tMasukan Nilai UTS : ";
    cin>>nilai_uts;
    cout<<"\n\n\tMasukan Nilai UAS : ";
    cin>>nilai_uas;
    cout<<"\n\n\tMasukan Nilai TUGAS : ";
    cin>>nilai_tugas;
    cout<<"\n";
    int nilai_akhir=(0.3*nilai_uts)+(0.5*nilai_uas)+(0.2*nilai_tugas);
    if(nilai_akhir>=90 && nilai_akhir<=100){
        cout<<"\n====================================================";
        cout<<"\nNama : "<<nama;
        cout<<"\nNim : "<<nim;
        cout<<"\nNilai Akhir : "<<nilai_akhir;
        cout<<"\t\tNilai Huruf : A";
        cout<<"\n====================================================";
        cout<<"\nKet: Lulus";
    }else if(nilai_akhir>=70 && nilai_akhir<=89){
        cout<<"\n====================================================";
        cout<<"\nNama : "<<nama;
        cout<<"\nNim : "<<nim;
        cout<<"\nNilai Akhir : "<<nilai_akhir;
        cout<<"\t\tNilai Huruf : B";
        cout<<"\n====================================================";
        cout<<"\nKet: Lulus";
    }else if(nilai_akhir>=60 && nilai_akhir<=69){
        cout<<"\n====================================================";
        cout<<"\nNama : "<<nama;
        cout<<"\nNim : "<<nim;
        cout<<"\nNilai Akhir : "<<nilai_akhir;
        cout<<"\t\tNilai Huruf : C";
        cout<<"\n====================================================";
        cout<<"\nKet: Lulus";
    }else if(nilai_akhir>=50 && nilai_akhir<=59){
        cout<<"\n====================================================";
        cout<<"\nNama : "<<nama;
        cout<<"\nNim : "<<nim;
        cout<<"\nNilai Akhir : "<<nilai_akhir;
        cout<<"\t\tNilai Huruf : D";
        cout<<"\n====================================================";
        cout<<"\nKet: Mengulang";
    }else{
        cout<<"\n====================================================";
        cout<<"\nNama : "<<nama;
        cout<<"\nNim : "<<nim;
        cout<<"\nNilai Akhir : "<<nilai_akhir;
        cout<<"\t\tNilai Huruf : E";
        cout<<"\n====================================================";
        cout<<"\nKet: Mengulang";
    }
}