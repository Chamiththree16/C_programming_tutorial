#include<stdio.h>
#include<string.h>

typedef struct{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
	
	
}Book;

void printBook(Book b){
	printf("Book title : %s\n",b.title);
	printf("Book author : %s\n",b.author);
	printf("Book subject : %s\n", b.subject);
	printf("Book book_id : %d\n",b.book_id);
	
}

int main() {
	
	Book book1;
	Book book2;
	
	strcpy(book1.title, "C Programming");
	strcpy(book1.author, "Nuha Ali");
	strcpy(book1.subject, "C Progeamming Tutorial");
	book1.book_id =6495407;
	
	strcpy(book2.title, "Telecom Billing");
	strcpy(book2.author, "Zara Ali");
	strcpy(book2.subject, "Telecom Billing Tutorial");
	book2.book_id =6495700;
	
	printBook(book1);
	printBook(book2);
	
	return 0;
}
