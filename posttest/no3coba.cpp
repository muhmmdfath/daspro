#include <iostream>
#include <iomanip>

using namespace std;
const int harga[] = {
    15000,
    13000,
    10000,
    16000
};

void papan_menu()
{
    cout << "==============================\n";
    cout << "||  PAPAN MENU ABC CHICKEN  ||\n";
    cout << "==============================\n";
    cout << "==============================\n";
    cout << "||  No  ||    Paket Menu    ||\n";
    cout << "==============================\n";

    string menu[] = {
        "Dada Lembut, Nasi",
        "Paha Bawah, Nasi ",
        "Sayap, Nasi \t    ",
        "Paha Atas, Nasi  "
    };

    for (int i = 0; i < 4; i++)
    {
        cout << "||   " << (i + 1) << "  || " << menu[i] << "||\n";
        cout << "||      ||     + Es Teh     ||\n";
        cout << "------------------------------\n";
        cout << "||       Rp " << setw(7) << harga[i] << "         ||\n";
        cout << "------------------------------\n";
    }

    cout << "==============================\n";
}

double struk(int a, int b, double e)
{
    int total = harga[a - 1] * b;
    double diskon = 0.0;

    if (total >= 50'000 && total < 100'000)
    {
        diskon = 0.02;
    }
    else if (total >= 100'000 && total < 500'000)
    {
        diskon = 0.05;
    }
    else if (total >= 500'000)
    {
        diskon = 0.10;
    }
    double jumlah_diskon = total * diskon;
    double harga_setdiskon = total - jumlah_diskon;

    cout << "======================================\n";
    cout << "||           Struk Belanja          ||\n";
    cout << "||            ABC CHICKEN           ||\n";
    cout << "======================================\n";
    cout << "|| Paket yang dipilih " << setw(4) << ": " << a << setw(11) << "||" << endl;
    cout << "|| Jumlah Pesanan " << setw(8) << ": " << b << setw(10) << "||" << endl;
    cout << "|| Total Harga " << setw(11) << ": " << "Rp " << total << setw(3) << "||" << endl;
    cout << "|| Diskon " << setw(16) << ": " << (diskon * 100) << "%" << setw(9) << "||" << endl;
    cout << "|| Harga setelah Diskon : " << "Rp " << harga_setdiskon << setw(3) << "||" << endl;
    cout << "======================================\n";

    int uang;
    cout << "Uang " << setw(6) << ": Rp ";
    cin >> uang;
    int kembalian = uang - harga_setdiskon;
    cout << "======================================\n";
    cout << "|| Jumlah Uang " << setw(4) << ": Rp " << uang << setw(12) << "||" << endl;
    cout << "|| Kembalian " << setw(7) << ": Rp " << kembalian << setw(13) << "||" << endl;
    cout << "======================================\n";

    return harga_setdiskon;
}

int main()
{
    cout<<"Nama : Muhammad Fatih 'Ad-Li\n";
    cout<<"Nim : 32602200017\n\n";
    papan_menu();

    int paket;
    cout << "Masukkan paket yang ingin dipesan : ";
    cin >> paket;

    if (paket < 1 || paket > 4)
    {
        cout << "Paket tidak tersedia!" << endl;
        return 0;
    }

    int pesan;
    cout << "Jumlah Pesan ? ";
    cin >> pesan;

    double harga_setdiskon = struk(paket, pesan, 0.0);

    return 0;
}
