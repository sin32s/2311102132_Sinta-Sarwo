# <h1 align="center">Laporan Praktikum Modul 1 - Tipe Data</h1>
<p align="center">Sinta Sarwo - 2311102132</p>

## Dasar Teori

Tipe data merupakan kategori yang digunakan untuk mengklasifikasikan data berdasarkan sifat dan karakteristiknya. Tiga kategori utama tipe data dalam pemrograman dalam bahasa C++ serta penjelasannya;

**#1. Tipe Data Primitif**

Tipe data primitif merupukan tipe data dasar yang disediakan oleh bahasa pemrograman termasuk C++. Tipe data ini tidak bisa diubah atau dipecah menjadi bagian yang lebih kecil. Berikut adalah contoh tipe data primitif;
    - Bilangan bulat: byte, short, int, long
    - Bilangan desimal: float, double
    - Karakter: char
    - Nilai boolean: boolean (true/false)

2. Tipe Data Abstrak

Tipe data abstrak merupakan tipe data yang dibentuk oleh programmer sendiri. Data abstrak memungkinkan program mengabaikan detail bagaimana tipe data direpresentasikan.

3. Tipe Data Koleksi

Tipe data koleksi atau Collection Data Type merupakan tipe data yang digunkan untuk menyimpan sebuah kelompok data yang mempunyai nilai atau objek secara besamaan. Collection data memungkinkan programmer untuk menyimpan, mengelola, dan mengakses dara besar dengan cara terstruktur. Beberapa tipe data koleksi, yaitu;
    - Array, sebuah data statis yang dapat menyimpan sekelompok elemen dengan tipe data yang sama, elemen tersebut dapat diakses dengan indeks.
    - Vector, mempunyai fungsi mirip dengan array untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memori dilakukan secara otomatis dan bersebelahan.
    - Map, mirip dengan array tetapi memungkinkan untuk lebih dari satu tipe data selain integer dan pada map indeks disebut "key". Map digunakan Self-Balancing Tree khususnya Red-Black Tree.

## Guided 

### 1. Tipe Data Primitif

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

// Sinta Sarwo - 2311102132

#include <iostream>
#include <cmath> // Library untuk fungsi pada perihitungan Area dan Perimeter of Circle

using namespace std;

char n_2132; //Data premitif char untuk pilihan menu n_2132
double r; // Data premitif double untuk bilangan r dalam fungsi CircleArea_2132 & CirclePerimeter_2132
float a, b, c, h; // Data permitif float untuk fungsi AreaTriangle_2132 & TrianglePerimeter_2132

void Menu_2132 (){ //procedur untuk menunjukan pilihan menu Menu_2132
    cout << "\n 2132 Area & Perimeter Calculator 2132 ";
    cout << "\n1. Area of Circle";
    cout << "\n2. Area of Triangle";
    cout << "\n3. Perimeter of Circle";
    cout << "\n4. Perimeter of Triangle";
    cout << "\nInput your choice: ";
    cin >> n_2132; 
}

double CircleArea_2132 (){ // Fungsi untuk menghitung luas lingkaran
    cout << "\n 2132 Area of Circle 2132 "<< endl;
    cout << "Input the radius: ";
    cin >> r;
    cout << "The area of circle is: ";
    return M_PI * pow(r,2); //Mengembalikan hasil luas lingkaran dan pow dan M_PI fungsi dari cmath library
}

double CirclePerimeter_2132 (){ //Fungsi untuk menghitung keliling lingkaran
    cout << "\n 2132 Perimeter of Circle 2132" << endl;
    cout << "Input the radius: ";
    cin >> r;
    cout << "The perimeter of circle is: ";
    return 2 * M_PI * r; //Mengembalikan hasil keliling lingkaran dan M_PI fungsi dari cmath library
}

float AreaTriangle_2132 (){ //Fungsi untuk menghitung luas segitiga
    cout << "\n 2132 Area of Triangle 2132 " << endl;
    cout << "Input the base and height: ";
    cin >> b;
    cout << endl;
    cout << "Input the height: ";
    cin >> h;
    cout << "The area of triangle is: ";
    return b * h * 0.5; //Mengembalikan hasil luas segitiga
}

float TrianglePerimeter_2132 (){ //Fungsi untuk menghitung keliling segitiga
    cout << "\n 2132 Perimeter of Triangle 2132 " << endl;
    cout << "Input the first side of triangle: ";
    cin >> a;
    cout << "Second side of the triangle: ";
    cin >> b;
    cout << "Third side of triangle: ";
    cin >> c;
    cout << "The parameter of triangle is: ";
    return a + b + c; //Mengembalikan hasil keliling segitiga   
}

int main(){
    do {//Looping menu pilihan
        Menu_2132();
        switch (n_2132){ // Switch case untuk memilih menu
            case '1':
            cout << "\n" << CircleArea_2132() << endl; // Jika user memilih 1, maka akan menjalankan fungsi menghitung luas lingkaran
            break;
            case '2':
            cout << "\n" << AreaTriangle_2132() << endl; // Jika user memilih 2, maka akan menjalankan funsgi menghitung luas segitiga
            break;
            case '3':
            cout << "\n" << CirclePerimeter_2132() << endl; // Jika user memilih 3, maka akan menjalankan fungsi menghitung keliling lingkaran
            break;
            case '4':
            cout << "\n" << TrianglePerimeter_2132() << endl; // Jika user memilih 4, maka akan menjalankan fungsi menghitung keliling segitiga
            break;
            default:
            cout << "Invalid command! bai bai!!" << endl; // Jika user tidak memilih 1-4 atau memasukan hal yang lain, maka pesan tersebut akan keluar
            return 0;
        }
    } while (n_2132 != 0); //Looping akan terus berjalan selama user tidak memilih 0

    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2.

```C++

//Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

// Struct terdapat data string RoomType_2132 untuk tipe kamar dan int RoomNumber_2132 untuk nomor kamar
struct Room_2132{
    string RoomType_2132;
    int RoomNumber_2132;
};

//Class terdapat data string title, genre, dan int YearRelease_2132 dalam akses public
class book_2132{
    public:
    string title_2132;
    string genre_2132;
    int YearRelease_2132;
};

int main () {
    cout << " 2132 Declaration of Struct and Class 2132 " <<endl;

    //Deklarasi struct
    Room_2132 tipekamar{"Standard room" , 2132};
    cout << "\n 2132 Room 2132 " << endl;
    cout << "Room type: " << tipekamar.RoomType_2132 << endl;
    cout << "Room Number: " << tipekamar.RoomNumber_2132 << endl;

    //Deklarasi class
    book_2132 book;
    book.title_2132 = "Book of Life";
    book.genre_2132 = "Slice of life";
    book.YearRelease_2132 = 2005;
    cout << "\n 2132 Book 2132 " << endl;
    cout << "Book name: " << book.title_2132 << endl;
    cout << "Book genre: " << book.genre_2132 << endl;
    cout << "Release book: " << book.YearRelease_2132 << endl;

    return 0;
}
```

#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 3.

```C++

// Sinta Sarwo - 2311102132

#include <iostream>
#include <map> // Library untuk menggunakan fungsi map dalam int main

using namespace std;

int main() {
    
    // Deklarasi map dengan key int dan value string
    map<int, string> book_2132;
  
    // Elemen-elemen ke dalam map
    book_2132[1] = "Book of Life";
    book_2132[2] = "The Ugly Ducklings";
    book_2132[3] = "Little Red Riding Hood";
    book_2132[4] = "Snow White";
    book_2132[5] = "Cinderella";
    book_2132[6] = "The Gingerbread Man";
    book_2132[7] = "Rapunzel";

    cout << " 2132 Library Book 2132 " << endl;
    for (int i = 1; i <= book_2132.size(); ++i) { // Looping untuk menampilkan semua elemen pada amap
        cout << "No." << i << " " << book_2132[i] << endl; // Menampilkan elemen map
    }

    return 0;
}
```
## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
