#include <iostream>
#include <stdlib.h>

#include "ParImpar.h"
#include "menu.h"

using namespace std;

void ParImpar() {
	int n;
	
	cout << "Numere Pare/Impare" << endl;
	cout << endl;

	cout << "Da-ti o valoarea variabilei n... ";
	cin >> n;
	cout << endl;

	if (n % 2 == 0) {
		cout << "Numarul introdus este un numar par" << endl;
	}
	else {
		cout << "Numarul introdus este un numar impar" << endl;
	}

	cin.ignore();
	cout << "\nApasa tasta Enter pentru a continua... ";
	cin.get();
	system("cls");
	menu();
}