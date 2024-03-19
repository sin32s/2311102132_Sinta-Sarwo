
// Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

int n_2132, a_2132, i; //Deklarasi variable int n_2132 untuk memilih dalam switch case, a_2132 untuk ukuran array, i digunakan dalam perulangan
int max_2132, min_2132; //Deklarasi variable min_2132 & max_2132 untuk mencari maksimum dan minimum dalam array
double mean_2132; //Deklarasi variable mean_2132 untuk hasil dari hitungan rata-rata array
int lokasi_2132, sum_2132; //Deklarasi lokasi_2132 untuk menyimpan posisi dari maksimum dan minimum

int main() {

    cout << " 2132   Array Operation   2132" << endl;

    //User menginput ukuran array
    cout << "Input the size of array: ";
    cin >> a_2132;
    int Array_2132[a_2132];
    cout << "\n";
    cout << "Input " << a_2132 << " amount of number\n";

    // User meninput nilai array
    for (i = 0; i < a_2132; i++) {
        cout << "Array " << "[" <<i + 1 << "]" << " :";
        cin >> Array_2132[i];
    }

    //Hasil dari inputan array oleh user
    cout << "Data array: ";
    for (i = 0; i < a_2132; i++) {
        cout << Array_2132[i] << ", ";
    }
    cout << "\n" <<endl;

    do {// Program akan looping terus dari tampilan menu untuk mengoperasikan maksimum, minimum, dan rata-rata
    //Menu
        cout << " 2132   Array Operator   2132 \n";
        cout << "1. Maximum\n";
        cout << "2. Minimum\n";
        cout << "3. Average Sum\n";
        cout << "4. Exit program\n";
        cout << "Input your choice: ";
        cin >> n_2132;
        cout << endl;

        switch (n_2132) {
            case 1:
                //Perulangan untuk mencari nilai maksimum dalam array
                cout << " 2132   Maximum Operation   2132 \n";
                max_2132 = Array_2132[0]; //max_2132 menjadi nilai array yang mulai dari indeks 0 dan akan di bandingkan untuk mecari nilai maksimum
                for (int i = 0; i < a_2132; i++) {
                    if (Array_2132[i] > max_2132) {//Nilai array akan di bandingkan untuk mencari nilai maksimum, nilai tersbut akan tersimpan dalam Array_2132[i]
                        max_2132 = Array_2132[i]; //max_2132 akan menyimpan nilai yang disimpan oleh Array_2132[i] dari hasil perbandingan
                        lokasi_2132 = i; //Posisi nilai maksimum  dalam array
                    }
                }
                cout << "The maximum value " << max_2132 << " is on the " << lokasi_2132 + 1 << " position.\n" << endl; //Mencetak hasil nilai dan lokasi nilai maksimum
                break;
            case 2:
                //Perulangan untuk mencari nilai minimum dalam array
                cout << " 2132   Minimum Operation   2132 \n";
                min_2132 = Array_2132[0]; //min_2132 menjadi nilai array yang mulai dari indeks 0 dan akan di bandingkan untuk mencari nilai minimum
                for (i = 0; i < a_2132; i++) {
                    if (Array_2132[i] < min_2132) { //Nilai array akan di bandingkan untuk mencari nilai minimum, nilai tersebut akan tersimpan dalam Array_2132[i]
                        min_2132 = Array_2132[i]; //min_2132 akan menyimpan nilai yang disimpan oleh Array_2132[i] dari hasil perbandingan
                        lokasi_2132 = i; //Posisi nilai minimum dalam array
                    }
                }
                cout << "The minimum value " << min_2132 << " is on the " << lokasi_2132 + 1 << " position.\n" << endl; //Mecetak hasil nilai dan lokasi nilai minimum
                break;
            case 3:
                //Perulangan untuk mencari nilai rata-rata dalam array
                cout << " 2132   Averange Sum Operation   2132 \n";
                sum_2132 = 0;
                for (i = 0; i < a_2132; i++) {//Perulangan untuk menambahkan seluruh julmah array dan mendeklarasikannya sebagain sum_2132
                    sum_2132 += Array_2132[i];
                }
                //Rumus untuk menghitung rata-rata
                mean_2132 = sum_2132 / a_2132;
                cout << "The average of this array is " << mean_2132 << "\n" << endl; //Mencatak hasil perhitungan
                break;
            case 4:
                cout << "Thank you for using 2132 program :D" << endl;
                return 0;
           default:
                cout << "uh... what did you put?? Invalid Command!" << endl;
        }

        }while (n_2132 != 0); //program akan berhenti jika user menginputkan 0 atau 4 dalam pilihan switch case
    
    return 0;
    }