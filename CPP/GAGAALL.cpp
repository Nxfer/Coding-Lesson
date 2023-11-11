#include <iostream>
#include <ctime>

int main() {

    int tebak1;
    int tebak2;
    int jawab;
    int main;

    srand (time(NULL));    
    jawab = (rand() % 100) + 1;

    std::cout << "tebak (1-100): ";
    std::cin >> tebak1;
    main++;
    
    do
    {    
        
        if(tebak1 > jawab){
            std::cout << "Terlalu tinggi \n";
            std::cout << "tebak (1-" << tebak1 << "): ";
            std::cin >> tebak2;
            main++;
        }

        if(tebak1 < jawab){
            std::cout << "Terlalu rendah \n";
            std::cout << "tebak (" << tebak1 << "-100): ";
            std::cin >> tebak2;
            main++;
        }

        if(tebak2 < jawab && tebak1 < jawab){
            std::cout << "Terlalu rendah \n";
            std::cout << "tebak (" << tebak2 << "-100): ";
            std::cin >> tebak2;
            main++;
        }

         if(tebak2 < jawab && tebak1 > jawab){
            std::cout << "Terlalu rendah \n";
            std::cout << "tebak (" << tebak1 <<"-"<< tebak2 <<": ";
            std::cin >> tebak2;
            main++;
        }

        if(tebak2 > jawab && tebak1 < jawab ){
            std::cout << "Terlalu tinggi \n";
            std::cout << "tebak (" << tebak1 << "-" << tebak2 << "): ";
            std::cin >> tebak2;
            main++;
        }
        

        else{
            std::cout << "Kamu Benar! \n";
            std::cout << "Jumlah Percobaan: " << main << "\n";
            return 0;
        }
    
    } while (tebak1 != jawab && tebak2 != jawab);

    return 0;

}
    
    





