#include <iostream>
#include <vector>

#include "Menu.h"
#include "Ghici.h"

void ghici() {
    int n, m, min;

    std::vector<int> mins;

    std::cout << "Dati un numar de la 1 la 10: ";
    std::cin >> n;
    std::cout << std::endl;

    for(int i = 1; i <= n; i++) {
        min = 9;
        std::cout << min << std::endl;
        std::cout << "Dati un numar de 4 cifre: ";
        std::cin >> m;

        //!std::cout << (m % 10) << " " << (m / 10) % 10 << " " << (m / 100) % 10 << " " << (m / 1000) % 10 << std::endl;

        if(m / 10 <= min) min = m / 10;

        if((m / 10) % 10 <= min) min = (m / 10) % 10;

        if(std::to_string(m).length() >= 3)
            if((m / 100) % 10 <= min) min = (m / 100) % 10;
        
        if(std::to_string(m).length() == 4)
            if((m / 1000) % 10 <= min) min = (m / 1000) % 10;
            
        mins.push_back(min);
    }

    for(int i : mins) 
        std::cout << i << ",";

    std::cin.ignore();
    std::cout << "\nApasa tasta [Enter] pentru a continua... ";
    std::cin.get();
    system("clear");
    menu();
}