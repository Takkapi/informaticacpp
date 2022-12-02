#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

#include "menu.h"
#include "ParImpar.h"
#include "CifreInNumar.h"

using namespace std;

void color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y) {
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void menu() {

	cout << "Program elaborat de Smolenschi Petru(Takkapi)" << endl;
	cout << endl;
	
	int Set[] = { 7, 7, 7 };
	int counter = 2;
	char key;

	for (int i = 0;;) {

		gotoxy(10, 5);
		color(Set[0]);
		cout << "[1.] Program Numere Pare/Impare";

		gotoxy(10, 6);
		color(Set[1]);
		cout << "[2.] Program Cifre intr-un numar";

		gotoxy(10, 7);
		color(Set[2]);
		cout << "[3.] Iesi";

		key = _getch();

		if (key == 72 && (counter >= 2 && counter <= 3)) {
			counter--;
		} 
		if (key == 80 && (counter >= 1 && counter <= 2)) {
			counter++;
		}
		if (key == '\r') {
			if (counter == 1) {
				system("cls");
				ParImpar();
			}
			if (counter == 2) {
				system("cls");
				CifreInNumar();
			}
			if (counter == 3) {
				cin.ignore();
				cout << "\nApasa tasta Enter pentru a continua... ";
				cin.get();
				exit(0);
			}
		}
		Set[0] = 7;
		Set[1] = 7;
		Set[2] = 7;
		if (counter == 1) {
			Set[0] = 12;
		}
		if (counter == 2) {
			Set[1] = 12;
		}
		if (counter == 3) {
			Set[2] = 12;
		}
	}

	/*
	int action;


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
	}*/
}