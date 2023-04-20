/*Judul     : Soal UTS 1 "Merubah integer menjadi string "
  Nama      : Briyan Yehezkhiel
  NIM       : 221401089
  KOM       : C
  Lab       : 6*/

#include <iostream>
using namespace std;

int main ()
{
  int angka; 
  // Masukan 
  cout << "Masukkan angka yang akan di ubah menjadi string : ";
  cin >> angka;
  system ("CLS");
  // Proses
  cout << "Masukkan string anda adalah : " << angka << endl;
  string diubah = to_string(angka);
  //Keluaran
  cout << " Setelah diubah menjadi integer maka : " << diubah << endl;
  //Bukti 
  cout << "Hasil dari angka + angka adalah : " << angka + angka << endl;
  cout << "Hasil dari string + string adalah : " << diubah + diubah << endl; 
}