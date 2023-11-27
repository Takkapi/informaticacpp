#include <iostream>

#include "v1.hpp"
#include "v2.hpp"
#include "v3.hpp"
#include "v4.hpp"
#include "v5.hpp"

void menu() {
    int n;

    std::cout << "1. Varianta I" << std::endl;
    std::cout << "2. Varianta II" << std::endl;
    std::cout << "3. Varianta III" << std::endl;
    std::cout << "4. Varianta IV" << std::endl;
    std::cout << "5. Varianta V" << std::endl;
    std::cout << "0. Iesi" << std::endl;
    std::cout << std::endl;
    std::cout << "Selectati o varianta... ";
    std::cin >> n;

    if(n == 1) {
        V1();
        menu();
    } else if(n == 2) {
        V2();
        menu();
    } else if(n == 3) {
        V3();
        menu();
    } else if(n == 4) {
        V4();
        menu();
    } else if(n == 5) {
        V5();
        menu();
    } else if(n == 0) {
        return;
    } else {
        menu();
    }
}

int main() {
    std::cout << "Sarcina Informatica 28.09.2023 \nSelectati o varianta de mai jos\n " << std::endl;
    menu();
    return 0;
}