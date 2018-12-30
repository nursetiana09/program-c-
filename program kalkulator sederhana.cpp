#include <iostream>
using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "selamat datang di program kalkulator \n \n";

    cout << "masukan nilai pertama: ";
    cin >> a;
    cout << "pilih operator + - / * : ";
    cin >> aritmatika;
    cout << "masukan nilai kedua; ";
    cin >> b;

    cout <<"\nNilai perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '+')     //untuk penjumlahan
        {hasil = a + b;}
     else if (aritmatika == '-')   //untuk pengurangan
         {hasil = a - b;}
      else if (aritmatika == '/')   //untuk pembagian
      {hasil = a / b;}
       else if (aritmatika == '*')  //untuk perkalian
      {hasil = a * b;}
       else
       {cout << "operator anda salah" << endl;}

    cout << " = " << hasil << endl;

    return 0;
}


