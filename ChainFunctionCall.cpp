#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this;
    }

    string getJudul(){
        return this->judul;
    }

};

int main(){
    buku bukunya;
    cout << bukunya.setJudul("Matematika").getJudul(); // chain function call
    return 0;
}