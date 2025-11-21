#include <iostream>

using namespace std;

struct siswa {
    string nama;
    string jeniskelamin;
    unsigned int uangsaku;
};

int main()
{
    struct siswa siswa1;
    siswa1.nama = "Wiz Ripah ";
    siswa1.jeniskelamin = "Lanang";
    siswa1.uangsaku = 271000;

    cout << siswa1.nama << "jenis kelamin nya " << siswa1.jeniskelamin << endl;
    cout << "diberi uang saku " << siswa1.uangsaku << " per hari" << endl;

    return 0;
}
