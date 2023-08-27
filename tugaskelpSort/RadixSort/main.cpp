#include <iostream>

using namespace std;

int getMax(int bilangan[], int banyakBilangan);
void countingSort(int bilangan[], int banyakBilangan, int digit);
void radixSort(int bilangan[], int banyakBilangan);

int main()
{
    int bilangan[100], banyakBilangan;
    cout<<"Masukkan besar array: ";
    cin>>banyakBilangan;
    for(int i = 0; i <banyakBilangan; i++){
        cout<<"Masukkan data/angka ke-"<<i+1 <<": ";
        cin>>bilangan[i];
    }

    cout<<"Sebelum di sorting:"<<endl;
    for(int i = 0; i <banyakBilangan; i++){
        cout<<bilangan[i]<<" ";
    }

    cout<<"\n\nSetelah di sorting:"<<endl;

    radixSort(bilangan, banyakBilangan);//Pemanggilan fungsi

    for(int i = 0; i <banyakBilangan; i++){
        cout<<bilangan[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Fungsi untuk mendapatkan nilai terbesar pada sebuah array
int getMax(int bilangan[], int banyakBilangan) {
    int max = bilangan[0];//membuat data integer dengan nama max sebagai nilai max awal untuk dibandingkan dengan angka lain
    for (int i = 1; i < banyakBilangan; i++) {//fungsi looping pembandingan nilai angka terbesar hingga seluruh bilangan dibandingkan
        if (bilangan[i] > max) {
            max = bilangan[i];
        }
    }
    return max;
}


// Fungsi untuk melakukan counting sort pada array bilangan yang dibuat
// sesuai dengan digit yang dipakai (akan diketahui pada fungsi radix sorting)
void countingSort(int bilangan[], int banyakBilangan, int digit) {
    int hasil[banyakBilangan]; // array untuk menyimpan hasil counting sort
    int count[10] = {0};// array untuk menghitung berapa kali setiap bilangan muncul dalam array

    // loop untuk menghitung berapa kali setiap bilangan muncul dalam array
    for (int i = 0; i < banyakBilangan; i++) {
        count[(bilangan[i] / digit) % 10]++;
    }

    // Menghitung posisi sebenarnya dari setiap digit pada hasil
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // menyusun bilangan pada array hasil
    for (int i = banyakBilangan - 1; i >= 0; i--) {
        hasil[count[(bilangan[i] / digit) % 10] - 1] = bilangan[i];
        count[(bilangan[i] / digit) % 10]--;
    }

    // mengcopy hasil penyusunan ke array bilangan
    for (int i = 0; i < banyakBilangan; i++) {
        bilangan[i] = hasil[i];
    }
}

void radixSort(int bilangan[], int banyakBilangan) {
    int max = getMax(bilangan, banyakBilangan);//pemanggilan fungsi untuk mendapatkan nilai terbesar

    //looping untuk menentukan digit berapa yang akan dihitung pada countingsort
    //digit yang digunakan adalah digit kelipatan 10 untuk mewakilkan satuan, puluhan, ratusan, dan seterusnya
    for (int digit = 1; max / digit > 0; digit *= 10) {
        countingSort(bilangan, banyakBilangan, digit);
    }//akan diulang terus hingga seluruh digit telah dihitung
}
