#include <iostream>

void habede(std::string nama, int umur);

int main() {

std::string nama = "Gading";
int umur = 16;

habede(nama,umur);
habede(nama,umur);
habede(nama,umur);
return 0;

}

void habede(std::string nama, int umur){
    std::cout << "Selamat Ulang Tahun "<< nama << '\n';
    std::cout << "Selamat Ulang Tahun "<< nama << '\n';
    std::cout << "Selamat Ulang Tahun "<< nama << '\n';
    std::cout << "Kamu berumur "<< umur << " sekarang \n\n";
}