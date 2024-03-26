
//Sinta Sarwo - 2311102132

#include <iostream>
#include <iomanip> //library untuk memanipulasikan output untuk menjadi lebih rapi

using namespace std;

//Deklarasi Struct Node
struct Node {
    string Nama_2132; //Deklarasi string Nama_2132 untuk menyimpan nama-nama mahasiswa
    int Umur_2132; //Deklarasi int umur_2132 untuk menyimpan usia mahasiswa
    Node* next; //pointer ke node selanjutnya
};

Node* head; //Deklarasi head
Node* tail; //Deklarasi tail

//Inisialisasi Node
void init_2132() {
    head = NULL;
    tail = NULL;
}

// Pengecekan jika list kosong atau tidak
bool Empty_2132() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Menambahkan data pada posisi depan
void InsertDepan_2132(string nama, int umur) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama_2132 = nama;
    baru->Umur_2132 = umur;
    baru->next = NULL;

    if (Empty_2132() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Menambahkan data pada posisi belakang
void InsertBelakang_2132(string nama, int umur) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama_2132 = nama;
    baru->Umur_2132 = umur;
    baru->next = NULL;

    if (Empty_2132() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List unutk mempermudah fungsi void InsertTengah_2132, HapusTengah_2132, UbahTengah_2132. Posisi digunakan untuk mengetahui posisi yang mana user akan memanipulasi data pada linked list. 
int HitungList_2132() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Menambah data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void InsertTengah_2132(string nama, int umur, int posisi) {
    if (posisi < 1 || posisi > HitungList_2132()) {
        cout << "Posisiton out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "The position is not in the middle!" << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->Nama_2132 = nama;
        baru->Umur_2132 = umur;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Menghapus data pada posisi depan
void HapusDepan_2132() {
    Node* hapus;

    if (Empty_2132() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Nothing there." << endl;
    }
}

//Menghapus data pada posisi belakang
void HapusBelakang_2132() {
    Node* hapus;
    Node* bantu;

    if (Empty_2132() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Nothing there." << endl;
    }
}

//Menghapus data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void HapusTengah_2132(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > HitungList_2132()) {
        cout << "Posisiton out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "The position is not in the middle!" << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Mengubah data pada posisi depan
void UbahDepan_2132(string nama, int umur) {
    if (Empty_2132() == false) {
        head->Nama_2132 = nama;
        head->Umur_2132 = umur;
    }
    else {
        cout << "It's the same?" << endl;
    }
}

//Mengubah data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void UbahTengah_2132(string nama, int umur, int posisi) {
    Node* bantu;

    if (Empty_2132() == false) {
        if (posisi < 1 || posisi > HitungList_2132()) {
            cout << "Posisiton out of range!" << endl;
        }
        else if (posisi == 1) {
            cout << "The position is not in the middle!" << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->Nama_2132 = nama;
            bantu->Umur_2132 = umur;
        }
    }
    else {
        cout << "Nothing there." << endl;
    }
}

//Mengubah data pada posisi belakang
void UbahBelakang_2132(string nama, int umur) {
    if (Empty_2132() == false) {
        tail->Nama_2132 = nama;
        tail->Umur_2132 = umur;
    }
    else {
        cout << "Nothing there." << endl;
    }
}

//Menghapus semua data pada List
void HapusList_2132() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Nice, the list have been deleted." << endl;
}

//Tampilkan List
void Tampil_2132() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << " Nama " << right << setw(4) << " Usia " << endl; // Memanipulasi output untuk lebih rapi

    if (Empty_2132() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->Nama_2132 << right << setw(4) << bantu->Umur_2132 << endl; // Memanipulasi output untuk menjadi lurus
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "Nothing there." << endl;
    }
}

int main() {
    init_2132(); // Inisialisasi Linked List
    int Pilihan_2132; //Deklarasi Pilihan untuk menjadi inputan dalam switch-case

    cout << "\n 2132   Program penyimpanan nama dan usia Mahasiswa   2132 \n" << endl; // Data sebelum dimanipulasi oleh user
    InsertDepan_2132("Karin", 18);
    InsertDepan_2132("Hoshino", 18);
    InsertDepan_2132("Akechi", 20); 
    InsertDepan_2132("Yusuke", 19);
    InsertDepan_2132("Michael", 18);
    InsertDepan_2132("Jane", 20);
    InsertDepan_2132("John", 19);
    InsertDepan_2132("Sinta", 16);
    Tampil_2132 (); //Data list akan di tampilkan saat program di run

        while (true)
    {
        cout << " 2132   Menu Data Mahasiswa   2132 \n" << endl; //Menu untuk memberi user pilihan ingin menggunakan fungsi-fungsi di dalam program
        cout << "1. Menambah Data di Depan" << endl;
        cout << "2. Menambah Data di Belakang" << endl;
        cout << "3. Menambah Data di Tengah" << endl;
        cout << "4. Hapus Data di Depan" << endl;
        cout << "5. Hapus Data di Belakang" << endl;
        cout << "6. Hapus Data di Tengah" << endl;
        cout << "7. Ubah Data di Tengah" << endl;
        cout << "8. Hapus Semua Data" << endl;
        cout << "9. Tampilkan Data" << endl;
        cout << "10. Exit" << endl;
        cout << endl;
        cout << "Masukkan pilihan: ";
        cin >> Pilihan_2132; //User akan memasukan nomor untuk menggunakan program
        cout << endl;

        switch (Pilihan_2132)
        {
        case 1:
        {
            string nama_2132;
            int umur_2132;

            cout << " 2132   Menambahkan Data Mahasiswa Pada Posisi Depan   2132 \n" << endl;
            cout << "Masukkan nama: ";
            cin >> nama_2132; //Memasukan data nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan umur: ";
            cin >> umur_2132; //Memasukan data umur mahasiswa yang ingin ditambahkan
            InsertDepan_2132(nama_2132, umur_2132); //Memanggil fungsi InsertDepan_2132
            cout << "Data berhasil ditambahkan" << endl;
            cout << endl;
            break;
        }
        case 2:
        {
            string nama_2132;
            int umur_2132;

            cout << " 2132   Menambahkan Data Mahasiswa Pada Posisi Belakang   2132 \n" << endl;
            cout << "Masukkan nama: ";
            cin >> nama_2132; //Memasukan data nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan umur: ";
            cin >> umur_2132; //Memasukan data umur mahasiswa yang ingin ditambahkan
            InsertBelakang_2132(nama_2132, umur_2132); //Memanggil funsgi InsertBelakang_2132
            cout << "Data berhasil ditambahkan" << endl;
            cout << endl;
            break;
        }
        case 3:
        {
            string nama_2132;
            int umur_2132, posisi;

            cout << " 2132   Menambahkan Data Mahasiswa Pada Posisi Tengah   2132 \n" << endl;
            cout << "Masukkan nama: ";
            cin >> nama_2132; //Memasukan data nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan umur: ";
            cin >> umur_2132; //Memasukan data umur mahasiswa yang ingin ditambahkan
            cout << "Masukkan posisi: ";
            cin >> posisi; //Memasukan posisi data yang ingin ditambahkan dengan data mahasiswa baru
            InsertTengah_2132(nama_2132, umur_2132, posisi); //Memanggil fungsi InsertTengah_2132
            cout << "Data berhasil ditambahkan" << endl;
            cout << endl;
            break;
        }
        case 4:
        {
            HapusDepan_2132(); //Memanggil fungsi HapusDepan_2132
            cout << "Data berhasil dihapus" << endl;
            cout << endl;
            break;
        }
        case 5:
        {
            HapusBelakang_2132(); //Memanggil fungsi HapusBelakang_2132
            cout << "Data berhasil dihapus" << endl;
            cout << endl;
            break;
        }
        case 6:
        {
            int posisi;

            cout << "Masukkan posisi: ";
            cin >> posisi; //Memasukan posisi data yang ingin dihapus
            HapusTengah_2132(posisi); //Memanggil fungsi HapusTengah_2132
            cout << "Data berhasil dihapus" << endl;
            cout << endl;
            break;
        }
        case 7:
        {
            string nama_2132;
            int umur_2132, posisi;

            cout << "Masukkan nama: ";
            cin >> nama_2132; //Memasukan data nama mahasiswa yang baru
            cout << "Masukkan umur: ";
            cin >> umur_2132; //Memasukan data umur mahasiswa yang baru
            cout << "Masukkan posisi: ";
            cin >> posisi; //Memasukan posisi data mahasiswa yang ingin diubah
            UbahTengah_2132(nama_2132, umur_2132, posisi); //Memanggil fungsi UbahTengah_2132
            cout << "Data berhasil diubah" << endl;
            cout << endl;
            break;
        }
        case 8:
        {
            HapusList_2132(); //Memanggil fungsis HapusList_2132
            break;
        }
        case 9:
        {
            Tampil_2132(); //Memanggil fungsi Tampil_2132
            break;
        }
        case 10:
        {
            return 0; //User akan keluar dari program jika memilih 10
        }
        default:
        {
            cout << "Command Invalid!" << endl; //Jika user tidak memasukan pilihan yang tidak ada pada menu maka output akan keluar dan program akan mengulang
            break;
        }
        }
    }

    return 0;
}
