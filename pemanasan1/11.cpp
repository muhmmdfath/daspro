#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;

    vector<int> volumes(N);
    int totalVolume = 0;
    for (int i = 0; i < N; ++i) {
        cin >> volumes[i];
        totalVolume += volumes[i];
    }

    int targetVolume = totalVolume / N;
    bool allSameVolume = true;
    for (int i = 0; i < N; ++i) {
        if (volumes[i] != targetVolume) {
            allSameVolume = false;
            break;
        }
    }

    if (allSameVolume) {
        cout << "SESUAI" << endl;
    } else {
        int maxDiff = 0;
        for (int i = 0; i < N; ++i) {
            int diff = abs(targetVolume - volumes[i]);
            maxDiff = gcd(maxDiff, diff); // Menggunakan fungsi gcd untuk mencari nilai GCD
        }

        if (maxDiff == 1) {
            cout << "TIDAK SESUAI" << endl;
        } else {
            cout << maxDiff << " ";
            for (int i = 0; i < N; ++i) {
                int diff =volumes[i]- maxDiff;
                cout << i + 1 << " ";
                if (diff < 0) {
                    cout << i + 2;
                } else {
                    cout << i;
                }
            }
        }
    }

    return 0;
}
