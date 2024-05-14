
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <string>   // Library untuk operasi pada string

using namespace std;

const int MaxQueue_2132 = 5;  // Maksimal queue adalah 5

// Deklarasi Node untuk menyimpan nama dan nim mahasiswa dan pointer ke node berikutnya
struct Node {
    string Name_2132;
    string Nim_2132;
    Node* next;
};

class Queue {
private:
    Node* front; // Node depan dari queue
    Node* rear;  // Node belakang dari queue

public: 
    Queue() { // Konstruktor untuk menginisialisasi queue kosong
        front = nullptr;
        rear = nullptr;
    }

    // Memeriksa apakah queue kosong
    bool isEmpty_2132() {
        if(front == NULL) {
            return true;
        } else {
            return false;
        }
    }

    // Menambahkan data ke queue
    void Enqueue_2132(const string& name, const string& nim) {
        Node* newNode = new Node;
        newNode->Name_2132 = name;
        newNode->Nim_2132 = nim;
        newNode->next = nullptr;
        
        // Jika queue kosong
        if (isEmpty_2132()) { // Jika queue kosong maka front dan rear menunjuk ke newNode yang baru dibuat 
            front = rear = newNode;
        } else { // Jika queue tidak kosong maka rear menunjuk ke newNode yang baru dibuat
            rear->next = newNode;
            rear = newNode;
        }
        
        cout << "Student with the name: " << newNode->Name_2132 << " and with the NIM of: " << newNode->Nim_2132<< " have been added in the queue." << endl;
    }

     //Menghapus data dari queue
    void Dequeue_2132() {
        if (isEmpty_2132()) { // Jika queue kosong maka akan menampilkan pesan "Queue is empty!" 
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front; // Menyimpan node front ke dalam variabel temp untuk dihapus nantinya 
        front = front->next; // Geser front ke node selanjutnya 

        cout << "Student with the name: " << temp->Name_2132 << " and with the NIM: " << temp->Nim_2132 << " have been deleted from the queue." << endl; // Tampilkan data mahasiswa yang dihapus dari antrian 
        delete temp; // Menghapus node yang disimpan di variabel temp

        // Jika setelah penghapusan queue menjadi kosong
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Menampilkan seluruh queue
    void DisplayQueue_2132() {
        if (isEmpty_2132()) { 
            cout << "\n   2132       Data Queue       2132   " << endl;
            for (int i = 0; i < MaxQueue_2132; i++) {
                cout << i + 1 << ". (Empty lah fill it first!)" << endl;
            }
        } else { 
            cout << "\n   2132       Data Queue       2132   " << endl;
            Node* current = front;
            int i = 1;
            while (current != nullptr) { 
                cout << i << ". " << "Name: " << current->Name_2132 << ", NIM: " << current->Nim_2132 << endl;
                current = current->next;
                i++;
            }
            for (; i <= MaxQueue_2132; i++) { // Menampilkan pesan "(Empty lah fill it first!)" untuk queue yang kosong 
                cout << i << ". (Empty lah fill it first!)" << endl;
            }
        }
    }

    // Mengembalikan jumlah data dalam queue
    int CountQueue_2132() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) { // Selama current tidak menunjuk ke nullptr maka hitung jumlah data dalam queue
            count++;
            current = current->next;
        }
        return count; // Kembalikan jumlah data dalam queue
    }

    // Menghapus semua data dalam queue
    void ClearQueue_2132() {
        while (!isEmpty_2132()) { // Selama queue tidak kosong maka hapus data dalam queue
            Dequeue_2132(); // Memanggil fungsi Dequeue_2132 untuk menghapus data
        } 
        cout << "Queue have been cleared." << endl;
    }
};

int main() {
    Queue queue; // Deklarsi queue untuk dapat di operasikan


    cout << "\n   2132       Program Data Queue       2132   " << endl;
    cout << endl;


    queue.Enqueue_2132("Sinta", "2311102132"); //Memasuka data mahasiswa dengan memanggil Enqueue
    queue.Enqueue_2132("Sarwo", "2311102100"); //Memasuka data dengan memanggil Enqueue
    queue.DisplayQueue_2132(); //Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue
    queue.Dequeue_2132(); //Memanggil Dequeue_2132 untuk menghapus data dalam queue
    queue.DisplayQueue_2132();//Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue
    queue.ClearQueue_2132(); //Memanggil ClearQueue_2132 untuk menghapus seluruh data dalam queue
    queue.DisplayQueue_2132(); //Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue

    return 0;
}