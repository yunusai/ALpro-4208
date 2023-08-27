#include <iostream>

using namespace std;

void printByValue(int *x, float *y, char *z)
{
     cout << "Nilai dari iPtr : " << x << endl;
     cout << "Alamat dari iPtr : " << &x << endl;
     cout << "Nilai dari fPtr : " << y << endl;
     cout << "Alamat dari fPtr : " << &y << endl;
     cout << "Nilai dari cPtr : " << z << endl;
     cout << "Alamat dari cPtr : " << &z << endl
          << endl;
}

void printByReference(int &x, float &y, char &z)
{

     cout << "Nilai dari iNumber : " << x << endl;
     cout << "Alamat dari iNumber : " << &x << endl;
     cout << "Nilai dari fNumber : " << y << endl;
     cout << "Alamat dari fNumber : " << &y << endl;
     cout << "Nilai dari cChar : " << z << endl;
     cout << "Alamat dari cChar : " << &z << endl
          << endl;
}

int main()

{
     int iNumber = 100;
     float fNumber = 0.2;
     char cChar = 'X';

     int *iPtr = &iNumber;
     float *fPtr = &fNumber;
     char *cPtr = &cChar;

     printByValue(iPtr, fPtr, cPtr);
     printByReference(iNumber, fNumber, cChar);

     return 0;
}