#include <iostream>

int main() {
    //const : agar variable tidak dapat diubah

    const double PI = 3.14;
    double jari = 5;
    double jumlah = PI * jari * jari;

    std::cout << "hasil dari keliling lingkaran ini adalah: " << jumlah << " cm";
}