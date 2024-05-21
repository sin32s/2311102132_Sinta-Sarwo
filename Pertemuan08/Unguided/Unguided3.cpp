
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput

using namespace std;

int main(){
    int n = 10; //Deklarasi ukuran array
    int Data_2132[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; //Deklarasi data dalam array
    int Find_2132; //Deklarasi int Find_2132 untuk menyimpan data yang di input oleh user
    int Count_2132 = 0; //Deklarasi int Count_2132 untuk menyimpan berapa banyak data yang di cari


    cout << "   2132       Program Sequential Search       2132   " << endl;
    cout << endl;
    cout << "Data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Input the number you want to count occurrences of: ";
    cin >> Find_2132;

    for (int i = 0; i < n; i++) { //Perulangan untuk menghitung berapa banyak data tersebut
        if (Data_2132[i] == Find_2132){ 
            Count_2132++; //Jika ketemu maka akan di tambah 1 sampai data tersebut selesai
        }
    }

    if (Count_2132 > 0) { //Kondisi jika data yang di input oleh user ditemukan maka akan manampilkan pesan di bawah
        cout << "The number " << Find_2132 << " occurs " << Count_2132 << " times." << endl;
    } else { //Jika data tersebut tidak ditemukan maka akan menampilkan pesan di bawah
        cout << "The number " << Find_2132 << " isn't in the data!" << endl;
    }

    return 0; //Program akan selesai
}