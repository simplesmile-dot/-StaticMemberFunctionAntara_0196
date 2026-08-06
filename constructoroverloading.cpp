#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
        int nim;
        string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int nim, string nama);
        void cetak();
};

mahasiswa::mahasiswa() {
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim; //definisi hanya NIM
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama; //definisi hanya Nama
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim; //definisi NIM dan Nama
    nama = iNama;
}

void mahasiswa::cetak() {
    cout <<endl << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main() {
    mahasiswa mhs1(102030); //Hanya NIM
    mahasiswa mhs2("Andi"); //Hanya Nama
    mahasiswa mhs3(010203, "Santi"); //Hanya NIM dan Nama


    //tampilkan nilai
    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "Mahasiswa 2 : "; mhs2.cetak();
    cout << "Mahasiswa 3 : "; mhs3.cetak();
    
    return 0;
}