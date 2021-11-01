#include <iostream>
#include<string.h>
using namespace std;
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
			if(strcmp(bookStore.books[i].name, name) == 0 ){
				return bookStore.books[i];
			}
		}
		Book tmp = {-1};
		return tmp;
	}
int main(){
        BookStore bookStore = {1, "An Najah Books", "IT", 10};
		bookStore.books = new Book[bookStore.size];
		bookStore.books[0] = Book{1, "Java", 59.2};
		bookStore.books[1] = Book{2, "Software enginnering", 89.2};
		bookStore.books[2] = Book{3, "C/C++", 99.9};
		bookStore.books[3] = Book{4, "PHP", 12.0};
		bookStore.books[4] = Book{5, "Web programming", 50};
	    Book book = findBook(bookStore, "C/C++");
	    cout << book.id <<endl;
	    if(book.id != -1){
	        cout << book.id << " | "<< book.name << " | " << book.price<<endl;
	    } else {
            cout<<"The book not found!"<< endl;   
	    }

    return 0;
}
