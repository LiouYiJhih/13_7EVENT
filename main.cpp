#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    /* data */
    char name[30];
    long index;
    bool on_shelf;
public:
    Book(char* name) : index(-1), on_shelf(true)
    {
        set_name(name);
    }
    
    void set_name(char* i_string)
    {
        strcpy(name, i_string);
    }
    void show_data();
    bool lend_out();
};

void Book::show_data()
{
    cout << "name : " << name;
    cout << ", index : " << index;

    if (on_shelf == true)
    {
        cout << " On shelf." << endl;
    }
    else
    {
        cout << " Not on shelf." << endl;
    }
}

bool Book::lend_out()
{
    if (on_shelf == true)
    {
        on_shelf = false;
        return true;
    }
    else
    {
        return false;
    }
}

int i = 1;

int main()
{
    char name[30] = "The C++ Bible.";
    Book A_Book(name);
    cout << "Before lend out... " << endl;
    A_Book.show_data();

    A_Book.lend_out();

    cout << "After lend out..." << endl;
    A_Book.show_data();


    int i = 2;
    cout << " i = " << i << endl;
    cout << "::i = " << ::i << endl;

    return 0;
}