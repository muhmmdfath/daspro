#include <iostream>
#include <string.h>
using namespace std;
char comment(char ket[30], int n){
    int a=n%2;
    if(a==1){
        strcpy(ket, "====Bilangan Ganjil====");
    }else{
        strcpy(ket, "===Bilangan Genap===");
    }
}
int main(){
    char lagi, c[30];
    int i;
    atas:
    {
        cout<<"Masukkan Nilai : "; cin>>i;
        comment(c, i);
        cout<<c;
        cout<<"\nIngin input lagi (y/n)? : "; cin>>lagi;
    }
    if(lagi=='y'||lagi=='Y')
        goto atas;
    else
        return 0;
}