/*Judul : Soal UTS 3 "Program Huruf berurutan "
Nama : Briyan Yehezkhiel
NIM : 221401089
KOM : C
Lab : 6*/

// Inklusi pustaka input/output stream pada bahasa C++
#include <iostream>

// Menggunakan namespace std agar tidak perlu menuliskan "std::" pada setiap pemanggilan fungsi
using namespace std;

// Fungsi utama
int main() {
int n; // deklarasi variabel untuk menyimpan jumlah baris
char ch = 'A'; // deklarasi variabel untuk menyimpan huruf yang akan ditampilkan
cout << "Masukkan angka: "; // menampilkan pesan untuk meminta input dari user
cin >> n; // meminta input dari user untuk jumlah baris

// melakukan pengecekan apakah n berada dalam rentang 1-26
if (n > 0 && n <= 26)
{
    // melakukan pengulangan sebanyak n kali, dimulai dari n dan decrement setiap iterasi
    for (int i = n; i >= 1; i--) {
        if (i == n) {  // jika i sama dengan n (iterasi pertama)
            // melakukan pengulangan sebanyak 2 - i kali dan menampilkan huruf yang berurutan
            for (int j = 2; j <= i; j++) {
                cout << ch++;
            }
            // melakukan pengulangan sebanyak i kali dan menampilkan huruf yang berurutan (mulai dari huruf terakhir pada pengulangan sebelumnya)
            for (int j = 1; j <= i; j++) {
                cout << ch--;
            } 
            ch--; // mengembalikan nilai ch ke nilai sebelumnya
        } else {  // selain iterasi pertama
            // melakukan pengulangan sebanyak i kali dan menampilkan huruf yang berurutan
            for (int j = 1; j <= i; j++) {
                cout << ch++;
            }
            ch--; // mengurangi nilai ch sebanyak 1
            // melakukan pengulangan sebanyak (n - i) * 2 - 1 kali dan menampilkan spasi
            for (int j = 1; j <= (n - i) * 2 - 1 ; j++) {
                cout << " ";
            }
            // melakukan pengulangan sebanyak i kali dan menampilkan huruf yang berurutan (mulai dari huruf terakhir pada pengulangan sebelumnya)
            for (int j = 1; j <= i; j++) {
                cout << ch--;
            }
        }
        ch = 'A'; // mengembalikan nilai ch ke 'A'
        cout << endl; // menampilkan karakter baris baru
    }
}
}