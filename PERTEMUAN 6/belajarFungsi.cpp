#include <iostream> //header untuk c++
using namespace std; 

void sapa (string nama) { //fungsi untuk menyapa
    cout << " Halo " << nama << " ! selamat datang di AP 2!" << endl;//menampilkan sapaan
}

int main(){ //fungsi utama
    string namapengguna = "Nazwa"; //deklrasi nama

    sapa(namapengguna);//memanggil fungsi sapa

    return 0;
}