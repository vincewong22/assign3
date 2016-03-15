#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LINESIZE 1024
#define NAMESIZE 20
#define BLOCK 2

typedef struct{
	char last[NAMESIZE];
	char first[NAMESIZE];
}name;

typedef struct{
	name name;
	int score;
}record;

typedef struct{
	char** data;
	size_t nalloc;
	size_t nused;
}record_list;

int get_input(record *r);
void get_record_list(record_list *r_list);
int main(int argc, char* argv[]){

record_list r_list;

record a_record;

get_record_list(&r_list);
size_t i;
for(i=0; i <r_list.nused;i++)
		printf("%s", r_list.data[i]);
	
return 0;
}

void get_record_list(record_list *r_list){
	char line[LINESIZE]; /*temporarily store lines*/
	size_t i;
	int valid =1;
	
	size_t nalloc, nused;
	char **lines;
	lines = 0;
	nalloc = nused = 0;
	
	while(fgets(line, LINESIZE,stdin)){
		if(nused == nalloc){
		char** tmp = realloc(lines, (nalloc + BLOCK) * sizeof(char*));
		if(tmp==0){
		fprintf(stderr, "memory request failure");
		break;
		}
		lines = tmp;
		nalloc +=BLOCK;
		}
		lines[nused] = malloc(strlen(line)+1);
		if(lines[nused] == 0){
		fprintf(stderr, "cannot find memory to store line");
		break;
		}
		strcpy(lines[nused++],line);
	}
	
	
	r_list->data = lines;
	r_list->nalloc = nalloc;
	r_list->nused = nused;
	
	/* for(i=0; i <nused;i++)
		printf("%s", lines[i]); */
	
	/* for(i=0; i < nused; i++)
		free(lines[i]);
	free(lines); */
}
/**/
int get_input(record *r){
	char line[LINESIZE]; /*temporarily store lines*/
	/* char first[NAMESIZE];
	char last[NAMESIZE];
	char score[NAMESIZE];
	int check_score; */
	
	size_t i;
	int valid =1;
	
	size_t nalloc, nused;
	char **lines;
	lines = 0;
	nalloc = nused = 0;
	
	while(fgets(line, LINESIZE,stdin)){
		if(nused == nalloc){
		char** tmp = realloc(lines, (nalloc + BLOCK) * sizeof(char*));
		if(tmp==0){
		fprintf(stderr, "memory request failure");
		break;
		}
		lines = tmp;
		nalloc +=BLOCK;
		}
		lines[nused] = malloc(strlen(line)+1);
		if(lines[nused] == 0){
		fprintf(stderr, "cannot find memory to store line");
		break;
		}
		strcpy(lines[nused++],line);
	}
	
	for(i=0; i <nused;i++)
		printf("%s", lines[i]);
	
	for(i=0; i < nused; i++)
		free(lines[i]);
	free(lines);
	
	
	/* while(1){
	if(!fgets(line, LINESIZE, stdin)){
		clearerr(stdin);
		break;
		}
		if(sscanf(line, "%s %s %s", first, last, score)==3){
		
		for(i=0; score[i] != '\0'; i++){
		if(!isdigit((int)score[i]))
			valid = -1;
		}
		
		for(i=0; first[i] !='\0'; i++)
			if(i >= NAMESIZE)
				valid =-1;
		for(i=0; last[i] !='\0'; i++)
			if(i >= NAMESIZE)
				valid =-1;
			
		check_score = atoi(score);
		
		 if(check_score >=100 || check_score <=0)
			valid = -1;
		
		
		if(valid ==1){
		printf("%s %s %s\n",last, first, score);
		strcpy(r->name.first,first);
		strcpy(r->name.first,last);
		r->score = check_score;
		}
		
		}
	}
	*/
	return 1;
}