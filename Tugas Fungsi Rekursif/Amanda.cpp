/*
Nama Program: Berapa Jumlah Permen di dalam Tas Amanda? (Menghitung Jumlah)
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 1 Oktober 2025
Deskripsi: Studi Kasus 3 Fungsi Rekursif, Mata Kuliah Algoritma dan Pemrograman-C
*/

// Time taken: 28 minutes
#include <iostream>
using namespace std;

int jumlah(int n) {
    if(n == 0) return 0;
    return n + jumlah(n-1);
}

int main() {
    cout << "Amanda memiliki permen dengan 10 warna di dalam tasnya." << endl;
    cout << "Masing-masing warna tersebut memiliki jumlah yang berurutan, seperti warna[1] memiliki jumlah 1, warna[2] memiliki jumlah 2, dan seterusnya." << endl;
    cout << "Berapa jumlah permen di dalam tas Amanda?" << endl;

    int jawaban;
    cin >> jawaban;

    int benar = jumlah(10);

    if(jawaban == benar) {
        cout << "Anda benar! Amanda memiliki " << benar << " permen di dalam tasnya." << endl;
    } else {
        cout << "Anda salah! Amanda seharusnya memiliki " << benar << " permen." << endl;
    }

    return 0;
}