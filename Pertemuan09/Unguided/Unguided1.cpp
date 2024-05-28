
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input dan ouput
#include <iomanip>  // Library untuk memanipulasikan output untuk menjadi lebih rapi
#include <string>   // Library untuk fungsi string

using namespace std;

const int MaxCities_2132 = 10; //Maksimal banyak data yang dapat ditampung pada variabel MAX_CITIES untuk struct Graph

struct Graph {
    string CityNames_2132[MaxCities_2132]; // Banyaknya data string yang dapat disimpan dalam string sesuai dengan kapasitas MAX_CITIES
    int BusurMatrix_2132[MaxCities_2132][MaxCities_2132]; // Menggunakan array 2 dimensi, dengan ukuran maksimal sesuai MAX_CITIES
    int numCities_2132; // Variabel yang digunakan untuk menyimpan jumlah kota dalam graph
};

//Mencetak Matrix
void printMatrix_2132(const Graph& graph) {
    cout << setw(15) << " ";
    for (int i = 0; i < graph.numCities_2132; i++) {
        cout << setw(15) << graph.CityNames_2132[i];
    }
    cout << endl;

    for (int i = 0; i < graph.numCities_2132; i++) {
        cout << setw(15) << graph.CityNames_2132[i];
        for (int j = 0; j < graph.numCities_2132; j++) {
            cout << setw(15) << graph.BusurMatrix_2132[i][j];
        }
        cout << endl;
    }
}

int main() {
    Graph graph;
    cout << "\n 2132     Aplikasi Jarak Antar Kota     2132 " << endl;
    cout << "Input jumlah simpul: ";
    cin >> graph.numCities_2132;
    cin.ignore(); // Mengabaikan karakter newline yang tersisa

    for (int i = 0; i < graph.numCities_2132; i++) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, graph.CityNames_2132[i]);
    }

    cout << "Input bobot antar simpul" << endl;
    for (int i = 0; i < graph.numCities_2132; i++) {
        for (int j = 0; j < graph.numCities_2132; j++) {
            cout << graph.CityNames_2132[i] << " ---> " << graph.CityNames_2132[j] << " = ";
            cin >> graph.BusurMatrix_2132[i][j];
        }
    }

    cout << endl;
    printMatrix_2132(graph); //Memanggil fungsi printMatrix_2132 untuk mencetak hasil Matrix

    return 0;
}