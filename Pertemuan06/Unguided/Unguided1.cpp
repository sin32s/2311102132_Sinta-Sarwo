
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <stack>    // Library untuk menggunakan struktur data stack

using namespace std;

bool PalindromChecker_2132(string sentence_2132){ //Operasi untuk memerikasa jika kalimat adalah palindrom atau tidak
    for (int i = 0; i < sentence_2132.length(); i++){ // Mengkonversi kalimat ke huruf kecil
        sentence_2132[i] = tolower(sentence_2132[i]);
    }

    stack<char> s; // Membuat stack untuk menyimpan karakter kalimat

    for (int i = 0; i < sentence_2132.length(); i++){ // Masukkan karakter kalimat ke dalam stack
        s.push(sentence_2132[i]);
    }

    for (int i = 0; i < sentence_2132.length() / 2; i++){ // Operasi untuk membandingkan karakter dari depan dan belakang kalimat
        if (sentence_2132[i] != s.top()){
            return false;
        }
        s.pop();
    }

    return true;
}

int main(){

    string sentence_2132; // mendeklarasi string sentence_2132 untuk inputan yang user akan masukkan
    cout <<"\n   2132       Palindrom Checker       2132   " << endl;

    do
    {
        cout <<"Input your sentance: ";
        getline(cin, sentence_2132); // getline dapat membaca seluruh baris maka jika ada kalimat yang menggunakan kalimat tetap terbaca, dan Inputan kalimat yang ingin dicheck

        if(PalindromChecker_2132(sentence_2132)){// Memanggil fungsi PalindromChecker_2132
            cout << sentence_2132 << " is a palindrom sentence!"<< endl; //jika kalimat tersebut palindrom maka program akan menampilkan baris ini
            cout << endl;
        }else{
            cout << "tetot! " <<sentence_2132 << " is NOT a palindrom sentence!"<< endl; // jika tidak maka menampilkan baris ini
            cout << endl;
        }
    } while(sentence_2132 != "stop"); //Program akan berhenti jika user menginput stop dalam inputan sentence_2132
    return 0;
}