#include <iostream>

using namespace std;

// Buat structure sepeda dengan member :
// Merk = “Polygon”
// Type = “Sepeda Gunung”
// Tahun = 2013
// Harga = “2.000.000”

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
    cout << "Merk: " << sepeda1.Merk << endl;
    cout << "Type: " << sepeda1.Type << endl;
    cout << "Tahun: " << sepeda1.Tahun << endl;
    cout << "Harga: " << sepeda1.Harga << endl;

    return 0;
}