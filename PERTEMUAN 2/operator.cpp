#include <iostream>
using namespace std;

int main () {
    int a, b; // mendeklarasikan variabel a dan b

    system("CLS"); // membersihkan layar

    // Assignment Operator
    a = 3; 
    b = 5;

    Arithmetical Operator, yaitu operator untuk operasi matematika 
    int tambah = a + b; 
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; // type casting : berguna untuk mengubah tipe data dari sebuah variabel
    int modulo = a % b; // operator sisa bagi

    cout << "Hasil penjumlahan = " << tambah << endl; 
    cout << "Hasil pengurangan = " << kurang << endl; 
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;

    Relational Operator // operator perbandingan
    cout << (a==b) << endl; 
    cout << (a<b) << endl; 
    cout << (a<=b) << endl; 
    cout << (a>b) << endl; 
    cout << (a>=b) << endl;
    cout << (a!=b) << endl;

    Logical Operator (&&,||, !) // operator logika
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << !true << endl;
    cout << !false << endl;

    Bitwise Operator (&, |, ^, ~, >>, <<) --> biner // operator bitwise
    cout << (5&7) << endl;
    cout << (5|7) << endl;
    cout << (5^7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl; 
    cout << (7 >> 2) << endl;

    Shorthand // operator untuk menyederhanakan penulisan kode
    a += 7; // a = a + 7;
    cout << a << endl;

    a -= 7; // a = a - 7;
    cout << a << endl;

    a *= 7; // a = a * 7;
    cout << a << endl;

    a /= 7; // a = a / 7;
    cout << a << endl;

    Increment, Decrement // operator untuk menambah atau mengurangi nilai variabel
    Pre Increment // operator untuk menambah nilai variabel 1
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;

    Post Increment 
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;

    Pre Decrement // operator untuk mengurangi nilai variabel 1
    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << --b << endl;

    Post Decrement 
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;
}