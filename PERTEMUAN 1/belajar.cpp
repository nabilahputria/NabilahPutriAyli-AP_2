#include <iostream>  // Untuk input dan output standar (cout, cin)
#include <limits>  // Tidak digunakan dalam kode ini, bisa dihapus jika tidak perlu
using namespace std;

int main() { 
    // Deklarasi variabel
    
    string nama; // Menggunakan string untuk nama agar bisa mengandung spasi
    char kom, jenisKelamin; // Menggunakan char untuk kom dan jenisKelamin
    int nim; // Menggunakan int untuk nim
    float ip; 
    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl;

    cout << "Masukkan nama Anda : ";
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : ";
    cin >> kom; // Menggunakan char untuk kom

    cout << "Masukkan NIM : ";
    cin >> nim; // Menggunakan int untuk nim

    cout << "Masukkan IP : ";
    cin >> ip; // Menggunakan float untuk ip

    cout << "Masukkan jenis kelamin (L/P) :  ";
    jenisKelamin = getchar(); // agar karakter langsg tampil, tanpa tekan enter

    /*Untuk Output*/ 
    cout << "\n" << nama << endl; 
    cout << nim << endl; 
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter

    getchar(); // karakter yang diketik ga di tampilkan di layar
}