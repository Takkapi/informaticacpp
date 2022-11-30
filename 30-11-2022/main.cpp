#include <iostream>

using namespace std;

int main() {
    int n, x;
    cout << "Da-ti un numar variabilei n " << endl;
    cin >> n;
    //cout << "\n" << n << endl;

    if(n % 2 == 0) {
        cout << "Numarul n introdus este un numar par" <<  endl;
    } else {
        cout << "Numarul n introdus este un numar impar" << endl;
    }

    cin.ignore();
    cout << "\n" << "Press Enter to Exit...";
    cin.get();

    return 0;
}