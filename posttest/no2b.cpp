#include <iostream>
using namespace std;

int main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"Nim : 32602200017\n\n";
    cout<<"==========PROGRAM BILANGAN GENAP==========\n";
    int n=0;
    int i=1;
    while(i<=100){
        if(i%2 == 0){
            cout<<i<<" ";
            n++;
        }
        i++;
    }
    cout<<"\njumlah genap dari 1-100 adalah: "<<n;
}