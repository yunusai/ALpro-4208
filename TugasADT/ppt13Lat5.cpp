#include <iostream>

using namespace std;

struct sepeda
{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    string Harga = "2.000.000";
    int Tahun = 2013;
};
struct sepeda sepeda1;

int main()
{
    sepeda *pSepeda = &sepeda1;

    cout << "Merk: " << pSepeda->Merk << endl;
    cout << "Type: " << pSepeda->Type << endl;
    cout << "Tahun: " << pSepeda->Tahun << endl;
    cout << "Harga: " << pSepeda->Harga << endl;

    return 0;
}