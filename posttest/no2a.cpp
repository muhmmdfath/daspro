#include <iostream>
using namespace std;

int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"Nim : 32602200017\n\n";
    cout<<"==========PROGRAM BILANGAN GANJIL==========\n";
    int n=0;
    for(int i=1;i<=90;i++){
        if(i%2 != 0){
            cout<<i<<" ";
            n++;
        }
    }
    cout<<"\njumlah ganjil dari 1-90 adalah: "<<n;
}