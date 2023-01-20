//Name: David Schurer
//Class: CSS 342
//Assignment 1: Library

#include <iostream>
#include <cassert>
#include "Library.h"

void Test1() {

cout << "\n";
cout << "---------- Test Case 1 ----------\n\n";

Library libs("UWB");
libs.AddBook("Don Quixote");
libs.AddBook("In Search of Lost Time");
libs.AddBook("The Odyssey");
//libs.ListAllBooks();
cout << libs;


// should generate already in library message and return true
bool result = libs.IsInLibrary("The Odyssey");
assert(result);

// cannot add book twice, result should be false
result = libs.AddBook("The Odyssey");
assert(!result);

// test remove, result should be true
result = libs.RemoveBook("The Odyssey");
assert(result);

// not in library, result should be false
result = libs.IsInLibrary("The Odyssey");
assert(!result);

// cannot remove twice, result should be false
result = libs.RemoveBook("The Odyssey");
assert(!result);

}

void Test2() {

    cout << "\n";
    cout << "---------- Test Case 2 ----------\n\n";

    Library libs2("UWB");
    libs2.AddBook("Don Quixote");
    libs2.AddBook("In Search of Lost Time");
    libs2.AddBook("The Odyssey");
    cout << libs2;

    // cannot remove a book that does not exist in the library, result should be false
    bool result = libs2.RemoveBook("This Book Does Not Exist");
    assert(!result);
    

}

void Test3() {

    cout << "\n";
    cout << "---------- Test Case 3 ----------\n\n";

    Library libs3("ExceedSizeOfTheLibrary");

    // test to try to add more than MAX_BOOKS into the books array
    for (int i = 0; i < 200; i++) {
        string bookName = "testbook" + to_string(i);
        libs3.AddBook(bookName);
    }

    Library libs4("RemoveFromAnEmptyLibrary");

    // cannot remove a book from an empty library, result should be false
    bool result = libs4.RemoveBook("RemoveFromAnEmptyLibrary");
    assert(!result);

}

void TestAll() {

Test1();
Test2();
Test3();

cout << "\nSuccessfully completed all tests!\n";

}

int main() {

TestAll();

return 0;
}
