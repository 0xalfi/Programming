// 030032023
// Praktek menghitung harga jika memiliki diskon dan pajak

#include <iostream>
using namespace std;

int main()
{

    // variabel yang diketahui isinya
    float harga_barang, diskon, pajak;
    harga_barang = 150000;
    diskon = 0.3;
    pajak = 0.1;

    /*
    Rumus:
    harga setelah diskon = harga barang - (harga barang - diskon)
    harga setelah pajak = harga setelah diskon + (pajak * harga setelah diskon)
    */

    // mencari harga setelah diskon
    float harga_setelah_diskon = harga_barang - (harga_barang * diskon);

    // mencari harga setelah pajak
    float harga_setelah_pajak = harga_setelah_diskon + (pajak * harga_setelah_diskon);

    // mencari harga akhir
    float harga_akhir = harga_setelah_pajak;

    cout << harga_akhir << endl;

    return 0;
}
