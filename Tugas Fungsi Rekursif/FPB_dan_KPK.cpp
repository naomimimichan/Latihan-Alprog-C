/*
Nama Program: Menentukan Jadwal "Pas" Mesin (FPB dan KPK)
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 1 Oktober 2025
Deskripsi: Studi Kasus 1 Fungsi Rekursif, Mata Kuliah Algoritma dan Pemrograman-C
*/

// Time taken: 2 hours 23 minutes
#include <iostream>
using namespace std;

void inputWaktu(int &a, int &b) {
    do {
        cout << "Masukkan waktu mesin A dan B." << endl;
        cin >> a >> b;

        if(a < 0 || b < 0)
            cout << "Bilangan yang diinput harus positif!\n";
        else if(a == 0 && b == 0)
            cout << "Hanya ada boleh satu bilangan yang bernilai nol!\n";
        else
            break;
    } while(true);
}

int fpb(int a, int b) {
    if (b == 0) {
        return a;
    } return fpb(b, a % b);
}

int kpk(int a, int b) {
    return ((a * b) / fpb(a, b));
}

int main() {
    cout << "Diberikan mesin A dan mesin B, dengan mesin A bekerja setiap x menit sekali dan mesin B bekerja setiap y menit sekali. Program ini membantu menentukan:" << endl;
    cout << "1. Kapan kedua mesin akan bekerja bersamaan lagi (KPK)" << endl;
    cout << "2. Jeda waktu terbesar yang dapat digunakan sebagai interval kerja yang sama-sama cocok bagi kedua mesin (FPB)" << endl;

    int x, y;
    inputWaktu(x, y);

    cout << "Jeda waktu terbesar yang dapat digunakan sebagai interval kerja yang sama-sama cocok bagi kedua mesin adalah " << fpb(x, y) << " menit." << endl;
    cout << "Kedua mesin akan bekerja bersamaan lagi pada menit ke-" << kpk(x, y) << "." << endl;

    return 0;
}