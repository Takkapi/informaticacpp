#include <iostream>
#include <stdlib.h>

#include "menu.h"
#include "ParImpar.h"
#include "CifreInNumar.h"

using namespace std;

void menu() {
	int action;

	cout << "Program elaborat de Smolenschi Petru(Takkapi)" << endl;
	cout << endl;

	cout << "Tasteaza numarul actiunii" << endl;
	cout << "[1.] Program Numere Pare/Impare" << endl;
	cout << "[2.] Program Cifre intr-un numar" << endl;
	cout << "[3.] Iesi" << endl;
	cout << "\nTasteaza id-ul unei actiuni... ";

	cin >> action;

	if (action == 1) {
		system("cls");
		ParImpar();
	}
	else if (action == 2) {
		system("cls");
		CifreInNumar();
	}
	else if (action == 3) {
		cin.ignore();
		cout << "\nApasa tasta Enter pentru a continua... ";
		cin.get();
	}
	else {
		cout << "\nID actiune invalid!" << endl;
		menu();
	}
}