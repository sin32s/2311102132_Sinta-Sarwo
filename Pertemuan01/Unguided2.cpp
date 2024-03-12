
//Sinta Sarwo - 2311102132

#include <iostream>

using namespace std;

// Struct terdapat data string RoomType_2132 untuk tipe kamar dan int RoomNumber_2132 untuk nomor kamar
struct Room_2132{
    string RoomType_2132;
    int RoomNumber_2132;
};

//Class terdapat data string title, genre, dan int YearRelease_2132 dalam akses public
class book_2132{
    public:
    string title_2132;
    string genre_2132;
    int YearRelease_2132;
};

int main () {
    cout << " 2132 Declaration of Struct and Class 2132 " <<endl;

    //Deklarasi struct
    Room_2132 tipekamar{"Standard room" , 2132};
    cout << "\n 2132 Room 2132 " << endl;
    cout << "Room type: " << tipekamar.RoomType_2132 << endl;
    cout << "Room Number: " << tipekamar.RoomNumber_2132 << endl;

    //Deklarasi class
    book_2132 book;
    book.title_2132 = "Book of Life";
    book.genre_2132 = "Slice of life";
    book.YearRelease_2132 = 2005;
    cout << "\n 2132 Book 2132 " << endl;
    cout << "Book name: " << book.title_2132 << endl;
    cout << "Book genre: " << book.genre_2132 << endl;
    cout << "Release book: " << book.YearRelease_2132 << endl;

    return 0;
}