#include <iostream> 
#include <conio.h> 
using namespace std; 
main(){
    cout<<" Nama	: Muhammad Fatih 'Ad-Li \n"; 
    cout<<" NIM	: 32602200017\n";
    int i , j , k, l ; 
    cout<<"Masukan nilai : "; 
    cin>>l;
    for(i=l;i>=0;i--){ 
        for(j=i;j>=0;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=l-i;k++){ 
            cout<<" "<<k;
        }
            for(k=1;k<l-i;k++){ 
                cout<<" ";
        }
        cout<<endl;
    }
    getch();
}
