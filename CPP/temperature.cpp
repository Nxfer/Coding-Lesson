#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
int main() {

double temp;
char type;

cout << "*************** TEMPERATURE ***************\n";
cout << "F = Farenheit" << std::endl;
cout << "C = Celcius" << std::endl;
cout << "Enter the temperature type: ";
cin >> type;


if (type == 'C' || type == 'c')
    {
    cout << "enter the Celcius temperature: ";
    cin >> temp;

    temp = (1.8 * temp) + 32;
    cout << "the temperature in Farenheit is: " << temp << "F";
    }
else if (type == 'F' || type == 'f')
    {
    cout << "enter the Farenheit temperature: ";
    cin >> temp;

    temp = (temp - 32) / 1.8;
    cout << "the temperature in Celcius is: " << temp << "C";
    }
else{
    cout << "Masukkan yang benar!";
    
}

return 0;

}