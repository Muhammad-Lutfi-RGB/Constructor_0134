#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(int Nim, string Nama);
};

mahasiswa::mahasiswa(int Nim, string Nama){
    cout << "Constructor dengan Parameter Terpanggil" << endl;
    cout << "NIM    : " << Nim << endl;
    cout << "Nama   : " << Nama << endl;
}

int main() {
    mahasiswa mhs (12345, "Pascal");
    return 0;
}