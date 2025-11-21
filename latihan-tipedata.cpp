//Tugas tipe data biodata

#include <iostream>

using namespace std;
 int main(){
     string nama;
     string jurusan;
     int umur;
     float tinggiBadan;

     cout << "Masukkan nama: ";
     getline(cin, nama);

     cout << "Masukkan jurusan: ";
     getline(cin, jurusan);

     cout << "umur: ";
     cin >> umur;

     cout << "tinggiBadan: ";
     cin >> tinggiBadan;

     cout << endl;

     cout << "==================   BIODATA  ======================" << endl;
     cout << nama << " Jurusan saya " << jurusan << endl;
     cout << "Umur saya " << umur << endl;
     cout << "tinggi badan saya " << tinggiBadan << endl;
 }
