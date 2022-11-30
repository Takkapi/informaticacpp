#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, x;
    cout << "Da-ti un numar variabilei n " << endl;
    cin >> n;
    //cout << to_string(n) << endl;
    if(to_string(n).find('-') != string::npos) {
        if(to_string(n).length() - 1 >= 5) {
        cout << "Numarul introdus are mai mult de 4 cifre" << endl;
        } else {
            cout << "Numarul introdus este de " << to_string(n).length() - 1 << " cifre" << endl;
        }
    } else {
        if(to_string(n).length() >= 5) {
        cout << "Numarul introdus are mai mult de 4 cifre" << endl;
        } else {
            cout << "Numarul introdus este de " << to_string(n).length() << " cifre" << endl;
        }
    }
    
    cin.ignore();
    cout << "\n" << "Press Enter to Exit...";
    cin.get();
    return 0;
}