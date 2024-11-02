# include<iostream>
using namespace std;

class Book {

    //private data members
    private:
    string title, author, ISBN;
    int price, quantity;
    static int totBokSold;
    
    // public member functions
    public:

    // parameteized constructor
    Book(string title, string author, string ISBN, int price, int quantity) {
        this -> title = title;
        this -> author = author;
        this -> ISBN = ISBN;
        this -> price = price;
        this -> quantity = quantity;
        cout << "Book with " << title << " created." << endl;
    }

    // copy constructor
    Book (Book &other) {
        title = other.title;
        author = other.title;
        ISBN = other.ISBN;
        price = other.price;
        cout << "Book with " << title << " (copy) created." << endl;
    }

    // destructor 
    ~Book() {
        cout << "Book with " << title << " removed." << endl;
    }

    // display function
    void display() {
        cout << "Title: " << title << endl << "Author: " << author << endl << "ISBN: " << ISBN << endl << "Price: " << price << endl << "Quantity: " << quantity << endl;
    }

    // keeping track of sold books
    void keeptrack(int numSold) {
        if (numSold <= quantity) {
            quantity -= numSold;
            totBokSold += numSold;
            cout << numSold << " copies if title " << title << " sold." << endl; 
        } else {
            cout << "Not enough stock to sell " << numSold << " copies of title " << title << endl;
        }
    }

    // static function to get total number of books sold
    statics int gettotBokSold() {
        return totBokSold;
    }


};

// initialize static member variale
int Book :: totBokSold = 0;
