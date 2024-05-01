#include <iostream>

int main() {
    int jumlah_ganjil = 0;

    for (int i = 1; i <= 90; i++) {
        if (i % 2 != 0) {
            jumlah_ganjil++;
        }
    }

    std::cout << "Jumlah bilangan ganjil dari 1 sampai 90 adalah: " << jumlah_ganjil << std::endl;

    return 0;
}
