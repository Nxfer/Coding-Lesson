#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {
    double a;
    double b;
    double c;
    char dicari;

    cout << "Bagian mana yang dicari? (A/B/C): ";
    cin >> dicari;
    switch (dicari)
    {
    case 'A':
        cout << "Masukkan nilai B: ";
        cin >> b;

        cout << "Masukkan nilai C: ";
        cin >> c;

        a = sqrt(pow(c, 2) - pow(b, 2));
        cout << "Nilai A adalah : " << a << " cm";
        break;
    
    case 'B':
        cout << "Masukkan nilai A: ";
        cin >> a;

        cout << "Masukkan nilai C: ";
        cin >> c;

        b = sqrt(pow(c, 2) - pow(a, 2));
        cout << "Nilai B adalah : " << b << " cm";
        break;

    case 'C':
        cout << "Masukkan nilai A: ";
        cin >> a;

        cout << "Masukkan nilai B: ";
        cin >> b;

        c = sqrt(pow(a, 2) + pow(b, 2));
        cout << "Nilai C adalah : " << c << " cm";
        break;

        default:
        cout << "diomongi A/B/C kok ngeyel";
            break;
    }
    



}            
