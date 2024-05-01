#include <iostream>
using namespace std;
int main() {
    int N;
    string A, B;
    cin >> N >> A >> B;
    int counter=0, result=0;
    for(int i=0; i<N; i++){
        if(A[i]>B[i]){
            counter++;
        }else if(A[i]<B[i]){
            if(counter>0){
                result++;
            }
            counter=0;
        }
        if(i==N-1 && counter>0){
        result++;
        }
    }
    cout<<result<<endl;
    return 0;
}