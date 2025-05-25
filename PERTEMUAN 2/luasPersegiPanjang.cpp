#include <iostream>
using namespace std; 

int main () { //program menghitung luas persegi panjang

    float luas, p, l; //variabel luas, panjang, lebar

    cout << "Masukkan panjang : ";
    cin >> p; 

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l;
    cout << "Luas = " << luas << endl; 

    return 0; 
}