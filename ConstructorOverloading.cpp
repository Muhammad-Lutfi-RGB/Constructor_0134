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