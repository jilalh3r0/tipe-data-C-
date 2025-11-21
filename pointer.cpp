#include <iostream>

using namespace std;

int main()
{
    string var1 = "Ayooo belajar C++";
    string* var2 = &var1; //ini akan mengakses alamat memori yaitu var1 ke dalam var2
    // tanda * untuk mendapatkan tipe data, tanda & menunjukan untuk mengakses alamat memori dan var1 yaitu nama pointernya
    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}
