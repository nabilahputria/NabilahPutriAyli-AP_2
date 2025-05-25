#include <iostream>
using namespace std; 

string namaGlobal = "Ilmu"; // untuk global

void namaVariabel() { // untuk lokal
    string namaLokal = "Komputer"; 

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel(); // panggil fungsi

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; // ga iso

}