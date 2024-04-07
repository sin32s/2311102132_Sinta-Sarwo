
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <iomanip>  // Library untuk memanipulasikan output untuk menjadi lebih rapi
#include <vector>   // Library yang menyediakan stuktur data array yang dinamis 
#include <string>   // Library untuk menyimpan dan memanipulasi data string (menggabungkan string, membandingkan string, mengekstrak substring, dan mengganti substring.)

using namespace std;

const int TableSize_2132 = 100; //Deklarasi const int TableSize_2132 untuk limit ukuran data yang dapat disimpan

// Struktur Data Untuk Setiap Node
struct Node
{
    string Name_2132;
    long long int NIM_2132;
    float Score_2132;
};

// Struktur data untuk setiap node
class HashNode
{
    // Deklarasi variabel
public:
    string Name_2132; // Deklarasi string Name_2132 untuk menyimpan nama mahasiswa
    long long int NIM_2132; // Deklarasi long long int NIM_2132 untuk menyimpan NIM mahasiswa
    int Score_2132; // Deklarasi int Score_2132 untuk menyimpan nilai mahasiswa

    HashNode(string name, long long int nim, int score)
    {
        this->Name_2132 = name;
        this->NIM_2132 = nim;
        this->Score_2132 = score;
    }
};

// Class HashMap
class HashMap
{
private:
    // Deklarasi vector table dengan ukuran TableSize_2132
    vector<HashNode *> table[TableSize_2132];

public:
    // Fungsi Hash Sederhana
    int hashFunc(string key)
    {
        int hash_val = 0;
        for (char c : key)
        {
            hash_val += c;
        }
        return hash_val % TableSize_2132;
    }

    // Menambahkan data mahasiswa
    void InsertData_2132(string name, long long int nim, int score)
    {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val])
        {
            if (node->Name_2132 == name)
            {
                node->NIM_2132 = nim;
                node->Score_2132 = score;
                cout << "Student data with the name of " << name << " have succefuly been added." << endl;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, nim, score));
    }

    // Menghapus data mahasiswa
    void Remove_2132(string name)
    {
        int hash_val = hashFunc(name);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); ++it)
        {
            if ((*it)->Name_2132 == name)
            {
                delete *it;
                table[hash_val].erase(it);
                cout << "Student data with the name of " << name << " has been deleted." << endl;
                return;
            }
        }
    }

    // Mencari data mahasiswa dengan nama mahasiswa
    void SearchByName_2132(string name)
    {
        bool found = false;
        for (int i = 0; i < TableSize_2132; ++i)
        {
            for (auto node : table[i])
            {
                if (node->Name_2132 == name)
                {
                    // Setw digunakan untuk menentukan lebar kolom dan merapikan output 
                    cout << "\n      2132    Searching Student Data by Name    2132    " << endl;
                    cout << " -------------------------------------------------------" << endl;
                    cout << left << "| " << setw(20) << "Nama" << "| " << setw(20) << "NIM" << "| " << setw(10) << "Score" << "|" << endl;
                    cout << " -------------------------------------------------------" << endl;
                    cout << "| " << left << setw(20) << node->Name_2132 << "| " << left << setw(20) << node->NIM_2132 << "| " << left << setw(10) << node->Score_2132 << "|" << endl;
                    cout << " -------------------------------------------------------" << endl;
                    found = true;
                    return;
                }
            }
        }
        if (!found) // Kondisi jika nama mahasiswa tidak dapat ditemukan dalam table
        {
            cout << "Student data with the name of " << name << " cannot be found." << endl;
        }
    }

    // Mecari data Mahasiswa dengan NIM mahasiswa
    void SearchByNIM_2132(long long int nim)
    {
        bool found = false;
        for (int i = 0; i < TableSize_2132; ++i)
        {
            for (auto node : table[i])
            {
                if (node->NIM_2132 == nim)
                {
                    // Setw digunakan untuk menentukan lebar kolom dan merapikan output
                    cout << "\n      2132    Searching Student Data by NIM    2132     " << endl;
                    cout << " -------------------------------------------------------" << endl;
                    cout << left << "| " << setw(20) << "Nama" << "| " << setw(20) << "NIM" << "| " << setw(10) << "Score" << "|" << endl;
                    cout << " -------------------------------------------------------" << endl;
                    cout << "| " << left << setw(20) << node->Name_2132 << "| " << left << setw(20) << node->NIM_2132 << "| " << left << setw(10) << node->Score_2132 << "|" << endl;
                    cout << " -------------------------------------------------------" << endl;
                    found = true;
                    return;
                }
            }
        }
        if (!found) // Kondisi jika NIM mahasiswa tidak dapat ditemukan dalam table
        {
            cout << "Student data with the nim of " << nim << " cannot be found." << endl;
        }
    }

    // Mencari data mahasiswa dengan rentang nilai
    void SearchByScoreRange_2132(int Min_2132, int Max_2132) // Deklrasi int Min_2132 dan int Max_2132 untuk menyimpan nilai rentang yang akan di cari dalam table
    {
        bool found = false;

        // Setw digunakan untuk menentukan lebar kolom dan merapikan output
        cout << "\n   2132   Searching Student Data by Score Range   2132   " << endl;
        cout << " -------------------------------------------------------" << endl;
        cout << left << "| " << setw(20) << "Name"<< "| " << setw(20) << "NIM" << "| " << setw(10) << "Score" << "|" << endl;
        cout << " -------------------------------------------------------" << endl;
        for (int i = 0; i < TableSize_2132; ++i)
        {
            for (auto node : table[i])
            {
                if (node->Score_2132 >= Min_2132 && node->Score_2132 <= Max_2132) // Kondisi jika data mahasiswa terdapat dalam rentang nilai yang di input
                {
                    cout << "| " << left << setw(20) << node->Name_2132<< "| " << left << setw(20) << node->NIM_2132 << "| " << left << setw(10) << node->Score_2132 << "|" << endl;
                    found = true;
                }
            }
        }
        if (!found) // Kondisi jika tidak ada data mahasiswa dengan rentang nilai yang di input oleh user
        {
            cout << "There is no Student data score with the range of " << Min_2132 << "-" << Max_2132 << "." << endl;
        }
        cout << " -------------------------------------------------------" << endl;
    }

    // Tampilkan data
    void PrintData_2132()
    {
        // Menampilkan data-data mahasiswa menggunakan setw untuk menentukan lebar kolom dan merapikan output
        cout << "\n         2132         Student Data         2132         " << endl;
        cout << " -------------------------------------------------------" << endl;
        cout << left << "| " << setw(20) << "Name" << "| " << setw(20) << "NIM" << "| " << setw(10) << "Score" << "|" << endl;
        cout << " -------------------------------------------------------" << endl;
        for (int i = 0; i < TableSize_2132; ++i)
        {
            for (auto pair : table[i])
            {
                cout << "| " << left << setw(20) << pair->Name_2132 << "| " << left << setw(20) << pair->NIM_2132  << "| " << left << setw(10) << pair->Score_2132 << "|" << endl;
            }
        }
        cout << " -------------------------------------------------------" << endl;
    }
};

int main(){
    HashMap student_map;
    int Choice_2132; // Deklarasi Choice_2132 untuk menjadi inputan dalam switch-case
    string name_2132; // Deklarasi name_2132 untuk variable (data nama mahasiswa) yang akan menyimpan inputan user nanti pada switch-case
    long long int nim_2132; // Deklarasi nim_2132 untuk variable (data nim mahasiswa) yang akan menyimpan inputan user nanti pada switch-case
    int score_2132; // Deklarasi score_2132 untuk variable (data nilai mahasiswa) yang akan menyimpan inputan user nanti pada switch-case
    int SearchScore1_2132; // Deklarasi SearchScore1_2132 untuk menyimpan nilai minimum dalam operasi SearchByScoreRange_2132
    int SearchScore2_2132; // Deklarasi SearchScore1_2132 untuk menyimpan nilai maximum dalam operasi SearchByScoreRange_2132

    while (true){
        cout <<"\n   2132   Menu Data Mahasiswa   2132   "; //Menu untuk memberi user pilihan untuk menggunakan fungsi-fungsi di dalam program
        cout <<"\n1. Add New Student Data";
        cout <<"\n2. Delete Student Data";
        cout <<"\n3. Search Student Data by Name";
        cout <<"\n4. Search Student Data by NIM";
        cout <<"\n5. Search Student Data by Score Range";
        cout <<"\n6. Showcase Student Data";
        cout <<"\n0. Exit program" << endl;
        cout <<"\nInput choice: ";
        cin >> Choice_2132; // Inputan user untuk berinteraksi dengan program

        switch (Choice_2132){
            case 1:{
                cout << "\n     2132      Add New Student Data      2132     " << endl;
                cout << "Input student name: ";
                cin >> name_2132; // Input nama mahasiswa yang ingin ditambahkan
                cout << "Input student NIM: ";
                cin >> nim_2132; // Input nim mahasiswa yang ingin ditambahkan
                cout << "Input student score: ";
                cin >> score_2132; // Input nilai mahasiswa yang ingin ditambahkan
                student_map.InsertData_2132(name_2132, nim_2132, score_2132); // Memanggil fungsi InsertData_2132
                break;
            }
            case 2:{
                cout << "\n      2132     Delete Student Data     2132      " << endl;
                cout << "Input student name: ";
                cin >> name_2132; // Input nama mahasiswa yang ingin di hapus
                cout << endl;
                student_map.Remove_2132(name_2132); // Memanggil fungsi Remove_2132
                break;
            }
            case 3:{
                cout << "\n   2132    Searching Student Data by Name    2132   " << endl;
                cout << "Input student name: ";
                cin >> name_2132; // Input nama mahasiswa yang ingin dicari
                student_map.SearchByName_2132(name_2132); // Memanggil fungsi SeachByName_2132
                break;
            }
            case 4:{
                cout << "\n    2132   Searching Student Data by NIM   2132   " << endl;
                cout << "Input student NIM: ";
                cin >> nim_2132; //Input nim mahasiswa yang ingin dicari
                student_map.SearchByNIM_2132(nim_2132); // Memanggil fungsi SeachByNIM_2132
                break;
            }
            case 5:{
                cout << "\n   2132   Searching Student Data by Score Range   2132   " << endl;
                cout << "Input minimal score range: ";
                cin >> SearchScore1_2132; // Input nilai minimum dalam rentang nilai
                cout << "Input Maximal score range: ";
                cin >> SearchScore2_2132; // Input nilai maximum dalam rentang nilai
                cout << endl;
                student_map.SearchByScoreRange_2132(SearchScore1_2132, SearchScore2_2132); // Memanggil fungsi SearchByRange_2132
                break;
            }
            case 6:{
                student_map.PrintData_2132(); // Memanggil fungsi PrintData_2132 untuk menampilkan semua data dalam hash table
                break;
            }
            case 0:{
                return 0; //User akan keluar dari program jika memilih 0
            }
            default:{
            cout << "Command Invalid!" << endl; //Jika user tidak memasukan pilihan yang tidak ada pada menu maka output akan keluar dan program akan mengulang
            break;
            }
        }
    }
    return 0;
}