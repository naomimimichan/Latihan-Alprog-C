/*
Nama Program: Aviary
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 29 September 2025
Deskripsi: Soal 4 Quiz Praktikum Algoritma dan Pemrograman
*/

#include <iostream>
using namespace std;

// Expected: 5 minutes

int menu(int n = 9) {
    for(int i = 1; i <= 9; i++) {
        cout << "=";
    }

    cout << " AVIARY ";

    for(int i = 1; i <= 9; i++) {
        cout << "=";
    }
    cout << endl;

    cout << "1. Kopi Hitam (Rp 10.000)" << endl;
    cout << "2. Kopi Susu  (Rp 12.000)" << endl;
    cout << "3. Selesai & Bayar" << endl;

    for(int i = 1; i <= 26; i++) {
        cout << "=";
    }
    cout << endl;

    return 0;
}

int pesan(int i) {

    int x = 0;
    if(i == 1) {
        x = 10000;
    }
    if(i == 2) {
        x = 12000;
    }

    return x;
}

void awal(int &i) {
    int input;
    i = 0;
    do {
        cin >> input;
        if (input == 1 || input == 2) {
            i += pesan(input);
        }
    } while (input != 3);
}

int main() {
    menu(9);
    cout << endl;

    int n;
    awal(n);

    int uang;
    cin >> uang;

    cout << "Total belanja Anda: Rp " << n << endl;
    cout << "Terima kasih! Kembalian Anda: Rp " << uang - n << endl;

    return 0;
}

// Time taken: 13 minutes