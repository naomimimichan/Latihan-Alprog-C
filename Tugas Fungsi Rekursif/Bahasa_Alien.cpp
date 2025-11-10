/*
Nama Program: Translate Bahasa Alien (Balikkan Kata)
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 1 Oktober 2025
Deskripsi: Studi Kasus 5 Fungsi Rekursif, Mata Kuliah Algoritma dan Pemrograman-C
*/

// Time taken: 14 minutes
#include <iostream>
using namespace std;

void balikKata(char kata[], int idx) {
    if(kata[idx] == '\0') return;
    balikKata(kata, idx + 1);
    cout << kata[idx];
}

#include <iostream>
using namespace std;

int main() {
    cout << "Program ini memberikan Anda kekuatan untuk mengubah kata Anda ke dalam bahasa terbalik punya alien." << endl;
    cout << "Silakan ketik kata apapun yang ingin Anda translate.\n" << endl;

    char kata[100];
    cin >> kata;

    cout << "Kata Anda dalam bahasa alien adalah: ";
    balikKata(kata, 0);
    cout << endl;

    return 0;
}