#include<iostream> 
using namespace std; 
int proses(int n); 
main(){
    int n;
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    cout<<"Menampilkan deret bilangan ganjil"<<endl; cout<<"Kurang dari atau sama dengan n"<<endl; cout<<"Masukan nilai n = ";
    cin>>n; 
    proses(n);
}
int proses(int n){ 
    if(n%2 !=1)n--;
    for ( ;n>=0; n-=2) 
    cout<<n<<" "; 
    return (n);
}
