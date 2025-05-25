#include <stdio.h> // untuk printf
#include <conio.h> // untuk getch
#include <string.h> // untuk string

int main() {
    char nama[50]; // array untuk menyimpan string
    int nim; // variabel untuk nim
    char kom[2]; // array untuk menyimpan kom
    float ip; // variabel untuk ip

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : "); // fungsi masukan pada C
    fgets(nama, sizeof(nama), stdin); // membaca string dari input
    nama[strcspn(nama, "\n")] = 0; // hapus newline

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // membersihkan newline sisa dari scanf

    printf("Masukkan kom : ");
    fgets(kom, sizeof(kom), stdin); 
    kom[strcspn(kom, "\n")] = 0; // hapus newline

    printf("Masukkan ip : "); 
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // menampilkan nim

    printf("KOM : ");
    puts(kom); //menampilkan kom
    printf("IP : %f\n", ip); //menampilkan ip

    printf("press any button to continue...");
    getch(); //menunggu input karakter sebelum console
}
