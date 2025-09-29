/*
Nama Program: Printer Inisial berdasarkan Input Ketebalan
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 29 September 2025
Deskripsi: Soal 3 Quiz Praktikum Algoritma dan Pemrograman
*/

#include <iostream>
using namespace std;

//Time expected: 5 minutes
//Huruf yang di-print berdasarkan ketebalan adalah huruf 'A'

void angka(int &n) {
    cin >> n;
}

int ketebalan(int n) {
    // Horizontal atas
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n * 5; j++) cout << "A";

        cout << endl;
    }
    // Vertikal atas
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cout << "A";

        for(int j = 1; j <= n * 3; j++) cout << " ";

        for(int j = 1; j <= n; j++) cout << "A";

        cout << endl;
    }
    // Horizontal Bawah
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n * 5; j++) cout << "A";

        cout << endl;
    }
    //Vertikal bawah
    for(int i = 1; i <= n * 2; i++) {
        for(int j = 1; j <= n; j++) cout << "A";

        for(int j = 1; j <= n * 3; j++) cout << " ";

        for(int j = 1; j <= n; j++) cout << "A";

        cout << endl;
    }

    return 0;
}

int main() {
    int n;
    angka(n);

    ketebalan(n);
    cout << endl;

    return 0;
}

// Expected: 5 minutes
// Time taken: 12 minutes

// Mistakes made: 
// 1. On line 19-23, wrong placement of "cout << endl;" that caused A to print continuously vertically and not forming a box.
