#include <iostream>
#include <string>
using namespace std ;

	struct Book {
		int id; 
		char name[50];
		float price;
	};
	struct BookStore{
		int id; 
		char name[50];
		char category[50];
		int size;
		Book * books;
	};
	Book findBook(const BookStore bookStore, const char* name){
		for (int  i = 0; i < bookStore.size; i++) {
			if(strcomp(bookStore.books[i], name) == 0 ){
				return bookStore.books[i];
			}
		}
		
	}
	int main () {
		BookStore bookStore = {1, "An Najah Books", "IT", 10};
		bookStore.books = new Book[bookStore.size];
		bookStore.books[0] = Book{1, "Java", 59.2};
		bookStore.books[0] = Book{2, "Software enginnering", 89.2};
		bookStore.books[0] = Book{3, "C/C++", 99.9};
		bookStore.books[0] = Book{4, "PHP", 12.0};
		bookStore.books[0] = Book{5, "Web programming", 50};
	    Book book = findBook(bookStore, "C/C++");

		return 0;
	}
