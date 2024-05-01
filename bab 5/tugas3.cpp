#include <iostream> 
using namespace std; 
int makanan(int a){ 
    int x;
    if (a==1)
        cout<<"Mie Ayam\t\t\t Rp.7000"; 
    else if(a==2)
        cout<<"Bakso Rudal\t\t\t Rp.9000"; 
    else
        cout<<"Nasi Goreng\t\t\t Rp.7000"; 
    return x;
}
int minuman(int b){ 
    int y;
    if (b==1)
    cout<<"Es Teh\t\t\t Rp.2000";
    else if(b==2)
    cout<<"Es Jeruk\t\t\t Rp.3000"; 
    else
    cout<<"Es Susu\t\t\t Rp.2500"; 
    return y;
}
int total(int a, int b){ int c;
    if(a==1&&b==1) c=9000;
    else if(a==1&&b==2) c=10000;
    else if(a==1&&b==3) c=9500;
    else if (a==2&&b==1) c=11000;
    else if(a==2&&b==2) c=9000;
    else if(a==2&&b==3) c=11500;
    else if(a==3&&b==1) c=10000;
    else if(a==3&&b==2) c=11000;
    else c =10500; return c;
}
main(){
    int x,y,c,a,b,bayar,total_semua; 
    c=total(x,y);
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    cout<<"	\n";
    cout<<"\t\t\tWARUNG MAKAN AWAN\n";
    cout<<"Pilihan Makanan\n\n"; 
    cout<<"Mie Ayam\t\t\t Rp.7000\n"; 
    cout<<"Bakso Rudal\t\t\t Rp.9000\n"; 
    cout<<"Nasi Goreng\t\t\t Rp.8000\n\n"; 
    cout<<"Pilihan Minuman\n\n";
    cout<<"Es Teh\t\t\t\t Rp.2000\n"; 
    cout<<"Es Jeruk\t\t\t Rp.3000\n"; 
    cout<<"Es Susu\t\t\t\t Rp.2500\n\n"; 
    cout<<"Makanan yang anda pilih : "; cin>>x;
    cout<<"Makanan yang anda pilih : " ; makanan(x);
    cout<<"\n";
    cout<<"Minuman yang anda pilih : "; cin>>y;
    cout<<"Minuman yang anda pilih : " ; minuman(y);
    cout<<"\n";
    cout<<"Total Semua\t\t\t\t\t\t Rp."<<total (x,y)<<"\n"; cout<<"Pembayaran\t\t\t\t\t\t Rp.";
    cin>>bayar; cout<<"\n";
    cout<<"Kembalian\t\t\t\t\t\t Rp."<<bayar-total(x,y)<<"\n"; 
}
