#include <iostream>

#include "v1.hpp"

/*
    Se citesc n numere intregi (1 <= n <= 20). Sa se afiseze pe verticala,
    specificandu-se pozitia pe care o ocupa in sir.
    Exemplu:
    Date de intrare: 5 3 7 6
    Date de iesire:     5       pozitia 1
                        3       pozitia 2
                        7       pozitia 3
                        6       pozitia 4
*/

V1::V1() {
    int n, m;
    std::vector<int> numere;
    numere.reserve(20);

    std::cout << "Dati numarul de numere: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        std::cout << "Dati numarul " << i << ": ";
        std::cin >> m;
        numere.push_back(m);
    }

    for(int i = 1; i <= numere.size(); i++) {
        std::cout << numere[i-1] << "     pozitia " << i << std::endl;
    }
}