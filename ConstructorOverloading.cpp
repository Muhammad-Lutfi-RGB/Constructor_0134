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