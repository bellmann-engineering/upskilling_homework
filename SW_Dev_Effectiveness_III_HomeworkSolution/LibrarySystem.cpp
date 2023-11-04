#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author) : title(title), author(author) {
        checkedOut = false;
    }

    const std::string& getTitle() const {
        return title;
    }

    const std::string& getAuthor() const {
        return author;
    }

    bool isCheckedOut() const {
        return checkedOut;
    }

    void checkOut() {
        checkedOut = true;
    }

    void returnBook() {
        checkedOut = false;
    }

private:
    std::string title;
    std::string author;
    bool checkedOut;
};

class Patron {
public:
    Patron(const std::string& name) : name(name) {}

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

class Library {
public:
    void addBook(const std::string& title, const std::string& author) {
        books.push_back(Book(title, author));
    }

    void addPatron(const std::string& name) {
        patrons.push_back(Patron(name));
    }

    void checkOutBook(const std::string& bookTitle, const std::string& patronName) {
        for (Book& book : books) {
            if (book.getTitle() == bookTitle && !book.isCheckedOut()) {
                for (Patron& patron : patrons) {
                    if (patron.getName() == patronName) {
                        book.checkOut();
                        std::cout << bookTitle << " wurde von " << patronName << " ausgeliehen." << std::endl;
                        return;
                    }
                }
                std::cout << "Patron " << patronName << " wurde nicht gefunden." << std::endl;
                return;
            }
        }
        std::cout << "Das Buch " << bookTitle << " ist nicht verfügbar zur Ausleihe." << std::endl;
    }

    void returnBook(const std::string& bookTitle) {
        for (Book& book : books) {
            if (book.getTitle() == bookTitle && book.isCheckedOut()) {
                book.returnBook();
                std::cout << bookTitle << " wurde zurückgegeben." << std::endl;
                return;
            }
        }
        std::cout << "Das Buch " << bookTitle << " wurde nicht gefunden oder ist nicht ausgeliehen." << std::endl;
    }

private:
    std::vector<Book> books;
    std::vector<Patron> patrons;
};

int main() {
    Library library;

    library.addBook("Der Vorleser", "Bernhard Schlink");
    library.addBook("Im Westen nichts Neues", "Erich Maria Remarque");
    library.addPatron("Anna");
    library.addPatron("Hans");

    library.checkOutBook("Der Vorleser", "Anna");
    library.checkOutBook("Im Westen nichts Neues", "Hans");

    library.returnBook("Der Vorleser");

    return 0;
}
