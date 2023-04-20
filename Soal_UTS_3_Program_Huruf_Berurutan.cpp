/*Judul     : Soal UTS 3 "Program Huruf berurutan "
  Nama      : Briyan Yehezkhiel
  NIM       : 221401089
  KOM       : C
  Lab       : 6*/

#include <iostream>
using namespace std;

int main() {
    int n;
    char ch = 'A';
    cout << "Masukkan angka: ";
    cin >> n;
    if (n > 0 && n <= 26)
    {
        for (int i = n; i >= 1; i--) {
            if (i == n) {  // jika i sama dengan n (iterasi pertama)
                for (int j = 2; j <= i; j++) {
                    cout << ch++;
                }
                for (int j = 1; j <= i; j++) {
                    cout << ch--;
                } 
                ch--;
            } else {  // selain iterasi pertama
                for (int j = 1; j <= i; j++) {
                    cout << ch++;
                }
                ch--;
                for (int j = 1; j <= (n - i) * 2 - 1 ; j++) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << ch--;
                }
            }
            ch = 'A';
            cout << endl;
        }
    }
}
