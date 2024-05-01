#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int papan_menu(){
    cout<<"==============================\n";
    cout<<"||  PAPAN MENU ABC CHICKEN  ||\n";
    cout<<"==============================\n";
    cout<<"==============================\n";
    cout<<"||  No  ||    Paket Menu    ||\n";
    cout<<"==============================\n";
    cout<<"||   1  || Dada Lembut,Nasi ||\n";
    cout<<"||      ||     + Es Teh     ||\n";
    cout<<"------------------------------\n";
    cout<<"||       Rp 15.000          ||\n";
    cout<<"------------------------------\n";
    cout<<"||   2  || Paha Bawah, Nasi ||\n";
    cout<<"||      ||     + Es Teh     ||\n";
    cout<<"------------------------------\n";
    cout<<"||       Rp 13.000          ||\n";
    cout<<"------------------------------\n";
    cout<<"||   3  ||   Sayap, Nasi    ||\n";
    cout<<"||      ||     + Es Teh     ||\n";
    cout<<"------------------------------\n";
    cout<<"||       Rp 10.000          ||\n";
    cout<<"------------------------------\n";
    cout<<"||   4  ||  Paha Atas, Nasi ||\n";
    cout<<"||      ||     + Es Teh     ||\n";
    cout<<"------------------------------\n";
    cout<<"||       Rp 16.000          ||\n";
    cout<<"==============================\n";
}
int struk(int a, int b, int c, int d, double e){
    string diskon;
    int uang;
    cout<<"======================================\n";
    cout<<"||           Struk Belanja          ||\n";
    cout<<"||            ABC CHICKEN           ||\n";
    cout<<"======================================\n";
    cout<<"|| Paket yang dipilih "<<setw(4)<<": "<<a<<setw(11)<<"||"<<endl;
    cout<<"|| jumlah Pesanan "<<setw(8)<<": "<<b<<setw(10)<<"||"<<endl;
    cout<<"|| Total Harga "<<setw(11)<<": "<<"Rp "<<d<<setw(3)<<"||"<<endl;
    cout<<"|| Diskon "<<setw(16)<<": "<<(e*100)<<"%"<<setw(9)<<"||"<<endl;
    cout<<"|| Harga setelah Diskon : "<<"Rp "<<c<<setw(3)<<"||"<<endl;
    cout<<"======================================\n";
    cout<<"  uang "<<setw(4)<<": ";cin>>uang;
    int kembalian=uang-c;
    cout<<"======================================\n";
    cout<<"|| jumlah uang "<<setw(4)<<": "<<uang<<setw(13)<<"||"<<endl;
    cout<<"|| kembalian "<<setw(6)<<": "<<kembalian<<setw(14)<<"||"<<endl;
    cout<<"======================================\n";
}

int main(){
    int paket;
    int pesan;
    double total;
    papan_menu();
    cout<<"Masukkan paket yang ingin dipesan : ";
    cin>>paket;
    cout<<"Jumlah Pesan ? ";
    cin>>pesan;
    double diskon=0.0;
    if(paket==1){
        total=15000*pesan;
    }else if(paket==2){
        total=13000*pesan;
    }else if(paket==3){
        total=10000*pesan;
    }else if(paket==4){
        total=16000*pesan;
    }else{
        cout<<"Tidak Tersedia!";
    }
     if (total >= 50'000 && total < 100'000) {
        diskon = 0.02;
    } else if (total > 100'000 && total < 500'000) {
        diskon = 0.05;
    } else if (total >= 500'000) {
        diskon = 0.10;
    }
    double jumlah_diskon=total*diskon;
    double harga_setdiskon=total-jumlah_diskon;
    struk(paket, pesan, harga_setdiskon, total, diskon);
}