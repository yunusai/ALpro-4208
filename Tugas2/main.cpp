#include <iostream>

using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int f);
int sumEven(int a[]);
int sumOdd(int a[]);
int maxN(int a, int b);
int minN(int a, int b);
int MaxArray(int a[], int b);
int MinArray(int a[], int b);
bool isFound(int x, int a[], int b);
void swapN(int a, int b);

int main()
{
    int f, a[100], jumlah, bil1, bil2;
    cout << "Masukan angka = ";
    cin >> bil1;
    cout << "Masukan angka sebagai faktor = ";
    cin >> f;
    cout << "Apakah angka tersebut genap? " << isEven(bil1) <<endl;
    cout << "Apakah angka tersebut ganjil? " << isOdd(bil1) <<endl;
    cout << "Apakah angka tersebut faktor dari "<< f <<"? " << isFactor(bil1, f) <<endl;

    cout << "\nMasukan angka untuk dibandingkan = ";
    cin>>bil2;
    cout<<"Angka yang lebih besar adalah "<< maxN(bil1, bil2)<<endl;
    cout<<"Angka yang lebih kecil adalah "<< minN(bil1, bil2)<<endl;

    cout << "\nMasukan besar array = ";
    cin >> jumlah;
    for(int i = 0; i < jumlah; i++){
        cout << "Masukkan angka pada array = ";
        cin >> a[i];
    }
    cout << "\nApakah jumlah dari array tersebut genap? " << sumEven(a)<< endl;
    cout << "Apakah jumlah dari array tersebut ganjil? " << sumOdd(a)<< endl;
    cout << "Bilangan terbesar pada array tersebut adalah " << MaxArray(a, jumlah)<< endl;
    cout << "Bilangan terkecil pada array tersebut adalah " << MinArray(a, jumlah)<< endl;
    cout << "Apakah bilangan " << bil1 <<" ada pada deret? "<<isFound(bil1, a, jumlah)<<endl;

    swapN(bil1, f);

    return 0;
}

bool isEven(int x){
    return x%2==0;
}

bool isOdd(int x){
    return x%2==1;
}

bool isFactor(int x, int f){
    return x%f == 0;
}

int sumEven(int a[]){//mungkin salah
    int tambah = 0;
    int len = sizeof(a);
    for(int i = 0; i < len; i++){
        tambah += a[i];
    }
    return tambah%2 == 0;
}

int sumOdd(int a[]){
    int tambah = 0;
    int len = sizeof(a);
    for(int i = 0; i < len; i++){
            tambah += a[i];
        }
        return tambah%2 == 1;
    }

int maxN(int a, int b){
    int temp;
    if(a>b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}

int minN(int a, int b){
    int temp;
    if(a<b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}

int MaxArray(int a[], int b){
    int temp = 0;
    for(int i = 0; i < b; i++){
        if(a[i]>temp){
            temp = a[i];
            }
        }
        return temp;
}

int MinArray(int a[], int b){
    int temp = 100000000000000000;
    for(int i = 0; i < b; i++){
        if(a[i]<temp){
            temp = a[i];
            }
        }
        return temp;
}
bool isFound(int x, int a[], int b){
    int found;
    for(int i = 0; i < b; i++){
        if(a[i] == x){
            found = 1;
        }
    }
    return found == 1;
}
void swapN(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAngka pertama adalah " << a << endl;
    cout << "Angka faktor adalah " << b << endl;
}
