#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa { 
    string nama;// untuk nama mahasiswa
    int umur; // untuk menyimpan umur mahasiswa
    float ipk; // untuk ipk mahasiswa
};

int main() {
    Mahasiswa mhs1; // mendeklarasikan variabel mhs1 bertipe struct Mahasiswa

    mhs1.nama = "Nabilah"; // mengisi nama mahasiswa
    mhs1.umur = 18; // untuk mengisi umur mahasiswa
    mhs1.ipk = 3.08; // untuk mengisi ipk mahasiswa

    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "IPK : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; // mendeklarasikan pointer bertipe struct Mahasiswa
    cout << "Akses dengan -> : " << endl; // mengakses data struct dengan pointer
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;

}