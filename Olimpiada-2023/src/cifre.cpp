#include <iostream>

#include "Menu.h"
#include "Cifre.h"

void cifre() {
    int n, m, min;

    min = 9999;

    std::cout << "Dati un numar de la 1 la 10: ";
    std::cin >> n;
    std::cout << std::endl;

    for(int i = 1; i <= n; i++) {
        std::cout << "Dati un numar de 4 cifre: ";
        std::cin >> m;
        if(m <= min) min = m;
    }

    std::cout << std::endl;
    std::cout << "Cel mai mic numar introdus este: " << min << std::endl;

    std::cin.ignore();
    std::cout << "\nApasa tasta [Enter] pentru a continua... ";
    std::cin.get();
    system("clear");
    menu();
}