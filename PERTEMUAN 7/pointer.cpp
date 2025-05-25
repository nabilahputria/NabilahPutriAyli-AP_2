#include <iostream>
using namespace std;

void penjumlahan(int a, int b){ // untuk parameter biasa
    cout << a + b << endl; // hasil penjumlahan
}

void penjumlahanPointer(int *a, int *b) { // untuk pointer
    *a += *b; // penjumlahan
    cout << *a << endl; // hasil penjumlahan
}

int main () { 
    system("CLS"); // clear screen

    // Pointer Deklaration
    int number = 35; // variabel number
    int *pointer_number = &number; // pointer_number menunjuk ke variabel number

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // array number
    int *pointer_num = num; // pointer_num menunjuk ke array num
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5;
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    // Pointer in Paramater
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;


    // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; // pointer in pointer
    // cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer 
    int *ptr = new int; 
    *ptr = 30; // alokasi memori untuk pointer
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl; // ptr menunjuk ke alamat memori yang baru

    delete ptr; // menghapus alokasi memori
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl; // ptr sudah di delete
}   