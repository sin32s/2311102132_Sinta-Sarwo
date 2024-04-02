#include <iostream>
#include <iomanip>

using namespace std;

// Node struct declaration
struct Node
{
    string Nama_132;
    long long int NIM_132;
    Node *next;
};

Node *head = nullptr; // Head declaration
Node *tail = nullptr; // Tail declaration

// Initialization of Node
void Initialization_132()
{
    head = nullptr;
    tail = nullptr;
}

// Check if the linked list is empty
bool isEmpty_132()
{
    return head == nullptr;
}

// Insert at the front
void InsertFront_132(string name_132, long long int nim_132)
{
    Node *newNode = new Node();
    newNode->Nama_132 = name_132;
    newNode->NIM_132 = nim_132;
    newNode->next = nullptr;

    if (isEmpty_132())
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// Insert at the back
void InsertBack_132(string name_132, long long int nim_132)
{
    Node *newNode = new Node();
    newNode->Nama_132 = name_132;
    newNode->NIM_132 = nim_132;
    newNode->next = nullptr;

    if (isEmpty_132())
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Count the number of nodes
int countList_132()
{
    Node *countNode = head;
    int count = 0;
    while (countNode != nullptr)
    {
        count++;
        countNode = countNode->next;
    }
    return count;
}

// Insert in the middle
void InsertMiddle_132(string name_132, long long int nim_132, int position)
{
    if (position < 1 || position > countList_132())
    {
        cout << "Position out of range" << endl;
        return;
    }
    else if (position == 1)
    {
        cout << "Position is not in the middle" << endl;
        return;
    }
    else
    {
        Node *newNode = new Node();
        newNode->Nama_132 = name_132;
        newNode->NIM_132 = nim_132;

        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Delete from the front
void deleteFront_132()
{
    if (!isEmpty_132())
    {
        Node *deleteNode = head;
        if (head->next != nullptr)
        {
            head = head->next;
        }
        else
        {
            head = tail = nullptr;
        }
        delete deleteNode;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

// Delete from the back
void deleteBack_132()
{
    if (!isEmpty_132())
    {
        Node *deleteNode = tail;
        if (head != tail)
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            tail = temp;
            tail->next = nullptr;
        }
        else
        {
            head = tail = nullptr;
        }
        delete deleteNode;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

// Delete from the middle
void deleteMiddle_132(int position)
{
    if (position < 1 || position > countList_132())
    {
        cout << "Position out of range" << endl;
        return;
    }
    else if (position == 1)
    {
        cout << "Position is not in the middle" << endl;
        return;
    }
    else
    {
        Node *deleteNode, *temp;
        temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }
        deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }
}

// Modify front
void modifyFront_132(string name_132, long long int nim_132)
{
    if (!isEmpty_132())
    {
        head->Nama_132 = name_132;
        head->NIM_132 = nim_132;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

// Modify middle
void modifyMiddle_132(string name_132, long long int nim_132, int position)
{
    if (!isEmpty_132())
    {
        if (position < 1 || position > countList_132())
        {
            cout << "Position out of range" << endl;
            return;
        }
        else if (position == 1)
        {
            cout << "Position is not in the middle" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i < position; i++)
            {
                temp = temp->next;
            }
            temp->Nama_132 = name_132;
            temp->NIM_132 = nim_132;
        }
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

// Modify back
void modifyBack_132(string name_132, long long int nim_132)
{
    if (!isEmpty_132())
    {
        tail->Nama_132 = name_132;
        tail->NIM_132 = nim_132;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

// Clear list
void clearList_132()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        Node *deleteNode = temp;
        temp = temp->next;
        delete deleteNode;
    }
    head = tail = nullptr;
    cout << "List successfully cleared!" << endl;
}

// Display list
void displayList_132()
{
    if (!isEmpty_132())
    {
        cout << "------------ 132 DISPLAY 132 ---------------" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Name" << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << left << setw(20) << "| " + temp->Nama_132 << "| " << temp->NIM_132 << endl;
            temp = temp->next;
        }

        cout << "----------------------------------------" << endl;
    }
    else
    {
        cout << "------------ 132 DISPLAY 132 ---------------" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Name" << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| (NULL)" << "| (NULL) " << endl;
        cout << "----------------------------------------" << endl;
    }
}

int main()
{
    string name_132;
    long long int nim_132;
    int position;

    Initialization_132();

    cout << "========== NON-CIRCULAR SINGLE LINKED LIST PROGRAM ==========" << endl;

    while (true)
    {
        cout << "|-------------------------|" << endl; 
        cout << "|1. Add data at front     |" << endl; 
        cout << "|-------------------------|" << endl;       
        cout << "|2. Add data at back      |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|3. Add data in middle    |" << endl;
        cout << "|-------------------------|" << endl;
        cout << "|4. Modify data at front  |" << endl;
        cout << "|-------------------------|" << endl;        
        cout << "|5. Modify data at back   |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|6. Modify data in middle |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|7. Delete data at front  |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|8. Delete data at back   |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|9. Delete data in middle |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|10.Clear List            |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|11.Display Data          |" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|0. Exit                  |" << endl;
        cout << "------------------------------------------" << endl;
        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Name: ";
            cin >> name_132;   
            cout << "Enter NIM: ";
            cin >> nim_132;
            InsertFront_132(name_132, nim_132);     
            cout << "Data [" << name_132 << "] successfully added at the front! " << endl;
            break;

        case 2:
            cout << "Enter Name: ";  
            cin >> name_132;
            cout << "Enter NIM: ";
            cin >> nim_132;       
            InsertBack_132(name_132, nim_132);
            cout << "Data [" << name_132 << "] successfully added at the back! " << endl;
            break;

        case 3:
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter name: ";
            cin >> name_132;
            cout << "Enter NIM: ";
            cin >> nim_132;
            InsertMiddle_132(name_132, nim_132, position);
            cout << "Data [" << name_132 << "] successfully added at position " << position << "!" << endl;
            break;

        case 4:
            cout << "Enter name: ";
            cin >> name_132;
            cout << "Enter NIM: ";
            cin >> nim_132;
            modifyFront_132(name_132, nim_132);
            cout << "Front data successfully modified!" << endl;
            break;

        case 5:
            cout << "Enter name: ";
            cin >> name_132;
            cout << "Enter NIM: ";
            cin >> nim_132;
            modifyBack_132(name_132, nim_132);
            cout << "Back data successfully modified!" << endl;
            break;

        case 6:
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter name: ";
            cin >> name_132;
            cout << "Enter NIM: ";
            cin >> nim_132;
            modifyMiddle_132(name_132, nim_132, position);
            cout << "Data at position " << position << " successfully modified!" << endl;
            break;

        case 7:
            deleteFront_132();
            cout << "Front data successfully deleted!" << endl;
            break;

        case 8:
            deleteBack_132();
            cout << "Back data successfully deleted!" << endl;
            break;

        case 9:
            cout << "Enter position: ";
            cin >> position;
            deleteMiddle_132(position);
            cout << "Data at position " << position << " successfully deleted!" << endl;
            break;

        case 10:
            clearList_132();
            cout << "All data successfully cleared!" << endl;
            break;

        case 11:
            displayList_132();
            break;

        case 0:
            cout << "Program terminated!" << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }

    return 0;
}