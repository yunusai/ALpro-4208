#include <iostream>

#include <string.h>

using namespace std;//answer1

void gambarGrafik(int arr[], int n)

{

    for(int i=0; i<n; i++)//answer2
    {

        for(int j=0; j<arr[i]; j++)
        {
           cout<<"|";//answer3
        }

       cout<<"\t"<<arr[i]<<endl;

    }

}


void sortingDescending(int arr[], int n)

{

    int i, j, temp, min_idx;

    for(i=0; i<n-1; i++)

    {

        min_idx = i;

        for(j=i+1; j<n; j++)

        {

            if(arr[j] > arr[min_idx])//answer4

            {

              min_idx = j;//answer 5

            }

        }

        temp = arr[min_idx];

        arr[min_idx] = arr[i];

        arr[i] = temp;//answer6

    }

}


int berapaHurufA(string st, int n)//answer7

{

    int count = 0;

    for(int i=0; i<n; i++)

    {

        if(st[i] == 'a' || st[i] == 'A')

        {

            count++;

        }

    }

    return count;

}



void frekuensi(int arrX[], int x, int arrY[], int y)//answer8

{

    int count;

    for(int i=0; i<x; i++)

    {

        count = 0;

        for(int j=0; j<y; j++)

        {

            if(arrX[i] == arrY[j])

              count++;

        }

     cout<<arrX[i]<<" muncul "<<count<<" kali\n";//answer9

    }

}



int main()

{

    int deret_angka[10] = {11,3,4,9,20,22,8,24,16,14};

    int size_deret_angka = sizeof(deret_angka)/sizeof(deret_angka[0]);//answer10



    cout << "Grafik Deret Angka Sebelum Sorting" << endl;

    gambarGrafik(deret_angka, size_deret_angka);//answer11



    cout << "Grafik Deret Angka Setelah Sorting" << endl;

    sortingDescending(deret_angka, size_deret_angka);//answer12

    // visualisasi array setelah sorting

gambarGrafik(deret_angka, size_deret_angka);//answer13

    cout<<"=============================================\n";



    string nama = "Ahmad Alfarizqy Permono";

    int size_nama = nama.length();

    cout<<"Berapa huruf A/a ada string"<<nama<<"?"<<berapaHurufA(nama,size_nama)<<endl;//answer14

    cout<<"=============================================\n";



    int arrayA[5] = {3,22,8,24,14};

    int arrayB[20] = {14,33,4,9,20,22,8,24,16,14,45,33,22,14,8,27,14,42,8,21};

    int size_arrayA = sizeof(arrayA)/sizeof(arrayA[0]);

    int size_arrayB = sizeof(arrayB)/sizeof(arrayB[0]);//answer15



    cout<<"Frekuensi kemunculan arrayA di arrayB sebagai berikut\n";

    frekuensi(arrayA, size_arrayA, arrayB, size_arrayB);



    return 0;

}
