
// Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

int Sizex_2132, Sizey_2132, Sizez_2132; //Deklarasi int untuk ukuran array 3 dimensi

int main() {
    cout << " 2132   3 Dimentional Array   2132 \n";
    //User akan menentukan ukuran ke tiga array
    cout << "Input size 'x' in the array: ";
    cin >> Sizex_2132;
    cout << "Input size 'y' in the array: ";
    cin >> Sizey_2132;
    cout << "Input size 'z' in the array: ";
    cin >> Sizez_2132;

    //Deklarasi array 3 dimensi dengan ukuran yang telah di input oleh user
    int Array_2132[Sizex_2132][Sizey_2132][Sizez_2132];

    //Perulangan untuk menginput nilai dalam array 3 dimensi
    for (int x = 0; x < Sizex_2132; x++){//nilai dalam array x
        for (int y = 0; y < Sizey_2132; y++){//nilai dalam array y
            for (int z = 0; z < Sizez_2132; z++){//nilai dalam z
                cout << "Input Array [" << x << "][" << y << "][" << z << "] = ";
                cin >> Array_2132[x][y][z];
            }
        }
    cout << endl;
    }

    //Logika perulangan untuk mencetak Array 3 dimensi
    for (int x = 0; x < Sizex_2132; x++) {
        for (int y = 0; y < Sizey_2132; y++){
            for (int z = 0; z < Sizez_2132; z++) {
                cout << Array_2132[x][y][z] << ends;
            }
        cout << endl;
        }
    cout << endl;
    }
    return 0;
}