/*Judul     : Soal UTS 2 "Program Kasir "
  Nama      : Briyan Yehezkhiel
  NIM       : 221401089
  KOM       : C
  Lab       : 6*/

#include <iostream>
#include <cctype> //untuk menggunakan sistem toupper yaitu mengubah masukan jadi huruf kapital 
using namespace std;

void baku ()
{
  cout << "=== Ini adalah daftar bahan baku yang kami sediakan : ===" << endl;
  cout << "Kode 1. Tepung Terigu : Rp. 10.000,- /kg" << endl;
  cout << "Kode 2. Gula : Rp. 12.000,- /kg" << endl; 
  cout << "Kode 3. Beras : Rp. 15.000,- /kg" << endl; 
  cout << "Kode 4. Minyak Goreng : Rp. 10.000,- /liter" << endl; 
}

void diskon ()
{
  cout << "=== Ini adalah daftar yang sedang diskon : ===" << endl;
  cout << "Kode T. Tepung Terigu 1Kg : Rp. 9.000" << endl; 
  cout << "Kode G. Gula 1Kg : 10.000" << endl; 
}

int main()
{
  int jumlah_barang = 0, banyak_barang = 0;
  double  total_harga = 0, harga_barang[100], uang_anda, kembalian;  
  string barang_dibeli[100];
  char masukan, pilihan, kode;
  bool nominal;

  system ("CLS");
  cout << "~ Selamat datang di Toko Berkah ini  ~" << endl;
  system("pause");
  do 
  {
    cout << "Keterangan kode menu : " << endl; 
    cout << "B = Baku \nD = Diskon \nR = Reset \nM = Menghitung \nH = History \nS = Stop" << endl; 
    cout << "Silahkan berbelanja!!!"  << endl; 
    cout << "Silahkan masukkan kode anda : ";
    cin >> masukan;
    masukan = toupper(masukan);
    if (masukan == 'B')
    {
      system("CLS");
      cout << "Ini adalah menu barang baku yang tersedia di toko kami, selamat berbelanja..." << endl; 
      baku();
      cout << "Silahkan masukkan kode barang yang akan dibeli sesuai dengan kode yang ditetapkan : ";
      cin >> kode; 
      switch (kode)
      {
        case '1': 
          system("CLS");
          total_harga += 10000;
          harga_barang[jumlah_barang] = 10000;
          barang_dibeli[jumlah_barang]= "Tepung Terigu (1 Kg)"; 
          cout << "Anda akan membeli : \n" << barang_dibeli[jumlah_barang] << "\nDengan total harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        case '2': 
          system("CLS");
          total_harga += 12000;
          harga_barang[jumlah_barang] = 12000;
          barang_dibeli[jumlah_barang]= "Gula (1 Kg)";
          cout << "Anda akan membeli \n" << barang_dibeli[jumlah_barang] << "\nDengan harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        case '3':
          system("CLS");
          total_harga += 15000;
          harga_barang[jumlah_barang] = 15000;
          barang_dibeli[jumlah_barang] = "Beras (1 Kg)";
          cout << "Anda akan membeli : \n" << barang_dibeli[jumlah_barang] << "\nDengan harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        case '4':
          system("CLS");
          total_harga += 10000;
          harga_barang[jumlah_barang] = 10000;
          barang_dibeli[jumlah_barang] = "Minyak Goreng (1 liter)";
          cout << "Anda akan membeli : \n" << barang_dibeli[jumlah_barang] << "\nDengan harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        default:
          cout << "Kode barang tidak dikenali, silahkan lanjutkan" << endl;
          break;
      }
    }
    else if (masukan == 'D')
    {
      system("CLS");
      cout << "Ini adalah menu yang saat ini sedang diskon di toko kami, selamat berbelanja..." << endl;
      diskon();
      cout << "Silahkan masukkan kode barang yang akan dibeli sesuai dengan kode yang ditetapkan : ";
      cin >> kode; 
      kode = toupper(kode);
      switch (kode)
      {
        case 'T':
          system("CLS");
          total_harga += 9000;
          harga_barang[jumlah_barang] = 9000;
          barang_dibeli[jumlah_barang]= "Diskon Beras (1 Kg)";
          cout << "Anda akan membeli : \n" << barang_dibeli[jumlah_barang] << "\nDengan harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        case 'G':
          system("CLS");
          total_harga += 10000;
          harga_barang[jumlah_barang] = 10000;
          barang_dibeli[jumlah_barang] = "Diskon Gula (1 Kg)";
          cout << "Anda akan membeli : \n" << barang_dibeli[jumlah_barang] << "\nDengan total harga : Rp. " << harga_barang[jumlah_barang] << endl;
          jumlah_barang++;
          break;
        default:
          cout << "Kode barang tidak dikenali, silahkan lanjutkan" << endl;
          break;
      } 
    }
    else if (masukan == 'M')
    {
      system("CLS");
      cout << "Ini adalah menu menghitung belanjaan anda dan kembalian anda..." << endl;
      cout << "Barang yang anda beli adalah : " << endl;
      for (banyak_barang = 0; banyak_barang < jumlah_barang; banyak_barang++)
      {
        cout << banyak_barang + 1 << ". " << barang_dibeli[banyak_barang] << " = Rp. " << harga_barang[banyak_barang] << endl;
      }
      cout << "Maka seluruh harga pesanan anda adalah : " << total_harga << endl; 
      cout << "Masukkan nominal uang anda : Rp. "; 
      cin >> uang_anda;
      system("CLS"); 
        if (uang_anda < total_harga)
        {
          cout << "Uang anda tidak mencukupi..." << endl; 
        }
        else if (uang_anda >= total_harga)
        {
          kembalian = uang_anda - total_harga; 
          cout << "Barang yang anda beli adalah : " << endl;
          for (banyak_barang = 0; banyak_barang < jumlah_barang; banyak_barang++)
          {
            cout << banyak_barang + 1 << ". " << barang_dibeli[banyak_barang]  << "= Rp. " << harga_barang[banyak_barang] << endl; 
          }
          cout << "Harga barang anda adalah : Rp. " << total_harga << endl; 
          cout << "Uang anda adalah : Rp. " << uang_anda << endl; 
          cout << "Maka kembalian uang anda adalah : Rp. " << kembalian << endl;
          exit(EXIT_SUCCESS);
        }
        else 
        {
          cout << "Nominal uang anda tidak benar...." << endl; 
        }
    }
    else if (masukan == 'H')
    {
      system("CLS");
      cout << "Ini adalah menu daftar belanja dan harga dari barang yang akan anda beli..." << endl;
        cout << "Anda membeli : " << endl; 
        for (banyak_barang = 0; banyak_barang < jumlah_barang; banyak_barang++)
        {
            cout << banyak_barang + 1 << ". " << barang_dibeli[banyak_barang];
            cout << " = Rp.  " << harga_barang[banyak_barang] << endl;
        }
        cout << "Dengan total harga keseluruhan : " << total_harga << endl;
      }
    else if (masukan == 'R')
    {
      system("CLS");
      cout << "Ini adalah menu barang belanjaan anda yang akan di reset ke kosong..." << endl;
      system ("pause");
      total_harga = 0; 
      for (banyak_barang = 0; banyak_barang < jumlah_barang; banyak_barang++)
      {
        barang_dibeli[banyak_barang] = ""; 
        harga_barang[banyak_barang] = 0; 
      }
      cout << "barang anda beli sekarang adalah : " << endl; 
      for (banyak_barang = 0; banyak_barang < jumlah_barang; banyak_barang++)
      {
        cout << barang_dibeli[banyak_barang] << endl;
      }
      cout << "Dengan total biaya = Rp. " << total_harga << endl;
      cout << "Seluruh barang yang dibeli telah direset, silahkan kembali berbelanja" << endl;
    }
    else if (masukan == 'S')
    {
      system("CLS");
      cout << "Terima kasih telah berbelanja, silahkan datang kembali...." << endl; 
      exit(EXIT_SUCCESS);
    }
    else
    {
      system("CLS");
      cout << "Masukan anda salah, silahkan ulangin kembali menggunakan program kami." << endl;
      cout << "Semua daftar belanja anda barusan akan tetap disimpan. " << endl;
      cout << "Terima kasih..." << endl;
    }
    cout << "Untuk menghitung belanjaan, silahkan kembali ke menu utama..." << endl; 
    cout << "Apakah anda ingin kembali ke halaman utama? (Y/N): "; 
    cin >> pilihan;
    pilihan = toupper(pilihan);
    system("cls");
  }
  while (pilihan == 'Y');
  cout << "Terima kasih telah berbelanja, Silahkan datang kembali.. " << endl; 
}