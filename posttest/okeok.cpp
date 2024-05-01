#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void papan_menu()
{
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

void struk(int a, int b, int c, double e)
{
    string diskon;
    int uang;
    int total = c * b;

    cout << "======================================\n";
    cout << "||           Struk Belanja          ||\n";
    cout << "||            ABC CHICKEN           ||\n";
    cout << "======================================\n";
    cout << "|| Paket yang dipilih " << setw(4) << ": " << a << setw(11) << "||" << endl;
    cout << "|| Jumlah Pesanan " << setw(8) << ": " << b << setw(10) << "||" << endl;
    cout << "|| Total Harga " << setw(11) << ": " << "Rp " << total << setw(3) << "||" << endl;
    cout << "|| Diskon " << setw(16) << ": " << (e * 100) << "%" << setw(9) << "||" << endl;
    cout << "|| Harga setelah Diskon : " << "Rp " << c << setw(3) << "||" << endl;
    cout << "======================================\n";

    cout << "  Uang " << setw(4) << ": ";
    cin >> uang;
    int kembalian = uang - c;
    cout << "======================================\n";
    cout << "|| Jumlah uang " << setw(4) << ": " << uang << setw(13) << "||" << endl;
    cout << "|| Kembalian " << setw(6) << ": " << kembalian << setw(14) << "||" << endl;
    cout << "======================================\n";
}

int main()
{
    papan_menu();

    int paket, pesan;
    cout << "Masukkan paket yang ingin dipesan: ";
    cin >> paket;

    if (paket < 1 || paket > 4)
    {
        cout << "Paket tidak tersedia!" << endl;
        return 0;
    }

    cout << "Jumlah Pesan: ";
    cin >> pesan;

    int harga[] = {15000, 13000, 10000, 16000};
    double diskon[] = {0.0, 0.02, 0.05, 0.1};

    double harga_setdiskon = harga[paket - 1] * pesan;
    if (harga_setdiskon >= 50000 && harga_setdiskon < 100000)
        harga_setdiskon -= harga_setdiskon * diskon[1];
    else if (harga_setdiskon >= 100000 && harga_setdiskon < 500000)
        harga_setdiskon -= harga_setdiskon * diskon[2];
    else if (harga_setdiskon >= 500000)
        harga_setdiskon -= harga_setdiskon * diskon[3];

    struk(paket, pesan, harga_setdiskon, diskon[paket]);

    return 0;
}
