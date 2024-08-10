#include <stdio.h>
#include <stdlib.h>


 typedef struct book 
{
    int bookId;
    char bookName[20];
    char author[20];
    char publication[20];
    int pages;
    double price;
    char edition[20];
    int rating;
    char language[20];
    char category[20];

}book;

void store(book*,int);
void display(book*,int );
void search(book*,int );
void update(book*,int);
void delete(book*,int*);
void top3rating(book*,book*,int);
void insert(book*,int*);

