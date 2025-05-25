#include <iostream>
using namespace std;

int main(){
    string kalimat; // Deklarasi variabel kalimat
    int i;

    system("CLS");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat); // Mengambil input kalimat dari pengguna

    // n a b i l a h
    for(i = 0; i < kalimat.length(); i++) { // Mengubah setiap karakter menjadi huruf kapital
        kalimat[i] = toupper(kalimat[i]); 
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; 

    return 0;
}