#include <iostream>
#include <string.h>
using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"Nim : 32602200017\n\n";
    char str1[10];
    char str2[10]="Hello";
    strcpy(str1, str2);
    cout<<"Setelah dicopy: "<<str1<<endl;
}