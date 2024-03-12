
// Sinta Sarwo - 2311102132

#include <iostream>
#include <cmath> // Library untuk fungsi pada perihitungan Area dan Perimeter of Circle

using namespace std;

char n_2132; //Data premitif char untuk pilihan menu n_2132
double r; // Data premitif double untuk bilangan r dalam fungsi CircleArea_2132 & CirclePerimeter_2132
float a, b, c, h; // Data permitif float untuk fungsi AreaTriangle_2132 & TrianglePerimeter_2132

void Menu_2132 (){ //procedur untuk menunjukan pilihan menu Menu_2132
    cout << "\n 2132 Area & Perimeter Calculator 2132 ";
    cout << "\n1. Area of Circle";
    cout << "\n2. Area of Triangle";
    cout << "\n3. Perimeter of Circle";
    cout << "\n4. Perimeter of Triangle";
    cout << "\nInput your choice: ";
    cin >> n_2132; 
}

double CircleArea_2132 (){ // Fungsi untuk menghitung luas lingkaran
    cout << "\n 2132 Area of Circle 2132 "<< endl;
    cout << "Input the radius: ";
    cin >> r;
    cout << "The area of circle is: ";
    return M_PI * pow(r,2); //Mengembalikan hasil luas lingkaran dan pow dan M_PI fungsi dari cmath library
}

double CirclePerimeter_2132 (){ //Fungsi untuk menghitung keliling lingkaran
    cout << "\n 2132 Perimeter of Circle 2132" << endl;
    cout << "Input the radius: ";
    cin >> r;
    cout << "The perimeter of circle is: ";
    return 2 * M_PI * r; //Mengembalikan hasil keliling lingkaran dan M_PI fungsi dari cmath library
}

float AreaTriangle_2132 (){ //Fungsi untuk menghitung luas segitiga
    cout << "\n 2132 Area of Triangle 2132 " << endl;
    cout << "Input the base and height: ";
    cin >> b;
    cout << endl;
    cout << "Input the height: ";
    cin >> h;
    cout << "The area of triangle is: ";
    return b * h * 0.5; //Mengembalikan hasil luas segitiga
}

float TrianglePerimeter_2132 (){ //Fungsi untuk menghitung keliling segitiga
    cout << "\n 2132 Perimeter of Triangle 2132 " << endl;
    cout << "Input the first side of triangle: ";
    cin >> a;
    cout << "Second side of the triangle: ";
    cin >> b;
    cout << "Third side of triangle: ";
    cin >> c;
    cout << "The parameter of triangle is: ";
    return a + b + c; //Mengembalikan hasil keliling segitiga   
}

int main(){
    do {//Looping menu pilihan
        Menu_2132();
        switch (n_2132){ // Switch case untuk memilih menu
            case '1':
            cout << "\n" << CircleArea_2132() << endl; // Jika user memilih 1, maka akan menjalankan fungsi menghitung luas lingkaran
            break;
            case '2':
            cout << "\n" << AreaTriangle_2132() << endl; // Jika user memilih 2, maka akan menjalankan funsgi menghitung luas segitiga
            break;
            case '3':
            cout << "\n" << CirclePerimeter_2132() << endl; // Jika user memilih 3, maka akan menjalankan fungsi menghitung keliling lingkaran
            break;
            case '4':
            cout << "\n" << TrianglePerimeter_2132() << endl; // Jika user memilih 4, maka akan menjalankan fungsi menghitung keliling segitiga
            break;
            default:
            cout << "Invalid command! bai bai!!" << endl; // Jika user tidak memilih 1-4 atau memasukan hal yang lain, maka pesan tersebut akan keluar
            return 0;
        }
    } while (n_2132 != 0); //Looping akan terus berjalan selama user tidak memilih 0

    return 0;
}