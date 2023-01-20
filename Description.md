# CSS342-Assignment-1-Classes
Assignment Description:

Assignment 1: Library

Goals: Write a C++ class with separate .h and .cpp file, use partially filled arrays.

Create a new class called Library that uses a private string array to store the list of books and supports the following functions:

// Add a new book,
// return true for success, false if book already in library
bool AddBook(const std::string &name);

// Remove a book,
// return true for success, false if book not in library
bool RemoveBook(const std::string &name);

// List all books in library
void ListAllBooks() const;

// Return true if book in library, false otherwise
bool IsInLibrary(const std::string &name) const;

// friend function. Print the library name and a list of books
friend std::ostream &operator<<(std::ostream &out, const Library & lib);
