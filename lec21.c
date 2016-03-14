#include <stdio.h>
#include <string.h>

typedef double dbl;


struct name{
	char first[32];
	char last [32];
};

struct grade{
	char id[10];
	struct name name;
	int score;
};
void print1(struct grade g);
void print2(struct grade *p);
void print3(const struct grade *p);
int main(int argc, char *argv[]){

dbl x, y;
struct grade a[25];

strcpy(a[0].id, "a00553100");
strcpy(a[0].name.first, "homer");
strcpy(a[0].name.last, "simpson");

print1(a[0]);
print2(&a[0]);
print3(&a[0]);
return 0;
}

void print1(struct grade g){
	printf("%s %s %s", g.id, g.name.last, g.name.first);
}

void print2(struct grade *p){
	printf("%s %s %s", p->id, p->name.first, p->name.last);
}

void print3(const struct grade *p){
	printf("%s %s %s", p->id, p->name.first, p->name.last);
}




