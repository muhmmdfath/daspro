#include<iostream> 
using namespace std; 
int FPB(int a, int b){ 
    int r = a % b;
    while( r != 0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}
int main(){
    int x, y;
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    cout<<"Program menghitung FPB\n"; 
    cout<<"Angka ke-1 : ";
    cin>> x;
    cout<<"Angka ke-2 : "; cin>> y;
    cout<<"\nFaktor persekutuan Terbesar dari "<< x << " dan "
    << y << " = " <<FPB(x, y)<<endl;
    return 0;
}
