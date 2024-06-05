/*1. Write a program that defines a structure named book to keep the following
information regarding a single book:
a. Book name
b. Author Name
c. Price
d. Number of pages
The program will take info of two books from the keyboard and will display the
total price of the two books.*/
#include <stdio.h>
struct book
{
   char title[20];
   char author[20];
   float price;
   int page;
};
void main()
{
    struct book book1, book2;
    printf("Enter book information:\n");
    printf("Enter title:");
     scanf (" %[^\n]s", book1.title);
    printf("Enter author name:");
     scanf (" %[^\n]s", book1.author);
    printf("Enter the price:");
    scanf("%f", &book1.price);
    printf("Enter the number of pages:");
    scanf("%d", &book1.page);

    printf ("Enter data for book 2\n");
    printf("Enter title:");
    scanf (" %[^\n]s", book2.title);
    printf("Enter author name:");
   scanf(" %[^\n]s", book2.author);
    printf("Enter the price:");
    scanf("%f", &book2.price);
    printf("Enter the number of pages:");
    scanf("%d", &book2.page);

    printf("The total price is: %f", (book1.price + book2.price) );

}



