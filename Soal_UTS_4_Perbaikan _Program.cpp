/*Judul     : Soal UTS 4 "Perbaikan program"
  Nama      : Briyan Yehezkhiel
  NIM       : 221401089
  KOM       : C
  Lab       : 6*/

#include <iostream>
using namespace std;

int main() {
    float angka, total = 0, rata;
    int jumlah;

    cout << "Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;
    jumlah -= 1;
    for (int i = 0; i <= jumlah; i++) {
        cout << "Masukkan angka: ";
        cin >> angka;
        total = total + angka;
    }
    cout << "Total: " << total << endl;
    rata = total / (jumlah + 1);
    cout << "Rata-rata: " << rata << endl;
}
// selesai