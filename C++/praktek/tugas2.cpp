// 03032023
// Praktek menghitung harga yang terkena pajak
// Praktek mengimplementasikan berbagai operator di C++

#include <iostream>
using namespace std;

int main()
{
    // mencari harga setelah potongan, harga final
    float harga_setelah_potongan, harga_final;

    // variabel yang diketahui nilainya
    float harga_asli, potongan, pajak;
    harga_asli = 200000;
    potongan = 20000;
    pajak = 1.1;

    harga_setelah_potongan = (harga_asli - potongan) * 1.1;
    harga_final = harga_setelah_potongan * 1.1;

    cout << "Harga setelah potongan: " << harga_setelah_potongan << endl;
    cout << "Harga final: " << harga_final << endl;

    return 0;

}
