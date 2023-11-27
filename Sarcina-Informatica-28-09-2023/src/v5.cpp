#include <iostream>

#include "v5.hpp"

/*
    De la tastatura se introduc elementele unui tabel de tip întreg, numarul maxim de elemente este 10. 
    De determinat numarul de aparitii a numarului 0 (zero) in sir, afisati la ecran aceasta valoare.
    Exemplu: pentru sirul de numere: 15; 0; 3; -3; 0; 25.0
        Se va afisa: Numarul de aparitii este 2
*/

V5::V5() {
    int n, s;
    double m;
    std::vector<double> numere;

    std::cout << "Dati numarul de numere: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        std::cout << "Dati numarul " << i << ": ";
        std::cin >> m;
        numere.push_back(m);
    }

    s = 0;
    for(int i = 0; i <= numere.size(); i++) {
        if(numere[i] == 0)
            s++;
    }

    std::cout << "Numarul de aparitii este " << s << std::endl;
}