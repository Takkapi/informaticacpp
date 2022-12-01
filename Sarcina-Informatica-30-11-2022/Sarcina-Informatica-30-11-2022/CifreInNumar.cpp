#include "CifreInNumar.h"
#include <iostream>
#include <string>
#include <stdlib.h>

#include "menu.h"

using namespace std;

void CifreInNumar() {
	int n;
	cout << "Cifre in Numar" << endl;
	cout << "Da-ti o valoare variabilei n... ";
	cin >> n;

	if (to_string(n).find('-') != string::npos) {
		if (to_string(n).length() - 1 >= 5) {
			cout << "Numarul introdus are mai mult de 4 cifre" << endl;
		}
		else {
			cout << "Numarul n este de " << to_string(n).length() - 1 << " cifre!" << endl;
		}
	}
	else {
		if (to_string(n).length() >= 5) {
			cout << "Numarul introdus are mai mult de 4 cifre" << endl;
		}
		else {
			cout << "Numarul n este de " << to_string(n).length() << " cifre!" << endl;
		}
	}

	cin.ignore();
	cout << "\nApasa tasta Enter pentru a continua... ";
	cin.get();
	system("cls");
	menu();
}