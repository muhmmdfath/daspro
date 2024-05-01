#include <iostream>
using namespace std;
int a =6;
void lokal(){
    a+=10;
}
int main(){
    cout<<"penggunaan variable eksternal"<<endl;
    cout<<"\nNilai didalam fungsi main() : "<<a;
    lokal();
    cout<<"\nNilai setelah fungsi lokal() : ";
    cout<<a;
}
// void lokal(){
    // a+=10;
// }