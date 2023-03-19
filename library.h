//Name: David Schurer
//Class: CSS 342
//Assignment 1: Library
#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
using namespace std;

// Library class is defined here with all of its functions declared
class Library {

    public:
        // The library default constructor passes in the library name as its parameter
        Library(string libName);

        // Add a new book
        // return true for success, false if book already in library
        bool AddBook(const string &bookName);

        // Remove a book
        // return true for success, false if book not in library
        bool RemoveBook(const string &bookName);

        // List all books in library
        void ListAllBooks() const;

        // Return true if book in library, false otherwise
        bool IsInLibrary(const string &bookName);

        // The library overloaded output operator is used to print out all of the books in the library
        friend ostream& operator<<(ostream& out, const Library &lib);

    private:
        // Private variables declared to represent the name of each book, the library name, number of books in the library,
        // maximum number of books that can be stored in the library, and the array of books itself
        string name;
        string libraryName;
        static const int MAX_BOOKS = 100;
        int numberOfBooks;
        string books[MAX_BOOKS];

};

#endif
