#include <iostream>

#include "v4.hpp"

/*
    De la tastatura se intrduc elementele unui tabel de tip real,
    numarul maxim de elemente este 15. De determinat numarul de
    elemente negative si le afisati la ecran
    Exemplu: pentru sirul de numere: 15; -2.5; 3; -3; -25.52; 25.0
        Se va afisa:    3 elemente negative
                        -2.5
                        -3
                        -25.52
*/

V4::V4() {

    int n, s;
    double m;
    std::vector<double> numere;
    numere.reserve(15);

    std::cout << "Dati numarul de numere: ";
    std::cin >> n;
   
    s = 0;
    for(int i = 1; i <= n; i++) {
        std::cout << "Dati numarul " << i << ": ";
        std::cin >> m;
        numere.push_back(m);
        if(m < 0)
            s++;
    }

    std::cout << s << " elemente negative" << std::endl;
    for(int i = 0; i <= numere.size(); i++) {
        if(numere[i] < 0)
            std::cout << numere[i] << std::endl;
    }

}