#include <stdio.h>

/*function prototype*/
void printBook(struct Books *book);

int main(int argc, char *[] argc){

/*defines the structure*/	
struct Books{
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
}book;	

struct Books book1;
struct Books book2;

strcpy(Book1.title, "C Programing");
strcpy(Book1.author, "Nuha Ali");
book1.book_id = 6495407;



return 0;
}

void printBook(struct Books *book){
	printf("Book title: %s\n", book -->title);
	
}
