#include <iostream> //header untuk c++
#include <string> //header untuk tipe data string
#include <array> //header untuk penggunaan array
using namespace std;

int main () {
    // Array Declaration & Initialization
    /* 2 Cara Membuat Array */

    // cara 1 : array kosong
    // string nama[5]; // deklarasi nama array dengan 5 elemen string

    // nama[0]="Alya"; // mengisi elemen pertama (indeks 0)
    // nama[1]="Parul"; // mengisi elemen kedua (indeks 1)
    // nama[2]="Syukron"; // dan seterusnya dgn berurutan
    // nama[3]="Aurick";
    // nama[4]="Dzakwan";

    // cara 2 : array yang langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; // array dengan ukuran ditentukan
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; // array dgn ukuran otomatis sesuai jumlah elemen

    // Ascending Element in Array
    // cout << nama[0] << endl; //mencetak elemen pertama
    // cout << nama[1] << endl; // mencetak elemen kedua
    // cout << nama[2] << endl; // mencetak ketiga
    // cout << nama[3] << endl; //mecetak keempat
    // cout << nama[4] << endl;// mencetak kelima

    // Menggunakan Looping
    // for(int i = 0; i < 5; i++) { //loop dari indeks 0 sampai 4 
    //     cout << nama[i] << endl; // mencetak elemen indek i
    // }

    // Descending element in array use looping
    // for (int i = 4; i >= 0; i--) { //loop dari indeks 4 mundur sampai 0
    //     cout << nama[i] << endl; // mencetak elemen pada indeks i
    // }



    // Multidimensional Array
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1, 3, 5},{2, 4, 6}}; //deklrasi dan inisialisasi array 2x3
    // for(int i = 0; i < 2; i++) { //loop untuk baris 
    //     for(int j = 0; j < 3; j++) { // loop untuk kolom
    //         cout << matrix[i][j] << " "; //mencetak elemen pada baris i dan kolom j
    //     }
    //     cout << endl;
    // }

    // int matrix[4][6] ={ //contoh array 4x6
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24}
    // };
    
    // for (int i = 0; i < 4; i++) { // 4 baris
    //     for (int j = 0; j < 6; j++) { // 6 kolom
    //         cout << matrix[i][j] << "\t"; // pakai \t biar rapi seperti tabel
    //     }
    //     cout << endl;
    // }



    // String (array of characters)
    // string nama = "Kiel"; //deklarasi dan inisialisasi string
    // cout << nama[0] << endl; //mengakses karakter pertama
    // cout << nama[2] << endl; //mengakses karakter ketiga

    // for (int i = 0; i < nama.length(); i++) { //loop sepanjang string
    //     cout << nama[i] << endl;
    // }
    

    // string s1 = "Hello"; 
    // string s2 = "World"; 

    /* 1. s1 = s2 */
    // s1 = s2; //mengganti isi s1 dengan s2
    // cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2 */
    // s1 = "Hello";  // reset nilai di s1
    // cout << "Hasil : " << s1 + s2 << endl; //menggabungkan string

    /* 3. s1. length() */
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;

    /* 4. s1.substr(n, m) */ // Mengambil substring dari indeks 2 sebanyak 3 karakter
    // cout << s1.substr(2, 3) << endl; // Mengambil substring dari string gabungan 
    // cout << (s1 + s2).substr(5, 3) << endl;


    // Operator sizeof
    // int angka = 10; 
    // cout << sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // string s = "Alya";
    // cout << sizeof(s);


    // Array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // Deklarasi std::array untuk 5 float
    // cout << "Nilai : ";

    // for(int i = 0; i < nilai.size(); i++) { // Loop menggunakan indeks dan 'size()' untuk ukuran array
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai) { // Untuk setiap elemen 'n' dalam array 'nilai'
    //     cout << n << " "; // Mencetak elemen 'n'
    // }
}