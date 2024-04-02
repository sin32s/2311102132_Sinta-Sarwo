#include <iostream> // Library yang digunakan untuk fungsi input dan output
#include <iomanip>  // Library yang digunakan untuk fungsi manipulasi output

using namespace std; // Untuk mempersingkat penulisan cin, cout, dan lain-lain

// PROGRAM SINGLE LINKED LIST NON-CIRCULAR

// Deklarasi struct node
struct Node
{
    string nama23;
    long long int nim23;
    Node *next;
};

Node *head; // Deklarasi head
Node *tail; // Deklarasi tail

// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// Pengecekkan apakah linked list kosong
bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Tambah depan
void insertDepan(string nama, long long int nim)
{

    // buat node baru
    Node *baru = new Node();
    baru->nama23 = nama;
    baru->nim23 = nim;
    baru->next = NULL;

    if (isEmpty() == true)
    {
        head = tail = baru;
        head->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah belakang
void insertBelakang(string nama, long long int nim)
{
    // buat node baru
    Node *baru = new Node();
    baru->nama23 = nama;
    baru->nim23 = nim;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        head->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung jumlah list
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah tengah
void insertTengah(string nama, long long int nim, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->nama23 = nama;
        baru->nim23 = nim;

        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *sebelum;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}

// ubah depan
void ubahDepan(string nama, long long int nim)
{
    if (isEmpty() == 0)
    {
        head->nama23 = nama;
        head->nim23 = nim;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// ubah tengah
void ubahTengah(string nama, long long int nim, int posisi)
{
    Node *bantu;
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            int nomor = 1;
            bantu = head;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->nama23 = nama;
            bantu->nim23 = nim;
        }
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// ubah belakang
void ubahBelakang(string nama, long long int nim)
{
    if (isEmpty() == 0)
    {
        tail->nama23 = nama;
        tail->nim23 = nim;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus list
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan list
void tampilList()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        cout << "============ TAMPILKAN LIST ============" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Nama"
             << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        while (bantu != NULL)
        {
            cout << left << setw(20) << "| " + bantu->nama23 << "| " << bantu->nim23 << endl; // setw digunakan untuk menentukan lebar kolom
            bantu = bantu->next;
        }
        cout << "----------------------------------------" << endl;
    }
    else
    {
        cout << "============ TAMPILKAN LIST ============" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Nama"
             << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| (NULL)"
             << "| (NULL) " << endl;
        cout << "----------------------------------------" << endl;
    }
}

int main()
{
    string nama; // Deklarasi variabel nama
    long long int nim; // Deklarasi variabel nim
    int posisi; // Deklarasi variabel posisi
    init(); // Inisialisasi linked list

    cout << "========== PROGRAM SINGLE LINKED LIST NON-CIRCULAR ==========" << endl;
    // Looping menu
    while (true)
    {
        cout << "1.  Tambah Depan" << endl;
        cout << "2.  Tambah Belakang" << endl;
        cout << "3.  Tambah Tengah" << endl;
        cout << "4.  Ubah Depan" << endl;
        cout << "5.  Ubah Belakang" << endl;
        cout << "6.  Ubah Tengah" << endl;
        cout << "7.  Hapus Depan" << endl;
        cout << "8.  Hapus Belakang" << endl;
        cout << "9.  Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        int pilihan;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            // Tambah depan
            cout << "========== TAMBAH DEPAN ==========" << endl;
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;
            insertDepan(nama, nim);
            cout << "Data [" << nama << "] berhasil ditambahkan di depan! " << endl;
            break;
        }
        case 2:
        {
            // Tambah belakang
            cout << "========== TAMBAH BELAKANG ==========" << endl;
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;
            insertBelakang(nama, nim);
            cout << "Data [" << nama << "] berhasil ditambahkan di belakang! " << endl;
            break;
        }
        case 3:
        {
            // Tambah tengah
            cout << "========== TAMBAH TENGAH ==========" << endl;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;

            insertTengah(nama, nim, posisi);
            cout << "Data [" << nama << "] berhasil ditambahkan di posisi ke-" << posisi << "!" << endl;
            break;
        }
        case 4:
        {
            // Ubah depan
            cout << "========== UBAH DEPAN ==========" << endl;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;
            string oldNama = head->nama23; // menyiapkan nama lama untuk ditampilkan di output
            ubahDepan(nama, nim);
            cout << "Data depan yaitu [" << oldNama << "] berhasil diubah menjadi [" << nama << "] dengan NIM menjadi [" << nim << "]!" << endl;
            break;
        }
        case 5:
        {
            // Ubah belakang
            cout << "========== UBAH BELAKANG ==========" << endl;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;
            string oldNama = tail->nama23; // menyiapkan nama lama untuk ditampilkan di output
            ubahBelakang(nama, nim);
            cout << "Data belakang yaitu [" << oldNama << "] berhasil diubah menjadi [" << nama << "] dengan NIM menjadi [" << nim << "]!" << endl;
            break;
        }
        case 6:
        {
            // Ubah tengah
            cout << "========== UBAH TENGAH ==========" << endl;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;
            Node *bantu = head;
            for (int i = 1; i < posisi; i++)
            {
                bantu = bantu->next;
            }
            string oldNama = bantu->nama23; // menyiapkan nama lama untuk ditampilkan di output
            ubahTengah(nama, nim, posisi);
            cout << "Data [" << oldNama << "] berhasil diubah menjadi [" << nama << "] dengan NIM menjadi [" << nim << "] di posisi ke-" << posisi << "!" << endl;
            break;
        }
        case 7:
        {
            // Hapus depan
            string oldName = head->nama23;  // menyiapkan nama lama untuk ditampilkan di output
            hapusDepan();
            cout << "Data depan yaitu [" << oldName << "] berhasil dihapus!" << endl; // Use the stored name in the output message
            break;
        }
        case 8:
        {
            // Hapus belakang
            string oldName = tail->nama23; // menyiapkan nama lama untuk ditampilkan di output
            hapusBelakang();
            cout << "Data belakang yaitu [" << oldName << "] berhasil dihapus!" << endl;
            break;
        }
        case 9:
        {
            // Hapus tengah
            cout << "========== HAPUS TENGAH ==========" << endl;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            if (posisi == 1)
            {
                cout << "Data head tidak bisa dihapus!" << endl;
                break;
            }
            Node *bantu = head;
            for (int i = 1; i < posisi; i++)
            {
                bantu = bantu->next;
            }
            string oldNama = bantu->nama23; // menyiapkan nama lama untuk ditampilkan di output
            hapusTengah(posisi);
            cout << "Data [" << oldNama << "] berhasil dihapus di posisi ke-" << posisi << "!" << endl;
            break;
        }
        case 10:
        {
            // Hapus list
            clearList();
            cout << "Data berhasil dihapus semua!" << endl;
            break;
        }
        case 11:
        {
            // Tampilkan list
            tampilList();
            break;
        }
        case 0:
        {
            // Keluar
            cout << "Program selesai!" << endl;
            return 0;
        }
        default:
            // Selain pilihan di atas
            cout << "Pilihan tidak tersedia!" << endl;
            break;
        }
    }
    return 0;
}