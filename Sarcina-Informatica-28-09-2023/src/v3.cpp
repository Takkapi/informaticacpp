#include <iostream>

#include "v3.hpp"

/*
    De la tastatura se introduc elementele unui tabel de tip real, 
    numärul maxim de elemente este 20. De determinat numãrul de 
    elemente pozitive si le afisati la ecran.
    Exemplu: pentru sirul de numere: 15; -2.5; 3; -3; -25.52; 25.0
        Se va afisa:    3 elemente pozitive
                        15
                        3
                        25.0
*/

V3::V3() {
    int n, s;
    double m;
    std::vector<double> numere;
    numere.reserve(20);

    std::cout << "Dati numarul de numere: ";
    std::cin >> n;

    s = 0;
    for(int i = 1; i <= n; i++) {
        std::cout << "Dati numarul " << i << ": ";
        std::cin >> m;
        numere.push_back(m);
        if(m > 0)
            s++;
    }

    std::cout << s << " elemente pozitive" << std::endl;

    for(int i = 0; i <= numere.size(); i++) {
        if(numere[i] >= 1) 
            std::cout << numere[i] << std::endl;
    }
}
