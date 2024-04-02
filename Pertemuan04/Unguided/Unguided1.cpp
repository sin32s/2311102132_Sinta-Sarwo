
// Sinta Sarwo - 2311102132

#include <iostream> // library untuk fungsi input dan ouput
#include <iomanip> // Library untuk memanipulasikan output untuk menjadi lebih rapi

using namespace std;

// Deklarasi struct node
struct Node
{
    string Name_2132; //Deklarasi string Name_2132 untuk menyimpan nama-nama mahasiswa
    long long int NIM_2132; //Deklarasi long long int NIM_2132 untuk menyimpan NIM mahasiswa, long long int digunakan karena dapat menyimpan data integer yang panjang
    Node *next; //pointer ke node selanjutnya
};

Node *head = NULL; // Deklarasi head
Node *tail = NULL; // Deklarasi tail

// Inisialisasi Node
void Initialization_2132()
{
    head = NULL;
    tail = NULL;
}

// Pengecekkan jika list kosong atau tidak
bool Empty_2132()
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

// Menambahkan data pada posisi depan
void InsertFront_2132(string name, long long int nim)
{
    // buat node baru
    Node *newNode = new Node();
    newNode->Name_2132 = name;
    newNode->NIM_2132 = nim;
    newNode->next = NULL;
    if (Empty_2132() == true)
    {
        head = tail = newNode;
        head->next = NULL;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// Menambahkan data pada posisi belakang
void InsertBack_2132(string name, long long int nim)
{
    // buat node baru
    Node *newNode = new Node();
    newNode->Name_2132 = name;
    newNode->NIM_2132 = nim;
    newNode->next = NULL;
    if (Empty_2132() == true)
    {
        head = tail = newNode;
        head->next = NULL;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Hitung jumlah list untuk mempermudah fungsi void InsertMiddle_2132, ModifyMiddle_2132, DeleteMiddle_2132. Karena void ini membantu untuk program mengetahui posisi mana yang user akan memanipulasi data pada linked list.
int hitungList_2132()
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

// Menambah data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void InsertMiddle_2132(string name, long long int nim, int position)
{
    if (position < 1 || position > hitungList_2132())
    {
        cout << "Position out of range!" << endl;
    }
    else if (position == 1)
    {
        cout << "The position is not in the middle!" << endl;
    }
    else
    {
         Node *newNode, *bantu;
        newNode = new Node();
        newNode->Name_2132 = name;
        newNode->NIM_2132 = nim;

        // tranversing
        bantu = head;
        int number = 1;
        while (number < position - 1)
        {
            bantu = bantu->next;
            number++;
        }

        newNode->next = bantu->next;
        bantu->next = newNode;
    }
}

// Menghapus data pada posisi depan
void DeleteFront_2132()
{
    Node *hapus;
    if (Empty_2132() == false)
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
        cout << "No data in the list." << endl;
    }
}

// Menghapus data pada posisi belakang
void DeleteBack_2132()
{
    Node *hapus;
    Node *bantu;
    if (Empty_2132() == false)
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
        cout << "No data in the list." << endl;
    }
}

// Menghapus data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void DeleteMiddle_2132(int position)
{
    Node *hapus, *bantu, *prev;
    if (position < 1 || position > hitungList_2132())
    {
        cout << "Position out of range!" << endl;
    }
    else if (position == 1)
    {
        cout << "The position is not in the middle!" << endl;
    }
    else
    {
        int number = 1;
        bantu = head;
        while (number <= position)
        {
            if (number == position - 1)
            {
                prev = bantu;
            }
            if (number == position)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            number++;
        }
        prev->next = bantu;
        delete hapus;
    }
}

// Mengubah data pada posisi depan
void ModifyFront_2132(string name, long long int nim)
{
    if (Empty_2132() == 0)
    {
        head->Name_2132 = name;
        head->NIM_2132 = nim;

    }
    else
    {
        cout << "Linked list is empty.." << endl;
    }
}

// Mengubah data pada posisi belakang
void ModifyBack_2132(string name, long long int nim)
{
    if (Empty_2132() == 0)
    {
        tail->Name_2132 = name;
        tail->NIM_2132 = nim;
    }
    else
    {
        cout << "Linked list is empty.." << endl;
    }
}

// Mengubah data pada posisi yang diinginkan oleh user dengan menginput posisi tersebut
void ModifyMiddle_2132(string name, long long int nim, int position)
{
    Node *bantu;
    if (Empty_2132() == 0)
    {
        if (position < 1 || position > hitungList_2132())
        {
            cout << "Position out of range!" << endl;
        }
        else if (position == 1)
        {
            cout << "The position is not in the middle!" << endl;
        }
        else
        {
            int number = 1;
            bantu = head;
            while (number < position)
            {
                bantu = bantu->next;
                number++;
            }
            bantu->Name_2132 = name;
            bantu->NIM_2132 = nim;
        }
    }
    else
    {
        cout << "Linked list is empty.." << endl;
    }
}


// Menghapus semua data pada List
void ClearList_2132()
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
    cout << "List has been successfully cleared!" << endl;
}

// Tampilkan list
void DisplayList_2132()
{
    Node* bantu;
    bantu = head;
    if (Empty_2132() == false)
        {
            cout << "============ TAMPILKAN LIST ============" << endl;
            cout << "----------------------------------------" << endl;
            cout << left << setw(20) << "| Nama" << "| NIM" << endl;
            cout << "----------------------------------------" << endl;
            while (bantu != NULL)
            {
                cout << left << setw(20) << "| " + bantu->Name_2132 << "| " << bantu->NIM_2132 << endl; // setw digunakan untuk menentukan lebar kolom
                bantu = bantu->next;
            }
            cout << "----------------------------------------" << endl;
        }
        else
        {
            cout << "====2132==== DATA MAHASISWA ====2132====" << endl;
            cout << "----------------------------------------" << endl;
            cout << left << setw(20) << "| Nama" << "| NIM" << endl;
            cout << "----------------------------------------" << endl;
            cout << left << setw(20) << "| (NULL)" << "| (NULL) " << endl;
            cout << "----------------------------------------" << endl;
        }
}

int main()
{
    Initialization_2132(); // Inisialisasi Linked List
    int Choice_2132; // Deklarai Choice_2132 untuk menjadi inputan dalam switch-case
    string name_2132; // Deklarasi name_2132 untuk variable (data nama mahasiswa) yang akan menyimpan inputan user nanti pada switch-case
    long long int nim_2132; // // Deklarasi name_2132 untuk variable (data NIM mahasiswa) yang akan menyimpan inputan user nanti pada switch-case
    int position_2132; //Deklrasi posisi untuk menyimpan posisi yang user ingin isi, ubah, atau hapus dalam linked list.

    while (true)
    {
        cout <<"\n   2132   Menu Data Mahasiswa   2132   " << endl; //Menu untuk memberi user pilihan ingin menggunakan fungsi-fungsi di dalam program
        cout <<"1. Menambah Data di Depan" <<endl;
        cout <<"2. Menambah Data di Belakang" << endl;
        cout <<"3. Menambah Data di Tengah" << endl;
        cout <<"4. Mengubah Data di Depan" << endl;
        cout <<"5. Mengubah Data di Belakang" << endl;
        cout <<"6. Mengubah Data di Tengah" << endl;
        cout <<"7. Menghapus Data di Depan" << endl;
        cout <<"8. Menghapus Data di Belakang" << endl;
        cout <<"9. Menghapus Data di Tengah"<< endl;
        cout <<"10. Clear List"<< endl;
        cout <<"11. Display Data List" << endl;
        cout <<"0. Keluar"<< endl;
        cout << endl;
        cout <<"Input Operasi: ";
        cin >> Choice_2132; // Inputan user untuk berinteraksi dengan program
        cout << endl;

    switch (Choice_2132){
    case 1:{
            cout << "   2132   Menambahkan Data Mahasiswa Pada Posisi Depan   2132   \n" << endl;
            cout << "Masukkan Nama: ";
            cin >> name_2132; //Memasukan data Nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data NIM mahasiswa yang ingin ditambahkan
            InsertFront_2132(name_2132, nim_2132); //Memanggil fungsi InsertFront_2132
            cout << "Data succefully added!" << endl;
            cout << endl;
            break;
        }
        case 2:{
            cout << "   2132   Menambahkan Data Mahasiswa Pada Posisi Belakang   2132   \n" << endl;
            cout << "Masukkan Nama: ";
            cin >> name_2132; //Memasukan data Nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data NIM mahasiswa yang ingin ditambahkan
            InsertBack_2132(name_2132, nim_2132); //Memanggil fungsi InsertBack_2132
            cout << "Data succefully added!" << endl;
            cout << endl;
            break;
        }
        case 3:{
            cout << "   2132   Menambahkan Data Mahasiswa Pada Posisi Tengah   2132   \n" << endl;
            cout << "Masukkan Nama: ";
            cin >> name_2132; //Memasukan data Nama mahasiswa yang ingin ditambahkan
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data NIM mahasiswa yang ingin ditambahkan
            cout << "Masukkan posisi: ";
            cin >> position_2132; //Memasukan posisi data yang ingin ditambahkan dengan data nama & NIM mahasiswa baru
            InsertMiddle_2132(name_2132, nim_2132, position_2132); //Memanggil fungsi InsertMiddle_2132
            cout << "Data succefully added on "<< position_2132 <<" position !" << endl;
            cout << endl;
            break;
        }
        case 4:{
            cout << "   2132   Mengubah Data Mahasiswa Pada Posisi Depan   2132   \n" << endl;
            cout << "Masukkan Nama: ";
            cin >> name_2132; //Memasukan data Nama mahasiswa yang ingin diubah
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data NIM mahasiswa yang ingin diubah

            string oldName_2132 = head->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang sebelum diubah untuk ditampilkan di output
            ModifyFront_2132(name_2132, nim_2132); //Memanggil fungsi ModifyFront_2132
            cout << "Data [" << oldName_2132 <<"] succefully modify to [" << name_2132 << "]!" << endl;
            cout << endl;
            break;
        }
        case 5:{
            cout << "   2132   Mengubah Data Mahasiswa Pada Posisi Belakang   2132   \n" << endl;
            cout << "Masukkan Nama: ";
            cin >> name_2132; //Memasukan data Nama mahasiswa yang ingin diubah
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data NIM mahasiswa yang ingin diubah

            string oldName_2132 = tail->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang sebelum diubah untuk ditampilkan di output
            ModifyBack_2132(name_2132, nim_2132); //Memanggil fungsi Modifyback_2132
            cout << "Data [" << oldName_2132 <<"] succefully modify to [" << name_2132 << "]!" << endl;
            cout << endl;
            break;
        }
        case 6:
        {
            cout << "   2132   Mengubah Data Mahasiswa Pada Posisi Tengah   2132   \n" << endl;
            cout << "Masukkan nama: ";
            cin >> name_2132; //Memasukan data nama mahasiswa yang baru
            cout << "Masukkan NIM: ";
            cin >> nim_2132; //Memasukan data umur mahasiswa yang baru
            cout << "Masukkan posisi: ";
            cin >> position_2132; //Memasukan posisi data mahasiswa yang ingin diubah

            Node *bantu = head;
            for (int i = 1; i < position_2132; i++)
            {
                bantu = bantu->next;
            }
            string oldName_2132 = bantu->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang sebelum diubah untuk ditampilkan di output
            ModifyMiddle_2132(name_2132, nim_2132, position_2132); //Memanggil fungsi ModifyMiddle_2132
            cout << "Data [" << oldName_2132 <<"] succefully modify to [" << name_2132 << "]!" << endl;
            cout << endl;
            break;
        }
        case 7:{
            cout << "   2132   Menghapus Data Mahasiswa Pada Posisi Depan   2132   \n" << endl;
            DeleteFront_2132(); //Memanggil fungsi DeleteFront_2132
            string oldName_2132 = head->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang akan di hapus
            cout << "Data "<< oldName_2132 <<" succefully deleted!" << endl;
            cout << endl;
            break;
        }
        case 8:{
            cout << "   2132   Menghapus Data Mahasiswa Pada Posisi Belakang   2132   \n" << endl;
            DeleteBack_2132(); //Memanggil fungsi DeleteBack_2132
            string oldName_2132 = tail->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang akan di hapus
            cout << "Data " << oldName_2132 << " succefully deleted!" << endl;
            cout << endl;
            break;
        }
        case 9:
        {
            cout << "   2132   Menghapus Data Mahasiswa Pada Posisi Tengah   2132   \n" << endl;
            cout << "Masukkan posisi: ";
            cin >> position_2132; //Memasukan posisi data yang ingin dihapus

            Node *bantu = head;
            for (int i = 1; i < position_2132; i++)
            {
                bantu = bantu->next;
            }
            string oldName_2132 = bantu->Name_2132; // deklarasi oldName_2132 untuk nama mahasiswa yang akan di hapus
            DeleteMiddle_2132(position_2132); //Memanggil fungsi DeleteMiddle_2132
            cout << "Data " << oldName_2132 << " succefully deleted!" << endl;
            cout << endl;
            break;
        }
        case 10:
        {
            ClearList_2132(); //Memanggil fungsis ClearList_2132
            break;
        }
        case 11:
        {
            DisplayList_2132(); //Memanggil fungsi DisplayList_2132
            break;
        }
        case 0:
        {
            return 0; //User akan keluar dari program jika memilih 0
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