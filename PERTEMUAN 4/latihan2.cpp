#include <iostream>
using namespace std;

int main() {
    string kalimat;
    
    cout << "Masukkan sebuah kalimat: "; // Minta input kalimat dari pengguna
    getline(cin, kalimat); // getline digunakkan untuk membaca kalimat dengan spasi

    for (int i = 0; i < kalimat.length(); i++) {
        // Cek apakah karakter adalah huruf vokal
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' ||  
            kalimat[i] == 'o' || kalimat[i] == 'u') { // Ubah huruf vokal menjadi huruf kapital
            kalimat[i] = toupper(kalimat[i]); // Ubah ke huruf kapital
        }
    }

    cout << "Hasil: " << kalimat << endl; 

    return 0;
}