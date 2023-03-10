#include <iostream>

using namespace std;

int tambah(int a, int b){
    int hasil;
    hasil = a + b;
    return hasil;
}

int kurang(int c, int d){
    int hasil;
    hasil = c - d;
    return hasil;
}

int tambahArray(int e[50], int x){
    int hasil;
    for(int i=0; i<x; i++){
        hasil += e[i];
    }
    return hasil;
}

int rataArray(int e[50], int x){
    int hasil;
    hasil = tambahArray(e, x)/x;
    return hasil;
}


int main()
{
    int x, a, b, c, d, e[50];

    //Tambah 2 Bil
    cout<<"Masukkan 2 Bilangan untuk ditambahkan = " <<endl;
    cin >> a;
    cout<< "+\n";
    cin >> b;

    cout << "\nHasil dari pertambahan 2 nilai tersebut adalah " << tambah(a, b);

    //Kurang 2 Bil
    cout<<"\n\nMasukkan 2 Bilangan untuk dikurangkan = \n";
    cin >> c;
    cout<< "-\n";
    cin >> d;

    cout << "\nHasil dari pengurangan 2 nilai tersebut adalah " << kurang(c, d);

    //Tamvah Array
    cout<<"\n\nMasukkan jumlah bilangan yang akan dipakai = ";
    cin >> x;
    cout<<"Masukkan bilangan yang akan ditambahkan = \n";
    for(int i=0; i<x; i++){
        cin >> e[i];
    }

    cout << "\n\nJumlah dari semua bilangan tersebut adalah " << tambahArray(e, x) << endl;

    //Rata rata Array
    cout << "Rata-rata dari semua bilangan tersebut adalah " << rataArray(e, x) << endl;


    return 0;
}

