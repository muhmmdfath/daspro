#include<iostream> 
using namespace std; 
int KPK(int i, int j){ 
    int nilai, kpk; nilai=0;
    for(int x = 1; x<= j; x++){ 
        nilai = nilai + i;
    if(nilai % j == 0){ 
        nilai;
    }
    }
    return nilai;
}
int main(){
    int angka1,angka2,i,j;
    KPK(i,j);
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    cout << "Program Menghitung Keliparan Persekutuan Terkecil KPK\n\n\n";
    cout << "Masukan angka ke-1 : "; cin >> angka1;
    cout << "Masukan angka ke-2 : "; cin >>angka2;
    cout << "Kelipatan Persekutuan Terkecil antara "<< angka1
    << " dan " << angka2 << " = " << KPK(angka1,angka2) << endl;
}