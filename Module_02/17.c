#include <stdio.h>
#include <string.h>

typedef struct{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
	
	
} Book;

void printBook(Book b){
	printf("Book title : %s\n",b.title);
	printf("Book autor : %s\n",b.author);
	printf("Book subject : %s\n", b.subject);
	printf("Book book_id : %d\n" , b.book_id);
	
	
}
int main(){
	
	Book books [2];
	
	strcpy(books[0].title, "C Programming");
	strcpy(books[0].author,"Nuha Ali");
	strcpy(books[0].subject, "C Programming Tutorial");
	books[0].book_id = 6495407;
	
	strcpy(books[1].title, "Telecom Billing");
	strcpy(books[1].author, "Zara Ali");
	strcpy(books[1].subject, "Telecom Billing Tutorial");
	books[1].book_id =6495700;
	
	printBook(books[0]);
	printBook(books[1]);
	
	return 0;
}