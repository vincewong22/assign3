/*lesson on void pointers*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char id[10];
	int score;
}grade;

int main(int argc, char* argv[]){

grade a_grade;

strcpy(a_grade.id, "a00553100");
	
int n = 123;
void *p = &n;

* (int*)p = 10;

int *r = p;
*r = 11;

/*lesson on dynamic memory*/

int *q;
size_t i;

q = malloc(100*sizeof(int));

if(q==0){
fprintf(stderr, "unable to allocate memory");
exit(1);
}


for(i=0; i <100; i++){
	q[i] = 1;
	printf("%d", q[i]);
}

free(q);
return 0;
}