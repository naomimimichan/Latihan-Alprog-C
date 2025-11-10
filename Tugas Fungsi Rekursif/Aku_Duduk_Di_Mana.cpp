/*
Nama Program: Aku Duduk di Mana? (Permutasi)
Nama: Naomi Bennita Eunice Leksauly Marpaung
NPM: 140810250092
Tanggal Buat: 1 Oktober 2025
Deskripsi: Studi Kasus 2 Fungsi Rekursif, Mata Kuliah Algoritma dan Pemrograman-C
*/

// Time taken: 23 minutes
#include <iostream>
using namespace std;

void permutasi(string orang[], bool dipakai[], string susunan[], int n, int idx) {
    if(idx == n) {
        for(int i = 0; i < n; i++) cout << susunan[i] << " ";
        cout << endl;
        return;
    }

    for(int i = 0; i < n; i++) {
        if(!dipakai[i]) {
            dipakai[i] = true;
            susunan[idx] = orang[i];
            permutasi(orang, dipakai, susunan, n, idx+1);
            dipakai[i] = false;
        }
    }
}

int main() {
    cout << "Aku harus duduk di mana?!" << endl;
    
    string orang[] = {"Anna", "Aku", "Amanda"};
    int n = 3;
    string susunan[3];
    bool dipakai[3] = {false, false, false};

    cout << "Kamu bisa duduk di sini:\n";
    permutasi(orang, dipakai, susunan, n, 0);

    return 0;
}