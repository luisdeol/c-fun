#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

void printBook(struct Book book);

int main(){
   struct Book book1;
   
   strcpy(book1.title, "C Programming");
   strcpy(book1.author, "Luis Felipe");
   strcpy(book1.subject, "C Programming tutorial");
   book1.book_id = 1234;

   printBook(book1);
}

void printBook(struct Book book){
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
}