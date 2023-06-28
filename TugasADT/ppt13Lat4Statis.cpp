#include <iostream>

using namespace std;

typedef struct murid
{
    int tahunLulus;
    string nim, nama, jurusan;
};

murid lulus[4][4];
int main()
{
    // statis
    lulus[0][0].nim = "A11.2020.01234";
    lulus[0][1].nama = "Andi";
    lulus[0][2].jurusan = "Broadcasting";
    lulus[0][3].tahunLulus = 2023;

    lulus[1][0].nim = "A11.2010.01234";
    lulus[1][1].nama = "Budi";
    lulus[1][2].jurusan = "Sistem Informasi";
    lulus[1][3].tahunLulus = 2013;

    lulus[2][0].nim = "A11.2000.01234";
    lulus[2][1].nama = "Ali";
    lulus[2][2].jurusan = "DKV";
    lulus[2][3].tahunLulus = 2003;

    lulus[3][0].nim = "A11.1990.01234";
    lulus[3][1].nama = "Siti";
    lulus[3][2].jurusan = "Kesehatan";
    lulus[3][3].tahunLulus = 1993;

    cout << "NIM             |Nama           |Jurusan            |Tahun Lulus            |" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                cout << lulus[i][j].nim << "|";
                /* code */
            }
            if (j == 1)
            {
                /* code */
                cout << lulus[i][j].nama << "           |";
            }
            if (j == 2)
            {
                /* code */
                cout << lulus[i][j].jurusan << "            |";
            }
            if (j == 3)
            {
                /* code */
                cout << lulus[i][j].tahunLulus << "             |"
                     << endl;
            }
        }
    }

    return 0;
}