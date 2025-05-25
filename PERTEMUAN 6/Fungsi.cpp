#include <iostream> //header untuk c++
#include <cstdlib> // untuk system("cls")
using namespace std;

// Fungsi tanpa nilai balikan
void tampilkanpesan() {
    cout << "=== SELAMAT DATANG DI AP 2 ===" << endl;
}

// Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b; //mengembalikan hasil penjumlahan a dan b
}

// Fungsi overload
int kali(int a, int b) { //untuk perkalian bil.bulat
    return a * b; 
}

double kali(double a, double b) {
    return a * b; //perkalian bilanga desimal
}

// Fungsi rekursif
int faktorial(int n) {
    if (n == 0 || n == 1) { 
        return 1; //kondisi dasar
    } else {
        return n * faktorial(n - 1);//memanggil dirinya sendiri dengen'n-1'
    }
}

// Fungsi utama
int main() {
    system("cls");//membersihkan layar

    // Menggunakan fungsi tanpa nilai balikan
    tampilkanpesan(); 

    int x = 5, y = 3; //deklarasi variabel x dan y

    // Menggunakan fungsi dengan nilai balikan
    int hasiltambah = tambah(x, y); //menyimpan hasil penjumlahan
    cout << "Hasil penjumlahan: " << hasiltambah << endl;

    // Menggunakan fungsi overload
    int hasilkaliint = kali(x, y); //memanggil kali untuk int
    double hasilkalidouble = kali(5.5, 2.0); //memanggil kali untuk double/desimal

    cout << "Hasil perkalian (int): " << hasilkaliint << endl; 
    cout << "Hasil perkalian (double): " << hasilkalidouble << endl;

    // Menggunakan fungsi rekursif
    int angka = 5; 
    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;

    return 0;
}