#include <iostream> // Program untuk menghitung volume dan luas bola
using namespace std; 

int main() 
    {
        // Program untuk menentukan volume dan luas sebuah bola
        float luas, volume, jari; // variabel untuk menyimpan luas, volume, dan jari-jari bola
        const float phi = 3.14; // konstanta 

        cout << "Input jari-jari : "; // meminta input jari-jari bola
        cin >> jari; // membaca input jari-jari dari pengguna

        volume = ((float)4/3) * (phi) * (jari*jari*jari); 
        luas = 4 * phi * jari * jari; 

        cout << "Volume : " << volume << endl; 
        cout << "luas : " << luas << endl;
    }