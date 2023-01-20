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

        // friend function
        friend ostream& operator<<(ostream& out, const Library &lib) {
            lib.ListAllBooks();
            
        }

    private:
        string name;
        string libraryName;
        static const int MAX_BOOKS = 100;
        int numberOfBooks;
        string books[MAX_BOOKS];

};

#endif
