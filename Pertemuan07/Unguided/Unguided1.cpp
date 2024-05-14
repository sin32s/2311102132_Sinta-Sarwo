
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput

using namespace std;

const int MaxQueue = 5;  // Deklrasi Maksimal antrian adalah 5

// Deklarasi Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    string Data_2132;
    Node* next;
};

class Queue {
private:
    Node* front; // Node depan dari queue
    Node* rear;  // Node belakang dari queue

public: 
    Queue() { 
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
    void Enqueue_2132(const string& data) {
        Node* newNode = new Node;
        newNode->Data_2132 = data;
        newNode->next = nullptr;
        
        // Jika queue kosong
        if (isEmpty_2132()) {
            front = rear = newNode;
        } else { 
            rear->next = newNode;
            rear = newNode;
        }
        
        cout << data << " have been added in the queue!" << endl;
    }

    // Menghapus data dari queue
    void Dequeue_2132() {
        if (isEmpty_2132()) { // Jika queue kosong maka akan menampilkan pesan "Queue is empty!"
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front; // Menyimpan node front ke dalam variabel temp untuk dihapus nantinya 
        front = front->next; // Geser front ke node selanjutnya

        cout << temp->Data_2132 << " have been succesfuly been deleted in the queue!" << endl; 
        delete temp; // Menghapus node yang disimpan di variabel temp

        // Jika setelah penghapusan queue menjadi kosong
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Menampilkan seluruh data pada queue
    void DisplayQueue_2132() {
        if (isEmpty_2132()) { 
            cout << "\n   2132       Data Queue       2132   " << endl;
            for (int i = 0; i < MaxQueue; i++) {
                cout << i + 1 << ". (Empty lah fill it first!)" << endl;
            }
        } else { 
            cout << "\n   2132       Data Queue       2132   " << endl;
            Node* current = front;
            int i = 1;
            while (current != nullptr) { 
                cout << i << ". " << current->Data_2132 << endl;
                current = current->next;
                i++;
            }
            for (; i <= MaxQueue; i++) {  // Menampilkan pesan "(Empty lah fill it first!)" untuk antrian yang kosong 
                cout << i + 1 << ". (Empty lah fill it first!)" << endl;
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

    // Menghapus semua elemen dalam queue
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

    queue.Enqueue_2132("Andi"); //Memasuka data dengan memanggil Enqueue
    queue.Enqueue_2132("Maya"); //Memasuka data dengan memanggil Enqueue
    queue.DisplayQueue_2132(); //Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue
    queue.Dequeue_2132(); //Memanggil Dequeue_2132 untuk menghapus data dalam queue
    queue.DisplayQueue_2132(); //Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue
    queue.ClearQueue_2132(); //Memanggil ClearQueue_2132 untuk menghapus seluruh data dalam queue
    queue.DisplayQueue_2132(); //Memanggil DisplayQueue_2132 dalam class queue untuk menampilkan data dalam queue
    cout << "Total queue = " << queue.CountQueue_2132() << endl; //Memanggil CountQueue_2132 untuk menunjukan jumlah data dalam queue

    return 0;
}