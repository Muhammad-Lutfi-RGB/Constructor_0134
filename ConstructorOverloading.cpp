#include <iostream>
using namespace std;

class mahasiswa{
    private:
    int Nim;
    string Nama;

    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int INim, string INama);
    void cetak();
};

mahasiswa::mahasiswa(){}

mahasiswa::mahasiswa(int INim){
    Nim = INim;
}

mahasiswa::mahasiswa(string INama){
    Nama =  INama;
}

mahasiswa::mahasiswa(int INim, string INama){
    Nim     = INim;
    Nama    = INama;
}

void mahasiswa::cetak(){
    cout << endl << "NIM = " << Nim << endl;
    cout << "Nama = " << Nama << endl;
}

int main() {
    mahasiswa mhs1(102030);             // Hanya NIM
    mahasiswa mhs2("Andi");             // Hanya Nama
    mahasiswa mhs3(10203, "Santi");     // NIM dan Nama

    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}