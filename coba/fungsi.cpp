#include <iostream>
using namespace std;
float luas (int r){
    return(3.14*r*r);
}

float kelli(int r){
    return(3.14*2*r);
}

main(){
    int j;
    cout<<"masukkan jari jari : ";cin>>j;
    cout<<"luas lingkaran : "<<luas(j)<<endl;
    cout<<"kelliling lingkaran : "<<kelli(j);
}