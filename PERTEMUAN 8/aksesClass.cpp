#include <iostream>
using namespace std;

class ContohAkses { // untuk mendemonstrasikan akses private, protected, dan public
    private: // private member
        int privateVar; // hanya bisa diakses dari dalam class ini
    
    protected: // protected member
        int protectedVar; 

    public: // public member
        int publicVar; 

    // Constructor
    ContohAkses() {
        privateVar = 1; 
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() { // method untuk menampilkan semua member
        cout << "Akses dari dalam class : " << endl; 
        cout << privateVar << endl; 
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses { // kelas turunan
    public:
    void aksesProtected() { // method untuk mengakses protected member
        cout << protectedVar << endl; // bisa diakses karena Turunan adalah subclass dari contoh
        cout << publicVar << endl; 
        // cout << privateVar << endl; // error
    }
};

int main () {
    ContohAkses obj; // objek dari class ContohAkses
    obj.tampilkanSemua(); // akses method untuk menampilakan semua member

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error 
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout <<"\nAkses dari kelas Turunan " << endl; // objek dari class Turunan
    Turunan tur; 
    tur.aksesProtected(); // akses protected member
}