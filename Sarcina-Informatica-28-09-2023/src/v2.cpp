#include <iostream>

#include "v2.hpp"

/*
    Intr-un sir de numere intregi (1 <= n <= 20), sa se 
    afiseze suma elementelor de pe poziitile pare.
    Exemplu:
    Date de intrare: n=6 numere 3; 1; 5; 4; 6; 7
    Date de iesire: spar=12
*/

V2::V2() {
    int n, m, spar = 0;
    std::vector<int> numere;
    numere.reserve(20);

    std::cout << "Dati numarul de numere: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        std::cout << "Dati numarul " << i << ": ";
        std::cin >> m;
        numere.push_back(m);
    }

    for(int i = 0; i <= numere.size(); i++) {
        if(numere[i] % 2 == 0) 
            spar = spar + numere[i];
    }

    std::cout << "spar=" << spar << std::endl;
}