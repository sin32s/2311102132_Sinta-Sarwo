
// Sinta Sarwo - 2311102132

#include <iostream>
#include <iomanip>

using namespace std;

// Deklarasi class Node
class Node {
public:
    string Produk_2132; //Deklarasi produk
    int Harga_2132; // Deklarasi harga
    Node* prev; // Pointer ke node sebelumnya
    Node* next; // Pointer ke node selanjutnya
};

// Deklarasi class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head; // Deklarasi head
    Node* tail; // Deklarasi tail

    // pembuatan double linked list 
    DoublyLinkedList() {
        head = nullptr; // Inisialisasi head
        tail = nullptr; // Inisialisasi tail
    }

    // Menambahkan data
    void Push_2132(string produk, int harga) {
        Node* newNode = new Node;
        newNode->Produk_2132 = produk;
        newNode->Harga_2132 = harga;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }
        head = newNode;
    }
    
    // Menambahkan data pada posisi tertentu
    void PushPosisi_2132(string produk, int harga, int posisi) {
    Node* newNode = new Node;
    newNode->Produk_2132 = produk;
    newNode->Harga_2132 = harga;

    // Pengecekan posisi, jika posisi kurang sama dengan 0 maka newNode akan dihapus dan akan menampilkan Position Invalid!
    if (posisi <= 0) {  
        cout << "Position Invalid!" << endl;
        delete newNode;
        return;
    }

    // Pengecekan posisi, jika posisi sama dengan 1 maka akan menambah pada posisi depan (head)
    if (posisi == 1) {  
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
        return;
    }

    Node* current = head;
    int currentPosition = 1;  // Inisialisasi posisi saat ini
    while (currentPosition < posisi - 1 && current != nullptr) {
        current = current->next;
        currentPosition++;
    }

    // Pengecekan posisi, jika posisi yang diminta melebihi panjang daftar maka posisi tidak valid
    if (current == nullptr) { 
        cout << "Position Invalid!" << endl;
        delete newNode;
        return;
    }

    newNode->prev = current;
    newNode->next = current->next;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    } else {
        tail = newNode;
    }
    current->next = newNode;
}
 
    // Menghapus data
    void Pop_2132() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }
        delete temp;
    }

    // Menghapus data pada posisi tertentu
   void PopPosisi_2132(int posisi) {
    // Pengecekan posisi, kurang atau sama dengan 0 maka tidak valid
    if (posisi <= 0 || head == nullptr) {
        cout << "Position Invalid / No Data" << endl;
        return;
    }

    Node* current = head;
    int currentPosition = 1; // Inisialisasi posisi saat ini
    while (currentPosition < posisi && current != nullptr) {
        current = current->next;
        currentPosition++;
    }

    // Pengecekan posisi, jika posisi yang diminta melebihi panjang daftar maka posisi tidak valid
    if (current == nullptr) {
        cout << "Position Invalid!" << endl;
        return;
    }

    if (current->prev != nullptr) {
        current->prev->next = current->next;
    } else {
        head = current->next;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    } else {
        tail = current->prev;
    }

    delete current;
}

    // Mengupdate data
    bool Update_2132(string oldProduk, string newProduk, int newHarga) {
        Node* current = head;
        while (current != nullptr) {
            if (current->Produk_2132 == oldProduk) {
                current->Produk_2132 = newProduk;\
                current->Harga_2132 = newHarga;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Menghapus semua data
    void DeleteAll_2132() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    //  Menampilkan data
    void Display_2132() {
        Node* current = head;
        cout << left << setw(20) << "Produk" << right <<setw(20) << "Harga" << endl; // Memanipulasi output untuk lebih rapi
        while (current != nullptr) {
            cout << left << setw(20) << current->Produk_2132 << right << setw(20) << current->Harga_2132<< endl; // Memanipulasi output untuk menjadi lurus
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    
    int Pilih_2132; //Deklarasi untuk switch-case
    DoublyLinkedList list; //Deklarasi double linked list

    cout << " 2132   Daftar Produk Skincare  2132 " << endl; // Data sebelum dimanipulasi oleh user
    list.Push_2132("Hanasui", 30000);
    list.Push_2132("Wardah", 50000);
    list.Push_2132("Skintific", 100000);
    list.Push_2132("Somethinc", 150000);
    list.Push_2132("Originote", 60000);
    list.Display_2132(); //Data list akan di tampilkan saat program di run

    while (true) {
        cout << " 2132   Toko Skincare Purwokerto   2132 " << endl; //Menu untuk memberi user pilihan ingin menggunakan fungsi-fungsi di dalam program
        cout << "1. Insert Produk" << endl;
        cout << "2. Delete Produk" << endl;
        cout << "3. Update Produk" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Produk Data" << endl;
        cout << "8. Exit" << endl;
        cout << endl;
        cout << "Input your choice: "; //User akan memasukan nomor untuk menggunakan program
        cin >> Pilih_2132;
        cout << endl;

        switch (Pilih_2132) {
            case 1: {
                string produk_2132;
                int harga_2132;

                cout << " 2132   Add New Skincare Product   2132 \n";
                cout << "Masukan produk skincare baru: ";
                cin >> produk_2132; //Memasukan data nama produk skincare yang ingin ditambahkan
                cout << "Masukan harga produk skincare baru: ";
                cin >> harga_2132; //Memasukan data harga skincare yang ingin ditambahkan
                list.Push_2132(produk_2132, harga_2132); //Memanggil fungsi Push_2132 dengan list
                cout << "Produk has been added!, good job =D" << endl;
                cout << endl;
                break;
            }
            case 2: {
                list.Pop_2132(); 
                cout << "Produk paling atas telah dihapus!" << endl;
                cout << endl;
                break;
            }
            case 3: {
                string OldProduk_2132, NewProduk_2132;
                int NewHarga_2132;

                cout << " 2132   Updating Skincare Product   2132 \n";
                cout << "Masukan nama produk baru: ";
                cin >> NewProduk_2132; //Memasukan data nama produk skincare yang baru
                cout << "Masukan harga baru: ";
                cin >> NewHarga_2132; //Memasukan data harga produk skincare yang baru
                cout << "Masukan nama produk yang ingin di update: ";
                cin >> OldProduk_2132; //Memasukan data nama produk skincare yang ingin diupdate/ubah
                bool updated = list.Update_2132(OldProduk_2132, NewProduk_2132, NewHarga_2132); //Memanggil fungsi Update_2132 dengan list, Jika tidak ditumakan produk lama maka akan menampilkan ouput pada baris 248
                if (!updated) {
                    cout << "Produk tidak ditemukan" << endl;  
                }
                else {
                    cout << "Produk berhasil diupdate" << endl;
                }
                break;
            }
            case 4: {
                int posisi, harga_2132;
                string produk_2132;

                cout << " 2132   Add Produk Skincare Pada Posisi Tertentu   2132 \n" << endl;
                cout << "Input produk skincare baru: ";
                cin.ignore(); // Mengabaikan karakter newline dari cin sebelumnya dan memasukan nama produk skincare yang baru
                getline(cin, produk_2132); // Menggunakan getline agar bisa membaca spasi
                cout << "Input harga: ";
                cin >> harga_2132;  //Memasukan data harga produk skincare yang baru
                cout << "Input posisi untuk produk baru: ";
                cin >> posisi; // Memasukkan posisi data yang ingin ditambahkan
                list.PushPosisi_2132(produk_2132, harga_2132, posisi); // Memanggil prosedur PushPosisi_2132 untuk menambahkan data pada posisi tersebut
                cout << "Produk berhasil ditambahkan pada posisi ke-" << posisi << "!" << endl;
                cout << endl;
                break;
            }
            case 5: {
                int posisi;

                cout << " 2132   Delete Data Produk Skincare Dengan Posisi   2132 \n" << endl;
                cout << "Input posisi to delete data: ";
                cin >> posisi; //Memasukan data posisi produk skincare yang ingin dihapus
                list.PopPosisi_2132(posisi); //Memanggil fungsi PopPosisi_2132
                cout << "Data berhasil dihapus pada posisi ke-" << posisi << "!" << endl;
                cout << endl;
                break;
            }
            case 6: {
                list.DeleteAll_2132(); // Memanggil prosedur DeleteAll_2132 untuk menghapus semua data
                cout << "All Deleted!" << endl;
                cout << endl;
                break;
            }
            case 7: {
                list.Display_2132(); //Memasukan data-data produk skincare
                cout << endl;
                break;
            }
            case 8: {
                return 0; //Program akan berhenti jika user memilih 8
            }
            default: {
                cout << "Command Invalid!!" << endl; //Jika user tidak memasukan pilihan yang tidak ada pada menu maka output akan keluar dan program akan mengulang
                break;
            }
        }
    }
    return 0;
}