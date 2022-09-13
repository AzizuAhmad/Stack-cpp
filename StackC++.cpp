#include <iostream>
#define maksimum 5
using namespace std;

class Stack
{
    int top;
    int arr[maksimum];

public:
    Stack();
    bool isfull();
    bool isempty();
    void push(int x);
    void pop();
    void display();
    void Top();
    void Size();
    void peek(int posisi);
    void change(int posisi,int data);
};

Stack::Stack() 
{
    top = 0;
}

bool Stack::isfull() // cek apakah stack sudah penuh atau belum
{
    if (top == maksimum)
    {
        return true;
    }else
    {
        return false;
    }       
}

bool Stack::isempty() // cek stack masih kosong atau tidak
{
    if (top == 0)
    {
        return true;
    }else
    {
        return false;
    }
}

void Stack::push(int x)
{
    if (isfull())
    {
        cout << "Stack Sudah Penuh" << endl;
        return;
    }else
    {
        arr[top] = x; 
        top++;
    } 
}

void Stack::pop()
{
    if (isempty())
    {
        cout << "Stack Masih Kosong" << endl;
        return;
    }
    else
    {
        top--; 
        cout << "pops " << arr[top] << endl;
    }
}

void Stack::display() // menampilkan data pada stack
{
    int i;
    if (isempty())
    {
        cout << "Data Kosong" << endl;
    }else
    {
        cout << "Data Stack Array : " << endl;
        for (i = 0; i < top; i++)
        {
            cout << arr[i] << endl;
        }
    }
        
}

void Stack::Top() // menampilkan data paling atas
{
    cout << "Data Paling atas adalah : " << arr[top - 1] << endl;
}

void Stack::Size() // menampilkan ukuran stack
{
    cout << "Ukuran Stack Adalah : " << top << endl;
}

void Stack::peek(int posisi)
{
    if(isempty()== true)
    {
        cout << "Data Kosong" << endl;
    }else
    {
        int index = top;
        for (int  i = 0; i < posisi; i++)
        {
            index--;
        }
        cout << "data posisi ke - " << posisi << " : " << arr[index] << endl;
        
    }
}
void Stack::change(int posisi,int data)
{
    if(isempty()==true)
    {
        cout << "Data Kosong" << endl;
    }else{
        int index = top;
        for(int i=0;i<posisi;i++)
        {
            index--;
        }
        arr[index] = data;
    }
}
void choose()
{
    Stack s;
    int ch, element, result,posisi,ganti,data;
    while (1)
    {
        cout << "*--------------------------------------------------------------------*" << endl;
        cout << "1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.PEEK  9.CHANGE  10.EXIT " << endl;
        cout << "*--------------------------------------------------------------------*" << endl;
        cin >> ch;
        if (ch == 1)
        {
            cout << "Masukan Data : ";
            cin >> element;
            s.push(element);
        }
        else if (ch == 2)
        {
            s.pop();
        }
        else if (ch == 3)
        {
            s.display();
        }
        else if (ch == 4)
        {
            if (s.isfull())
            {
                cout << "Stack Telah Penuh" << endl;
            }else
            {
                cout << "Stack Belum Penuh" << endl;
            }
                     
        }
        else if (ch == 5)
        {
            if (s.isempty())
            {
                cout << "STACK Masih Kosong" << endl;
            }else
            {
                cout << "Stack Tidak Kosong" << endl;
            }         
        }
        else if (ch == 6)
        {
            s.Top();
        }
        else if (ch == 7)
        {
            s.Size();
        }else if(ch == 8)
        {
            cout << "masukan posisi yang dicari : ";
            cin >> posisi;
            s.peek(posisi);
        }else if(ch == 9)
        {
            cout << "index Berapa yang ingin anda ganti : ";
            cin >> ganti;
            cout << "masukan data yang ingin anda ganti : ";
            cin >> data;
            s.change(ganti,data);
       }else
        {
           break;
        }
            
    }
}
int main()
{
    choose();

    return 0;
}
