
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <string>   // Library untuk fungsi string
#include <algorithm>// Library untuk fungsi sort

using namespace std;

// Binary search untuk mencari huruf dalam kalimat yang di input oleh user
void BinarySearch_2132(const string& str, char find){
    int awal, akhir, tengah;
    bool b_flag = false;
    awal = 0;
    akhir = str.length() - 1;

    while(!b_flag && awal <= akhir){
        tengah = (awal + akhir) / 2;
        if(str[tengah] == find){
            b_flag = true;
        } else if(str[tengah] < find){
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag){
        cout << "\nLetter '" << find << "' have been found in index " << tengah << endl;
    } else {
        cout << "\nLetter can't be find in this sentence!" << endl;
    }
}


int main(){
    string Sentence_2132; //Deklarasi string Sentence_2132 untuk menyimpan kalimat yang di input user
    char Letter_2132; // Deklarasi char Letter_2132 untuk menyimpan huruf yang ingin di cari oleh user

    cout << "   2132       Program Binary Search Letter       2132   " << endl;
    cout << endl;

    cout << "Input your sentence: ";
    getline(cin, Sentence_2132); // getline dapat membaca seluruh baris maka jika ada kalimat yang menggunakan kalimat tetap terbaca, dan Inputan kalimat yang ingin dicheck

    for (char &c : Sentence_2132){ //Perulangan yang membuat kalimat inputan menjadi huruf kecil agar mempermudah proses pengechekan
        c = tolower(c); // Mengubah huruf menjadi huruf kecil untuk mempermudah pengecekan
    }

    sort(Sentence_2132.begin(), Sentence_2132.end()); //Sentence_2132 yang telah di ubah menjadi huruf kecil akan di urutkan secara alphabet menggunkan fungsi sort
    cout << "Letters sorted in alphabetical order: " << Sentence_2132 << endl;

    cout << "Input the letter your searching for: ";
    cin >> Letter_2132;

    BinarySearch_2132(Sentence_2132, Letter_2132); //Memanggil BinarySearch_2132 untuk mecari huruf yang ingin di cari

    return 0;
}