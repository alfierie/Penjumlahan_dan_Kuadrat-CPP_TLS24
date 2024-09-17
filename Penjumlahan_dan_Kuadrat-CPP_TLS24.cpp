#include <iostream>
#include <cmath>

int main() {
    int num1, num2, sum;

    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    // Penjumlahan
    sum = num1 + num2;

    std::cout << "Hasil penjumlahan: " << sum << std::endl;

    // Pernyataan kondisional untuk memeriksa apakah hasil penjumlahan positif
    if (sum > 0) {
        std::cout << "Kuadrat dari hasil penjumlahan: " << pow(sum, 2) << std::endl;
    } else {
        std::cout << "Hasil penjumlahan nol atau negatif, tidak ada perhitungan kuadrat." << std::endl;
    }

    return 0;
}