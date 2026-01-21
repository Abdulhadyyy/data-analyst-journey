#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookID;
    string title;
    string authorName;
    double price;
};

Book getBook(Book b) {
    cout <<"Enter Book ID: ";
    cin >> b.bookID;
    cin.ignore(); 

    cout <<"Enter Book Title: ";
    getline(cin, b.title);

    cout <<"Enter Author Name: ";
    getline(cin, b.authorName);

    cout <<"Enter Price: ";
    cin >> b.price;

    return b;
}

void showBook(Book b) {
    cout <<"\n--- Book Details ---\n";
    cout <<"Book ID: " << b.bookID << endl;
    cout <<"Title: " << b.title << endl;
    cout <<"Author: " << b.authorName << endl;
    cout <<"Price: " << b.price << endl;
}

int main() {
    Book myBook;
    
    myBook = getBook(myBook);
    showBook(myBook);

    return 0;
}