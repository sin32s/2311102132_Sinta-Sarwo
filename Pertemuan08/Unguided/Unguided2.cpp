
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <string>   // Library untuk fungsi string

using namespace std;

bool isVowel_2132(char c){ //Fungsi pengechekan huruf vokal
    c = tolower(c); // Mengubah huruf menjadi huruf kecil untuk mempermudah pengecekan
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int CountVowels_2132(const string &sentence) { //Fungsi untuk menghitung berapa banya huruf vokal dalam kalimat
    int count = 0;
    for (char c : sentence) { //Perulangan untuk pengechekan huruf vokal
        if (isVowel_2132(c)) {
            count++; //Jika ketemu maka akan di tambah 1 sampai kalimat tersebut selesai
        }
    }
    return count; //Fungsi akan mengembalikan berapa banyak huruf vokal dalam kalimat
}

int main(){
    string Sentence_2132;//Deklarasi string Sentence_2132 untuk menyimpan kalimat yang di input user
    char Letter_2132; // Deklarasi char Letter_2132 untuk menyimpan huruf yang ingin di cari oleh user

    do{ //Looping
        cout << "\n   2132       Program Sequential Search Vowels        2132   " << endl;

        cout << "Input your sentence: ";
        getline(cin, Sentence_2132); // getline dapat membaca seluruh baris maka jika ada kalimat yang menggunakan kalimat tetap terbaca, dan Inputan kalimat yang ingin dicheck

        int Count_2132 = CountVowels_2132(Sentence_2132); //Deklarasi int Count_2132 untuk menyimpan hasil pengembalian fungsi int CountVowels_2132
        cout << "\nThe sentence contains " << Count_2132 << " vowels." << endl;

    }while(Sentence_2132 != "Exit"); //Program akan berhenti jika user menginput "Exit" dalam inputan sentence_2132
    return 0;

}