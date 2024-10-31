# include<iostream>
using namespace std;

class Book {

private:
string Author;
string Title;
int PublicationYear;

public:

// setter(mutator) functions
void setAuthor(string author) {
    Author = author;
}
void setTitle(string title) {
    if (title == "") {
        cout << "Title cannot be empty!" << endl;
    }
    else {
    Title = title;
    }
}
void setPublicationYear(int year) {
    if (year >= 1450 && year <= 2024) {
    PublicationYear = year;
    }
    else {
        cout << "Invalid publication year!" << endl;
    }
}

// getter(accessor) functions
string getAuthor() const {
    return Author;
}
string getTitle() const {
    return Title;
}
int getPublicationYear() const {
    return PublicationYear;
}
};

// main function
int main() {
    Book b1; // creates an object b of Book dtype

    b1.setAuthor("Haward Anton");
    b1.setTitle("");
    b1.setPublicationYear(1800);

    cout << b1.getAuthor() << endl;
    cout << b1.getTitle() << endl;
    cout << b1.getPublicationYear() << endl;
    
    return 0;
}