#include <iostream>
#include <vector>

#include "Margele.h"
#include "Menu.h"

void margele() {
    int m, n;

    std::vector<int> t1;
    std::vector<int> t2;

    std::cout << "Dati un numar: ";
    std::cin >> m;

    for(int i = 1; i <= m; i++) {
        std::cout << "Dati un numar cuprins intre 10 si 99: ";
        std::cin >> n;

        //std::cout << n % 10 << " " << n / 10 << std::endl;
        if(n < 10) {

        } else {
            if((n % 10) > (n / 10)) {
                t1.push_back(n);
            } else {
                t2.push_back(n);
            }
        }
    }

    //* Tipul 1
    std::cout << "Numarul de margele de tipul 1 (";
    for(int i : t1) {
        std::cout << i << ", ";
    }
    std::cout << ")" << std::endl;

    //* Tipul 2
    std::cout << "Numarul de margele de tipul 2 (";
    for(int i : t2) {
        std::cout << i << ", ";
    }
    std::cout << ')' << std::endl;

}