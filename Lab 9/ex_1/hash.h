#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>

int hash(char* str, int i,int ts);
int coll_count(char** ls,int i,int ts,int n);
char** parse(char* filename);
