# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Arvinanto Bahtiar</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. Tipe data primitif

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two operands : ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout <<"Result : " << num1 + num2;
        break;
    case '-':
        cout << "Result : " << num1 - num2;
        break;
    case '*':
        cout << "Result : " << num1 * num2;
        break;
    case '/':
        if (num2 != 0){
            cout << "Result: " <<fixed<<setprecision(2)<<num1/num2;
            break;
        }else{
            cout << "Error! Division by zero is not allowed.";
            break;
        }
        default:
            cout <<"Error! operator is not correct";
            break;
    }
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Tipe data abstarak

```C++
#include <stdio.h>
#include <string.h>

//Struct
struct Mahasiswa
{
    char name[50];
    char address[100];
    int age;
};

int main(){
    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    //mengisi nilai struct
    strcpy(mhs1.name, "Dian");
    strcpy(mhs1.address, "Mataram");
    mhs1.age = 22;
    strcpy(mhs2.name, "Bambang"); 
    strcpy(mhs2.address, "Surabaya"); 
    mhs2.age = 23; 
     
    // mencetak isi struct 
    printf("## Mahasiswa 1 ##\n"); 
    printf("Nama: %s\n", mhs1.name); 
    printf("Alamat: %s\n", mhs1.address); 
    printf("Umur: %d\n", mhs1.age); 
    printf ("\n"); 
    printf("## Mahasiswa 2 ##\n"); 
    printf("Nama: %s\n", mhs2.name); 
    printf("Alamat: %s\n", mhs2.address); 
    printf("Umur: %d\n", mhs2.age); 
    return 0; 
} 
```
Kode diata...

### 3. Tipe data koleksi
```C++
#include <iostream> 
#include <array> 
using namespace std; 
 
int main() { 
    // Deklarasi dan inisialisasi array 
    int nilai[5]; 
    nilai[0] = 23; 
    nilai[1] = 50; 
    nilai[2] = 34; 
    nilai[3] = 78; 
    nilai[4] = 90; 
 
    // Mencetak array dengan tab 
    cout << "Isi array pertama  : " << nilai[0] << endl; 
    cout << "Isi array kedua    : " << nilai[1] << endl; 
    cout << "Isi array ketiga   : " << nilai[2] << endl; 
    cout << "Isi array keempat  : " << nilai[3] << endl; 
    cout << "Isi array kelima   : " << nilai[4] << endl; 
 
    return 0; 
}
```
Kode di atas....

## Unguided 

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
