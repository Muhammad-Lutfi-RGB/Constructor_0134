#include <iostream>
using namespace std;


class Barang {
    private:
    string namaBarang;
    int KodeBarang;

    public:
    Barang(string anamaBarang, int aKodeBarang);
    void cetak();
};

Barang::Barang(string anamaBarang, int aKodeBarang){
    namaBarang = anamaBarang;
    KodeBarang = aKodeBarang;
}

void Barang::cetak(){
    cout << endl << "Barang = " << namaBarang << endl;
    cout << "Kode = " << KodeBarang << endl;
}

int main (){
    Barang Barang1("Soda", 123);
    Barang1.cetak();

    return 0;
}