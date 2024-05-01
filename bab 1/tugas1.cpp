#include <iostream>

using namespace std;

main(){
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"NIM : 32602200017\n";
    double rupiah, dollar, yen, poundsterling, euro;
    dollar = 11400;
    yen = 115;
    poundsterling = 18400;
    euro = 15400;
    cout<<"====Program mengkonversi rupiah ke dollar, yen, poundstreling, dan euro===\n";
    cout <<"Masukkan nilai rupiah : ";
    cin>>rupiah;
    cout<< endl;
    cout<<"========Hasil Konversi=======\n";

    cout<<rupiah<<" Rupiah = "<<rupiah/dollar<<" Dollar\n";
    cout<<rupiah<<" Rupiah = "<<rupiah/yen<<" yen\n";
    cout<<rupiah<<" Rupiah = "<<rupiah/poundsterling<<" Poundsterling\n";
    cout<<rupiah<<" Rupiah = "<<rupiah/euro<<" Euro\n";
    cout<<"=====================================";
    return 0;
}