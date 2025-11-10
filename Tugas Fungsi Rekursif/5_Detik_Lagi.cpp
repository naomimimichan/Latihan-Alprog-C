/*
Nama Program: Sebentar Lagi Aku Bangun! (Hitung Mundur)
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 1 Oktober 2025
Deskripsi: Studi Kasus 4 Fungsi Rekursif, Mata Kuliah Algoritma dan Pemrograman-C
*/


// Time taken: 9 minutes
#include <iostream>
using namespace std;

void hitungMundur(int n) {
    if(n == 0) return;
    cout << n << " ";
    hitungMundur(n-1);
}

int main() {
    cout << "Adit sedang tertidur pulas, dan katanya dia akan terbangun dalam 5 detik lagi." << endl;
    cout << "Bangunkanlah Adit!\n" << endl;
    cout << "Silakan input 5 detik." << endl;

    int jawaban;
    cin >> jawaban;

    if(jawaban == 5) {
        cout << "Anda: '";
        hitungMundur(5);
        cout << "'." << endl;
        cout << "Adit: 'Oh, iya! Terima kasih telah membangunkanku.'" << endl;
    } else if(jawaban < 5) {
        cout << "Adit kecepatan bangun dan jadi sering ngantuk di kelas." << endl;
    } else {
        cout << "Adit terlambat masuk sekolah." << endl;
    }

    return 0;
}
