
// Sinta Sarwo - 2311102132

#include <iostream> // Library untuk fungsi input 
#include <iomanip>  // Library untuk memanipulasikan output untuk menjadi lebih rapi
#include <queue>    // Library untuk menggunakan queue, yang digunakan dalam pencarian dan penelusuran pohon

using namespace std;

struct Pohon
{
    char Data_2132;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru; // Deklarasi root dan node baru

// Inisialisasi tree
void Initialization_2132()
{
    root = NULL;
}

bool isEmpty_2132()
{
    return root == NULL;
}

// Membuat node root
void buatNode_2132(char data)
{
    if (isEmpty_2132())
    {
        root = new Pohon();
        root->Data_2132 = data;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\n Node " << data << " have been succesfully added as roots." << endl;
    }
    else
    {
        cout << "\n Tree sudah ada!" << endl;
    }
}

// Menambah node anak kiri
Pohon *insertLeft_2132(char data, Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\n Node " << node->Data_2132 << " sudah ada child kiri !" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->Data_2132 = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\n Node " << data << " berhasil ditambahkan ke child kiri " << baru->parent->Data_2132 << endl;
            return baru;
        }
    }
}

// Menambah node anak kanan
Pohon *insertRight_2132(char data, Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\n Node " << node->Data_2132 << " sudah ada child kanan !" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->Data_2132 = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\n Node " << data << " berhasil ditambahkan ke child kanan " << baru->parent->Data_2132 << endl;
            return baru;
        }
    }
}

// Mengupdate data node
void Update_2132(char data, Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah! >:(" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        }
        else
        {
            char temp = node->Data_2132;
            node->Data_2132 = data;
            cout << "\n Node " << temp << " have been succesfully updated to " << data << endl;
        }
    }
}

// Mengambil data node
void Retrieve_2132(Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n Data node : " << node->Data_2132 << endl;
        }
    }
}

// Menemukan node dan menampilkan informasinya
void find_2132(Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n Data Node : " << node->Data_2132 << endl;
            cout << " Root : " << root->Data_2132 << endl;
            if (!node->parent)
                cout << " Parent : (tidak punya parent)" << endl;
            else
                cout << " Parent : " << node->parent->Data_2132 << endl;
            if (node->parent != NULL && node->parent->left != node &&
                node->parent->right == node)
                cout << " Sibling : " << node->parent->left->Data_2132 << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << " Sibling : " << node->parent->right->Data_2132 << endl;
            else
                cout << " Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << " Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << " Child Kiri : " << node->left->Data_2132 << endl;
            if (!node->right)
                cout << " Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << " Child Kanan : " << node->right->Data_2132 << endl;
        }
    }
}

// Menampilkan anak dari node
void DisplayChildren_2132(Pohon *node)
{
    if (node == NULL)
    {
        cout << "No child/ There are nothing in the node." << endl;
        return;
    }
    cout << "Child kiri: " << (node->left ? node->left->Data_2132 : '-') << endl;
    cout << "Child kanan: " << (node->right ? node->right->Data_2132 : '-') << endl;
}

// Menampilkan semua keturunan dari node
void DisplayDescendants_2132(Pohon *node)
{
    if (node == NULL)
    {
        cout << "Make the node first lah!" << endl;
        return;
    }
    queue<Pohon*> q; // Menggunakan queue untuk traversal level-order
    q.push(node);
    while (!q.empty())
    {
        Pohon* current = q.front();
        q.pop();
        if (current != node) cout << current->Data_2132 << " ";
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
    cout << endl;
}

// Penelusuran (Traversal)
// preOrder
void preOrder_2132(Pohon *node = root)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            cout << " " << node->Data_2132 << ", ";
            preOrder_2132(node->left);
            preOrder_2132(node->right);
        }
    }
}

// inOrder
void inOrder_2132(Pohon *node = root)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            inOrder_2132(node->left);
            cout << " " << node->Data_2132 << ", ";
            inOrder_2132(node->right);
        }
    }
}

// postOrder
void PostOrder_2132(Pohon *node = root)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            PostOrder_2132(node->left);
            PostOrder_2132(node->right);
            cout << " " << node->Data_2132 << ", ";
        }
    }
}

// Menghapus seluruh tree
void DeleteTree_2132(Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            DeleteTree_2132(node->left);
            DeleteTree_2132(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                delete node;
            }
        }
    }
}

// Hapus SubTree
void DeleteSub_2132(Pohon *node)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
    }
    else
    {
        DeleteTree_2132(node->left);
        DeleteTree_2132(node->right);
        cout << "\n Node subtree " << node->Data_2132 << " have been succesfully deleted." << endl;
    }
}

// Clears Seluruh Tree
void Clear_2132()
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!!" << endl;
    }
    else
    {
        DeleteTree_2132(root);
        cout << "\n Tree have been succesfully cleared!" << endl;
    }
}

// Cek Size Tree
int size_2132(Pohon *node = root)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size_2132(node->left) + size_2132(node->right);
        }
    }
}

// Cek Height Level Tree
int height_2132(Pohon *node = root)
{
    if (isEmpty_2132())
    {
        cout << "\n Make the tree first lah!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height_2132(node->left);
            int heightKanan = height_2132(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}

// Karakteristik Tree
void Characteristic_2132()
{
    cout << "\n Size Tree : " << size_2132() << endl;
    cout << " Height Tree : " << height_2132() << endl;
    cout << " Average Node of Tree : " << size_2132() / height_2132() << endl;
}

Pohon* findNode_2132(Pohon* node, char data)
{
    if (node == NULL)
        return NULL;
    if (node->Data_2132 == data)
        return node;
    Pohon* foundNode = findNode_2132(node->left, data);
    if (foundNode == NULL)
        foundNode = findNode_2132(node->right, data);
    return foundNode;
}

int main()
{
    Initialization_2132(); // Inisialisasi Graph/Tree
    int Choice_2132; // Deklarai Choice_2132 untuk menjadi inputan dalam switch-case
    char Data_2132, ParentData_2132; //Deklarasi Data_2132 dan ParentData_2132 untuk menyimpan data yang akan diinput oleh user
    Pohon* parentNode; //Deklarasi untuk menyimpan pointer pada node untuk operasi
    Pohon* node; //Deklarasi untuk menyimpan pointer pada node untuk operasi

    do{
        cout <<"\n   2132   Menu Data Tree/Graph   2132   " << endl; //Menu untuk memberi user pilihan ingin menggunakan fungsi-fungsi di dalam program
        cout << "1. Buat node root\n";
        cout << "2. Insert left\n";
        cout << "3. Insert right\n";
        cout << "4. Update node\n";
        cout << "5. Retrieve node\n";
        cout << "6. Find node\n";
        cout << "7. Display children\n";
        cout << "8. Display descendants\n";
        cout << "9. Pre-Order Traversal\n";
        cout << "10. In-Order Traversal\n";
        cout << "11. Post-Order Traversal\n";
        cout << "12. Delete subtree\n";
        cout << "13. Clear tree\n";
        cout << "14. Tree characteristics\n";
        cout << "0. Exit" << endl;
        cout << endl;
        cout <<"Input Operasi: ";
        cin >> Choice_2132; // Inputan user untuk berinteraksi dengan program

    switch (Choice_2132){
    case 1:{
        cout << "\n   2132   Buat Node Root   2132   " << endl;
        cout << "Input data root: ";
        cin >> Data_2132;
        buatNode_2132(Data_2132); //Memanggil buatNode_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 2:{
        cout << "\n   2132   Insert Left   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        cout << "Input parent node: ";
        cin >> ParentData_2132;
        parentNode = findNode_2132(root, ParentData_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        insertLeft_2132(Data_2132, parentNode); //Memanggil insertLeft_2132 untuk menjalakan operasi tersebut
        break;       
    }
    case 3:{
        cout << "\n   2132   Insert Right   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        cout << "Input parent node: ";
        cin >> ParentData_2132;
        parentNode = findNode_2132(root, ParentData_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        insertRight_2132(Data_2132, parentNode); //Memanggil insertRight_2132 untuk menjalakan operasi tersebut
        break;        
    }
    case 4:{
        cout << "\n   2132   Update Node   2132   " << endl;
        cout << "Input data baru: ";
        cin >> Data_2132;
        cout << "Masukkan data node yang akan di-update: ";
        cin >> ParentData_2132;
        parentNode = findNode_2132(root, ParentData_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        Update_2132(Data_2132, parentNode); //Memanggil Update_2132 untuk menjalakan operasi tersebut
        break;        
    }
    case 5:{
        cout << "\n   2132   Retrieve Node   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        node = findNode_2132(root, Data_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        Retrieve_2132(node); //Memanggil Retrieve_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 6:{
        cout << "\n   2132   Find Node   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        node = findNode_2132(root, Data_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        find_2132(node); //Memanggil find_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 7:{
        cout << "\n   2132   Display Childern   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        node = findNode_2132(root, Data_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        DisplayChildren_2132(node); //Memanggil DisplayChildren_2132 untuk menjalakan operasi tersebut
        break;        
    }
    case 8:{
        cout << "\n   2132   Display Descendants   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        node = findNode_2132(root, Data_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        DisplayDescendants_2132(node); //Memanggil DisplayDescendants_2132 untuk menjalakan operasi tersebut
        break;           
    }
    case 9:{
        cout << "\n   2132   Pre-Order Traversal   2132   " << endl;
        preOrder_2132(); //Memanggil fungsi preOrder_2132 untuk menjalakan operasi tersebut
        cout << "\n" << endl;
        break;
    }
    case 10:{
        cout << "\n   2132   In-Order Traversal   2132   " << endl;
        inOrder_2132(); //Memanggil fungsi inOrder_2132 untuk menjalakan operasi tersebut
        cout << "\n" << endl;
        break;
    }
    case 11:{
        cout << "\n   2132   Post-Order Traversal   2132   " << endl;
        PostOrder_2132(); //Memanggil fungsi PostOrder_2132 untuk menjalakan operasi tersebut
        cout << "\n" << endl;
        break;        
    }
    case 12:{
        cout << "\n   2132   Delete Subtree   2132   " << endl;
        cout << "Input data node: ";
        cin >> Data_2132;
        node = findNode_2132(root, Data_2132); //Memanggil fungsi findNode_2132 untuk menemukan node dengan data yang ditentukan di pohon
        DeleteSub_2132(node); //Memanggil fungsi DeleteSub_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 13:{
        Clear_2132(); //Memanggil fungsi Clear_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 14:{
        Characteristic_2132(); //Memanggil fungsi Characteristic_2132 untuk menjalakan operasi tersebut
        break;
    }
    case 0:{
        cout << "Exit Program, see you again in 2132 Program =D!" << endl;
        break; //User akan keluar dari program jika memilih 0
    }
    default:{
        cout << "Umm...What did you put in? Invalid command!" << endl;
    }
    }
}while (Choice_2132 != 0); //p\Program akan berhenti jika user menginputkan 0 atau 4 dalam pilihan switch case

return 0;
}