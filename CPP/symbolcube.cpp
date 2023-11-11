#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int baris;
    int kolom;
    char simbol;
    HANDLE  hConsole;
	int k;

    cout << "Berapa baris?: ";
    cin >> baris;

    cout << "Berapa kolom?: ";
    cin >> kolom;

    cout << "pake simbol apa?: ";
    cin >> simbol;

    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << simbol;
        }

    cout << std::endl;

    }
}

