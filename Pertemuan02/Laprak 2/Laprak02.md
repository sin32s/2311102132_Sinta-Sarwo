# <h1 align="center">Laporan Praktikum Modul 2 - Array</h1>
<p align="center">Sinta Sarwo - 2311102132</p>

## Dasar Teori
Array..

## Guided 

### 1. Program input array tiga dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
 
 int main()
 {
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++){
            for (int z = 0; z < 3; z++) {
                cout << "Input Array [" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
    cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++){
        for (int y = 0; y < 3; y++){
            for (int z = 0; z < 3; z++){
                cout << "Data Array [" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++){
            for (int z = 0; z < 3; z++) {
                cout << arr[x][y][z] << ends;
            }
        cout << endl;
        }
    cout << endl;
    }
 }
```
Kode di atas...

### 2. Program mencari nilai maksimal pada array

```C++
#include <iostream>
using namespace std;

int main(){
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++){
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] > maks){
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
} 
```
Kode di atas...

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
![Screenshot Unguided Q1](Unguided-Q1_Sinta.png)

```C++

```
#### Output:
![Screenshot Output Unguided 1](Output-Unguided-1-Laprak2_Sinta.png)

Kode di atas...

### 2. Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah ukuran elemennya diinputkan oleh user!

```C++

//Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

int main () {
    
    return 0;
}
```
#### Output:
![Screenshot Output Unguided 2](Output-Unguided-2-Laprak2_Sinta.png)

Kode diatas...

### 3. Buatlah program menut untuk mencari nilai Maksimum, Minimum dan Nilai rata-rata dari suatu array dengan input yang dimasukan oleh user!

```C++

// Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

int main (){

    return 0;
}
```
#### Output:
![Screenshot Output Unguided 3](Output-Unguided-3-Laprak2_Sinta.png)

Kode diatas...

## Kesimpulan
Array...

## Referensi
[1] Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada, 2022.<br/>
