#include <iostream>
#include <stdlib.h>

#include "ParImpar.h"
#include "Menu.h"

using namespace std;

void ParImpar() {
	int m, n;

	cout << "Numere Pare/Impare" << endl;
	cout << endl;

	cout << "Da-ti o valoarea variabilei m... ";
	cin >> m;
	cout << "Da-ti o valoarea variabilei n... ";
	cin >> n;
	cout << endl;

	cout << "\nNumerele pare din intervalul [" << m << ", " << n << "] sunt: " << endl;
	for (int i = m; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}

	cout << "\nNumerele impare din intervalul [" << m << ", " << n << "] sunt: " << endl;
	for (int i = m; i <= n; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}

	cin.ignore();
	cout << "\nApasa tasta Enter pentru a continua... ";
	cin.get();
	system("cls");
	menu();
}