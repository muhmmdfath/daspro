#include <iostream>
using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li";
    cout<<"\nNim : 32602200017";
    int n, usia, umur=19;
    cout<<"\t\t\t\tTebakkalah Usiaku";
    cout<<"\n\n\nBerapakah Usiaku?";
    cin>>usia;
    if(usia>umur){
        cout<<"\n\tTerlalu tua, silahkan tebak lagi\n\n";
    }else if(usia<umur){
        cout<<"\n\tterlalu muda silahkan tebak lagi\n\n";
    }else{
        cout<<"\n\tTebakan Anda benar";
    }
}