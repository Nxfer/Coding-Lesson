#include <iostream>
#include <ctime>
int main() {

    srand (time(0));
    int Randnum = rand() % 5 + 1;

    switch (Randnum)
    {
    case 1: std::cout << "Kamu menang baju! \n";
        break;

    case 2: std::cout << "Kamu menang HP! \n";
        break;
    
    case 3: std::cout << "Kamu menang Mobil! \n";
        break;
    
    case 4: std::cout << "Kamu menang Motor! \n";
        break;

    case 5: std::cout << "Kamu menang Laptop! \n";
        break;
    }

return 0;
}