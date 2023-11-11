#include <iostream>

using std::cout;
using std::cin;

int main() {
    std::string nama;
    cout << "Masukkan Namamu: ";
    std::getline(cin, nama);

    if(nama.empty() || nama.length() < 3 || nama.length() > 10){
        cout << "genah, kesempatanmu 3" << std::endl;
        cout << "Masukkan namamu: ";
        std::getline(cin, nama);
    }

    if(nama.empty() || nama.length() < 3 || nama.length() > 10){
        cout << "seng temen, kesempatanmu 2" << std::endl;
        cout << "Masukkan namamu: ";
        std::getline(cin, nama);
    }

    if(nama.empty() || nama.length() < 3 || nama.length() > 10){
        cout << "ayota, kesempatan terakhir" << std::endl;
        cout << "Masukkan namamu: ";
        std::getline(cin, nama);
    }

    if(nama.empty() || nama.length() < 3 || nama.length() > 10){
    cout << "mboh wes" << std::endl;
    return 0;
    }

    cout << "Halo " << nama;

    return 0;

}