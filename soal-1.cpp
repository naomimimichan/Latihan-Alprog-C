/*
Nama Program: Program Simulasi Bunga Majemuk
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 29 September 2025
Deskripsi: Soal 1 Quiz Praktikum Algoritma dan Pemrograman
*/

#include <iostream>
using namespace std;

// Rumus adalah A = P(1 + (r/n))^(nt), dengan P sebagai modal awal, r sebagai suku bunga tahunan dalam desimal, n sebagai jumlah periode per tahun, t sebagai durasi dalam tahun
// Target waktu pengerjaan: 5 menit

void angka(int &p, double &r, int &n, int &t) {
    cin >> p >> r >> n >> t;
}

double hitungBunga(int p, double r, int n, int t) {
    // Pangkat dinyatakan sebagai c
    int c = n * t;
    double hasilTemporary = 1.0;
    double faktor = (1.0 + (r / n));
    for(int i = 1; i <= c; i++) {
        hasilTemporary *= faktor;
    }

    double hasil = hasilTemporary * p;

    return hasil;
}

int main() {
    int p, n, t;
    double r;
    angka(p, r, n, t);

    cout << hitungBunga(p, r, n, t) << endl;

    return 0;
}

// Expected: 5 minutes
// Time taken: 5 + (10:51.88) = 15:51.88 minutes
