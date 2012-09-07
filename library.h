#include <iostream>
#include <string>
#include <cmath>
#define BOOKCOLLECTION_SIZE 10

using namespace std;

/*
	
	Book has
		status

	LibraryCollection has
		libraries

	LibraryCollection can


	Library has
		books
		collection of users

	Library can
		let user borrow book
		let user return book
		add books
		remove books


	User has
		books
		library cards

	User can
		check a library for a book
		borrow books
		return books

*/

class Book {

	public:

		int userId;
		bool status;	// true: available, false: checked out
		string title;
		string author;
		string libraryId;

		Book () {
			setBookStatus("available");
		};

	private:

		void setBookStatus(string statusParam) {
			if (statusParam == "available") {
				status = true;
			}
			else {
				status = false;
			}
		};

};

class Library {

	public:

		int libraryId;
		string libraryName;

		Library() {
			// set number of books to 0 to begin
			numBooks = 0;
			libraryId = 1;
			libraryName = "USF Library";

			cout << "Welcome to the " << libraryName << " library" << endl << endl;
		};

		void addBook(string title, string author) {

			Book b;
			b.author = author;
			b.title = title;
			b.libraryId = libraryId;

			BookCollection[numBooks] = b;
			numBooks++;

			cout << b.author << " " << b.title << endl;

		};

		bool removeBook(string title, string author) {

			int pos = findBook(title, author);

			remove BookCollection[pos];

		};


		void listBooks() {
			for (int i = 0; i < numBooks; i++) {
				cout << BookCollection[i].title << " by " << BookCollection[i].author << endl;
			}
		}


	private:

		int numBooks;
		Book BookCollection[BOOKCOLLECTION_SIZE];

		int findBook(string title, string author) {
			/* Returns true if book removed */
			for (int i = 0; i < numBooks; i++) {
				if (BookCollection[i].title == title && BookCollection[i].author == author ) {
					return i;
				}
			}
			return -1;
		};

};
