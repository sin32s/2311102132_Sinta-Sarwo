
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <stack>    // Library untuk menggunakan struktur data stack
#include <string>   // Library untuk operasi pada string

using namespace std;

string reverseSentence_2132(string sentence_2132) {
    stack<char> s; // Membuat stack untuk menyimpan karakter kalimat
    string reversed_2132; //Mendeklarasi reversed_2132 untuk menmampung hasil reverse

    if (sentence_2132.length() < 3) { //Kondisi untuk mengeoperasikan fungsi reverseSentence_2132
        return "Sentence must contain at least 3 characters!";
    }

    // Memasukkan setiap karakter dari kalimat ke dalam stack
    for (char c : sentence_2132) {
        s.push(c);
    }

    // Mengambil karakter dari stack dan menambahkannya ke string reversed_2132
    while (!s.empty()) {
        reversed_2132 += s.top();
        s.pop();
    }

    return reversed_2132;
}

int main() {
    string sentence_2132; // mendeklarasi string sentence_2132 untuk inputan yang user akan masukkan
    cout <<"\n   2132       Palindrom Checker       2132   " << endl;

    do{
        cout <<"Input your sentance: ";
        getline(cin, sentence_2132); // getline dapat membaca seluruh baris maka jika ada kalimat yang menggunakan kalimat tetap terbaca, dan Inputan kalimat yang ingin direverse

        string reversed_2132 = reverseSentence_2132(sentence_2132); //Mendeklarasi reversed_2132 untuk menmampung hasil reverse, dan memanggil fungsi reverseSentence_2132 untuk membalikan kalimat
        cout << "Result of the reverse: " << reversed_2132 << endl;
        cout << endl;

    }while (sentence_2132 != "stop"); //Program akan berhenti jika user menginput stop dalam inputan sentence_2132

    return 0;
}