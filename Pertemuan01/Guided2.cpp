#include <stdio.h>
#include <string.h>

//Struct
struct Mahasiswa
{
    char name[50];
    char address[100];
    int age;
};

int main(){
    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    //mengisi nilai struct
    strcpy(mhs1.name, "Dian");
    strcpy(mhs1.addrress, "Mataram");
    mhs1.age = 22;
    strcpy(mhs2.name, "Bambang");
    
}