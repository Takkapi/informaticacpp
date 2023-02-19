#include <iostream>

#include "Menu.h"
#include "Cifre.h"
#include "Ghici.h"
#include "Margele.h"

void menu() {
    std::cout << "Program elaborat de Smolenschi Petru(Takkapi)" << std::endl;
	std::cout << std::endl;
	std::cout << "Selecteaza o optiune introducand cifra corespunzatoare" << std::endl;
    
    int counter;

    std::cout << std::endl;
    std::cout << "[1.] Program Cifre" << std::endl;
    std::cout << "[2.] Program Ghici" << std::endl;
    std::cout << "[3.] Program Margele" << std::endl;

    std::cout << std::endl;
    std::cout << "Introdu cifra corespunzatoare: ";
    std::cin >> counter;

    if(counter == 1) {
        system("clear"); // cls for windows
        cifre();
    } else if(counter == 2) {
        system("clear");
        ghici();
    } else if(counter == 3) {
        system("clear");
        margele();
    } else if(counter >= 4){
        system("clear");
        menu();
    } else if(counter == 9) {
        return;
    }

}