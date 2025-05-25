#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat { // struct untuk alamat
    string jalan; // untuk menyimpan nama jalan
    string kota; // kota
    int kodePos; // kode pos
};

struct Mahasiswa { // struct untuk mahasiswa
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {
    system("CLS");
    Mahasiswa mhs1; // mendeklarasikan variabel mhs1 bertipe struct Mahaisiswa

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n; // untuk menyimpan banyak mahasiswa
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) { // loop untuk input data mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // untuk membersihkan buffer input
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama); // input nama mahasiswa

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk; 

        mahasiswa.push_back(mhs1); // menambahkan data mahasiswa ke dalam vector
    }

    for(int i = 0; i < n; i++){ // loop untuk menampikan data mahasiswa
        cout << "Mahasiswa " << i + 1 << endl; 
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}