#include <iostream> // header untuk c++
#include <vector>

using namespace std;

int main (){
    // Vector Declaration & Initialization
    vector<string> nama_kayawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // Ascending Element of Vector
    // for(int i = 0; i < nama_kayawan.size(); i++) { //loop menggunakan indeks
    //     cout << nama_kayawan[i] << endl; //menetak setiap nama
    // }

    // for (string karyawan : nama_kayawan) { //loop berbasis rentang
    //     cout << karyawan << endl;
    // }


    // Add data to Vector
    nama_kayawan.push_back("Imam");

    // for(int i = 0; i < nama_kayawan.size(); i++) {
    //     cout << nama_kayawan[i] << endl;
    // }

    
    // Delete data from Vector
    nama_kayawan.pop_back(); //menghapus elemen akhir
    nama_kayawan.erase(nama_kayawan.begin() + 3); //menghapus indeks 3

    for(int i = 0; i < nama_kayawan.size(); i++) { //menampilkan isi vector setelah penghapusan
        cout << nama_kayawan[i] << endl;
    }
}