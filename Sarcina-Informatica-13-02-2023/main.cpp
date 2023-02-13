#include <iostream>

int main() {
    int n;

    std::cout << "Dati un numar de 4 cifre: ";
    std::cin >> n;
    
    if(n>0 && n<=2359) {
        std::string hh;
        std::string mm;

        if(n % 100 >= 60) n = (n - 60) + 100;

        if(n / 100 < 10) hh = "0" + std::to_string(n / 100);
        else hh = std::to_string(n / 100);

        if(n % 100 < 10) mm = "0" + std::to_string(n % 100);
        else mm = std::to_string(n % 100);

        std::cout << hh << ":" << mm << std::endl;
    } else {
        std::cout << "Valoare inadmisibila" << std::endl;
    }
}