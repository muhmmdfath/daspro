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
    cout << "Masukkan jumlah gelas: ";
    cin >> N;

    vector<int> volumes(N);
    int totalVolume = 0;
    for (int i = 0; i < N; ++i) {
        cout << "Masukkan volume gelas " << i + 1 << ": ";
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
        cout << "Volume gelas sudah sama rata." << endl;
    } else {
        int maxDiff = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int diff = abs(volumes[i] - volumes[j]);
                maxDiff = gcd(maxDiff, diff); // Menggunakan fungsi gcd untuk mencari nilai GCD
            }
        }

        if (maxDiff == 1) {
            cout << "Tidak memungkinkan untuk membagi volume agar sama rata." << endl;
        } else {
            cout << "Langkah-langkah pembagian volume agar sama rata:" << endl;
            for (int i = 0; i < N; ++i) {
                int diff = targetVolume - volumes[i];
                cout << "Gelas " << i + 1 << ": ";
                if (diff < 0) {
                    cout << "tuang ke gelas " << i + 2;
                } else if (diff > 0) {
                    cout << "tuang ke gelas " << i + 1;
                } else {
                    cout << "volume sudah sama";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
