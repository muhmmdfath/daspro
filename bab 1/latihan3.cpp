#include <iostream>
using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"NIM : 32602200017\n";
    float q1, q2, q3, qtotal, qrata, uts, uas, total;
    cout<<"==============KUIS==============\n";
    cout<<"Masukkan nilai kuis pertama\t: ";
    cin>>q1;
    cout<<"\n";
    cout<<"Masukkan nilai kuis kedua\t: ";
    cin>>q2;
    cout<<"\n";
    cout<<"Masukkan nilai kuis ketiga\t: ";
    cin>>q3;
    cout<<"\n===============UTS================\n";
    cout<<"Masukkan nilai UTS : ";
    cin>>uts;
    cout<<"\n=================UAS=================\n";
    cout<<"masukkan nilai UAS : ";
    cin>>uas;
    cout<<"\n";
    qtotal=(q1+q2+q3);
    qrata=qtotal/3;
    total=qrata+uts+uas;

    cout<<"Total kuis\t: "<<qtotal;
    cout<<"\nrata rata kuis\t: "<<qrata;
    cout<<"\nUTS\t\t: "<<uts;
    cout<<"\nUAS\t\t: "<<uas;
    cout<<"\n..................................\n";
    cout<<"\nNilai Akhir\t: "<<total;
}