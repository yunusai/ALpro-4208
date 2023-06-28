#include <iostream>

using namespace std;
// hitung fungsi berikut menggunakan structure dengan member:
// Luas Persegi Panjang = panjang x lebar
// Luas Lingkaran = 22/7 * r * r
// Volume Kerucut = 1/3 * phi * r2 * t
// Volume Bola = 4/3 * phi * r3

typedef struct rumus
{
    int p, l, r, t;
    float phi = 3.14;

    int persegiPanjang()
    {
        return p * l;
    }

    float lingkaran()
    {
        return 22.0 / 7 * r * r;
    }

    float kerucut()
    {
        return 1.0 / 3 * phi * r * r * t;
    }

    float bola()
    {
        return 4.0 / 3 * phi * r * r * r;
    }
};

rumus bangun;

int main()
{
    // Mengisi nilai panjang dan lebar persegi panjang
    bangun.p = 10;
    bangun.l = 10;
    bangun.r = 20;
    bangun.t = 10;

    // Menghitung luas persegi panjang

    // Menampilkan hasil luas
    cout << "Luas persegi panjang: " << bangun.persegiPanjang() << endl;
    cout << "Luas lingkaran: " << bangun.lingkaran() << endl;
    cout << "Volume kerucut: " << bangun.kerucut() << endl;
    cout << "Volume bola: " << bangun.bola() << endl;
    return 0;
}