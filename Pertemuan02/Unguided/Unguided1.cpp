
// Sinta Sarwo - 2311102132

#include <iostream>
using namespace std;

int a_2132, i; //deklarasi int a_2132 untuk ukuran array dan i dalam perulangan

int main() {
    
    cout << "   2132   Array Odd & Even Sorter   2132   \n";
    //User menginput ukuran array
    cout << "Input the size of array: ";
    cin >> a_2132;
    
    //Deklarasi array dengan ukuran yang di input oleh user
    int Array_2132[a_2132]; 
    cout << "\n";

    //User menginput bilangan array
    cout << "input " << a_2132 << " amount of number\n";
    for (i = 0; i < a_2132; i++){ //Perulangan untuk menginput nilai dalam array
        cout << "Array " << "[" << i + 1 << "]" << " :";
        cin >> Array_2132[i];
    }
    cout << endl;

    //Output Array
    cout << "Data Array: ";
    for (i = 0; i < a_2132; i++){
        cout << Array_2132[i] << ",";
    }
    cout << endl;

    //Perulangan untuk menentukan bilangan genap dalam array
    cout << "Nomor Genap: ";
    for (i = 0; i < a_2132; i++){//Logika perulangan
        if (Array_2132[i] % 2 ==0){ //Kondisi untuk mengindetifikasi bilang genap
            cout << Array_2132[i] << ", "; //Mencetak bilanga-bilagan yang sesuai dengan kondisi di atas
        }
    }
    cout << endl;

    //Perulangan untuk menentukan bilang ganjil dalam array
    cout << "Nomor Ganjil: ";
    for (i = 0; i < a_2132; i++){//Logika perulangan
        if (Array_2132[i] % 2 != 0){ //Kondisi untuk menindetifikasi bilangan ganjil
            cout << Array_2132[i] << ", "; //Mencetak bilangan-bilangan yang sesuai dengan kondisi di atas
        }
    }
    cout << endl;

    return 0;
}