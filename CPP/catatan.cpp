#include <iostream>
#include <ctime>

int main() {
    /*
    //VARIABEL
    //integer
    int x = 3;
    int y = 5;
    int add = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << add << '\n';

    //boolean
    bool makan = true;
    bool main = false;

    std::cout << "makan: " << makan << '\n';
    std::cout << "main: " << main << '\n';

    //double
    double emas = 13.5;

    std::cout << "jumlah emas anda: " << emas << " gram" << std::endl; 

    //string
    std::string nama_depan = "Soerya";
    std::string nama_belakang = "Gading";

    std::cout << "Halo " + nama_depan + " " + nama_belakang;
    ==============================================================================================
    ==============================================================================================
    
    //CONST : agar variable tidak dapat diubah

    const double PI = 3.14;
    double jari = 5;
    double jumlah = PI * jari * jari;

    std::cout << "hasil dari keliling lingkaran ini adalah: " << jumlah << " cm";

    ==============================================================================================
    ==============================================================================================
    /* Namespace  = provides a solution for preventing name conflicts
             in large projects. Each entity needs a unique name.
             A namespace allows for identically named entities
             as long as the namespaces are different.
    

    namespace satu{
        int x = 1;
    }

    namespace dua{
        int x = 2;
    }

    int main() {
        using std::cout;
        using namespace satu;

        cout << dua::x;
    
    


    return 0;
    }
    ==============================================================================================
    ==============================================================================================
   //USING
    using text_t = std::string;
    using number_t = int;
    using std::cout;
    int main() {
    text_t nama = "Soerya";
    number_t umur = 21;

    cout << "halo " << nama << " " << umur;
    ==============================================================================================
    ==============================================================================================
        /*
    ARITHMETIC OPERATOR = return the result of a specific
                            arithmetic operation (+ - * /)
    

   double uang = 20;

    uang = uang + 1;
    uang+=1;
    uang++

    uang = uang - 1;
    uang-=1;
    uang--

    uang = uang * 2;
    uang*=2
    
    uang = uang / 2;
    uang/=2;


    std::cout << uang;  

    ==============================================================================================
    ==============================================================================================
    
    //IMPLICIT AND EXPLICIT

    double emas = 3.23;

    std::cout << (int)emas;

    ==============================================================================================
    ==============================================================================================
        

   //CIN DAN COUT
    std::string nama;

    std::cout << "Namamu? : ";
    std::getline(std::cin, nama);

    std::cout << "Kocak " << nama << std::endl;

    ==============================================================================================
    ==============================================================================================

    //MATH FUNCTION
    https://www.cplusplus.com/reference/cmath/

    double x = 2.54;
    double y = 3;
    double z;

    z = std::max(x,y)
    z = std::min(x,y)
    z = pow(2,4)
    z = sqrt(9)
    z = abs(-3)
    z = round(x)
    z = ceil (x)
    z = floor (x)

    ==============================================================================================
    ==============================================================================================
    TERNARY (?) = sama seperti if namun lebih pendek

    int sample;
    std::cout << "Masukkan Angka: ";
    std::cin >> sample;
    sample % 2 ? std::cout << "Ganjil" : std::cout << "Genap";
        
    ==============================================================================================
    ==============================================================================================
    WHILE LOOP
    
    std::string nama;
    while(nama.empty()){
    std::cout << "Masukkan Namamu: ";
    std::getline(std::cin, nama);
        if(nama.empty()){
        std::cout << "genah" << std::endl;
        }

    }

    std::cout << "Haloo " << nama;

    ==============================================================================================
    ==============================================================================================

        while(1==1){
        std::cout << "TOLONG AKU TERJEBAK";

    }

    ==============================================================================================
    ==============================================================================================
    RANDOM NUMBER GENERATOR
*/
    srand(time(NULL));

    std::cout << "Your three dices result isss \n";

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 10) + 1;
    int num3 = (rand() % 20) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    
    
    
    
    
    








        
















return 0;
}