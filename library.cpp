//Name: David Schurer
//Class: CSS 342
//Assignment 1: Library
#include <iostream>
#include <string>
#include "library.h"
using namespace std;

// Library constructor used to initialize libraryName and numberOfBooks
Library::Library(string libName) {
    libraryName = libName;
    numberOfBooks = 0;

}

// Method definition for addBook method
bool Library::AddBook(const string &bookName) {
    name = bookName;
    
    // Iterate through the books array
    for (int i = 0; i < MAX_BOOKS; i++) {
        // If that index of the books array is equal to the name of the book, return false
        if (books[i] == name) { 

            return false;
        // Else if that index of the books array is empty, add that book name to that index of the books array, increment numberOfBooks and return true
        } else if (books[i] == "") {

            books[i] = name;
            numberOfBooks++;
            return true;
            
        }
       
    }
    return false; // Return false if the books array is already full
}

// Method defintion for RemoveBook method
bool Library::RemoveBook(const string &bookName) {
    name = bookName;
    // Iterate through the books array
    for (int i = 0; i < MAX_BOOKS; i++) {
        // If the index of the books array is equal to the name of the book, change the value of the index to empty, decrement the number of books and return true
        if (books[i] == name) {

            books[i] = "";
            numberOfBooks--;
            return true;
        
        }
      
    }
    cout << name << " was not found in the library\n";
    return false; // Return false if that book was not found in the library
}

// Method definition for the ListAllBooks method
void Library::ListAllBooks() const {
    cout << "List of All Books In The Library:\n";
    // Iterate through the books array and if the index of the array is not empty, print out the book name
    for (int i = 0; i < MAX_BOOKS; i++) {
        
        if (books[i] != "") {
        cout << books[i] << "\n";
    }
       }

    }

// Method defintion for the IsInLibrary method
bool Library::IsInLibrary(const string &bookName) {
    name = bookName;
    // Iterate through the books array
    for (int i = 0; i < MAX_BOOKS; i++) {
    // If that index of the books array has that name of the book, return true
    if (books[i] == name) {

        cout << name << " was found in the library.\n";

        return true;

    }
  
    
    }
        // If all elements of the array have been iterated through and the book name has not been found, return false
         cout << name << " was not found in the library.\n";

            return false;


    }

// The overloaded output operator will print all of the books in the library to the output screen
ostream& operator<<(ostream& out, const Library &lib) {
        lib.ListAllBooks();
        return out;
}
