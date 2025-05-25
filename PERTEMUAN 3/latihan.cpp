#include <iostream> 

using namespace std; //Namespace std digunakan untuk menghindari penulisan std:: sebelum setiap fungsi dari library standar

int main() {
    int angka;
    cout << "Masukkan sebuah bilangan bulat: "; //Berfungsi untuk meminta input dari pengguna
    cin >> angka; 

    if (angka % 10 == 0) { //Jika angka habis dibagi 10
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) { //Jika angka habis dibagi 5
        cout << angka << " adalah kelipatan dari 5." << endl; 
    } else {
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl; //Jika angka tidak habis dibagi 5 atau 10
    }

 return 0;
}