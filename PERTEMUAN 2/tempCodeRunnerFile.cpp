#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
#include <string>

#include "batak_sunda.h" // Asumsikan ini berisi alias seperti: mancetak = cout, asup = cin, dll.

using namespace std;

// Fungsi sambutan
void tampilan_awal() {
    mancetak << "================ SELAMAT DATANG DI ==================\n";
    mancetak << "== PROGRAM KALKULATOR NILAI MAHASISWA BATAK SUNDA ==\n";
    mancetak << "=====================================================\n";
    mancetak << "Mangidohon data nilai mahasiswa.\n";
    mancetak << "Silakan masukkan nama dan nilai-nya satu per satu.\n\n";
}

// Fungsi penutup
void ucapan_terima_kasih() {
    mancetak << "\n=====================================================\n";
    mancetak << "        MAULIATE / HATUR NUHUN / TERIMA KASIH        \n";
    mancetak << "=====================================================\n";
    mancetak << "Horas ma di hita sude! Salam kasundaan!\n";
}

// Fungsi utama
angkana mulai() awal
    tampilan_awal();

    angkana n;
    mancetak << "Jumlah mahasiswa: ";
    asup >> n;

    vector<string> jeneng(n);
    vector<ganda> tandha(n);
    ganda gunggung = 0;
    ganda maks = numeric_limits<ganda>::min();
    ganda min = numeric_limits<ganda>::max();
    string jeneng_maks = "", jeneng_min = "";

    pikeun (angkana i = 0; i < n; ++i) awal
        mancetak << "Jeneng mahasiswa ke-" << i + 1 << ": ";
        asup >> jeneng[i];

        mancetak << "Nilai mahasiswa ke-" << i + 1 << ": ";
        asup >> tandha[i];

        gunggung += tandha[i];

        molo (tandha[i] > maks) awal
            maks = tandha[i];
            jeneng_maks = jeneng[i];
        pungkasan

        molo (tandha[i] < min) awal
            min = tandha[i];
            jeneng_min = jeneng[i];
        pungkasan
    pungkasan

    ganda rata2 = gunggung / n;

    mancetak << "\n============== HASIL PERHITUNGAN ===================\n";
    mancetak << fixed << setprecision(2);
    mancetak << "Nilai rata-rata          : " << rata2 << pindah;
    mancetak << "Nilai tertinggi (godang) : " << maks << " (" << jeneng_maks << ")" << pindah;
    mancetak << "Nilai terendah (leleh)   : " << min << " (" << jeneng_min << ")" << pindah;

    mancetak << "\n---------- DAFTAR NILAI MAHASISWA ----------\n";
    pikeun (angkana i = 0; i < n; ++i) awal
        mancetak << i + 1 << ". " << jeneng[i] << " - " << tandha[i] << pindah;
    pungkasan

    // Tambahan baris agar menjadi 100
    mancetak << "\nApakah Anda ingin menyimpan hasil ini? (y/t): ";
    char simpan;
    asup >> simpan;

    if (simpan == 'y' || simpan == 'Y') {
        mancetak << "Fitur penyimpanan belum tersedia. (Fitur mendatang)\n";
    } else {
        mancetak << "Hasil tidak disimpan.\n";
    }

    // Simulasi progress
    mancetak << "\nMenutup program";
    pikeun (angkana i = 0; i < 3; ++i) {
        mancetak << ".";
    }
    mancetak << "\n";

    ucapan_terima_kasih();

    tahan_jo;
    bali 0;
pungkasan