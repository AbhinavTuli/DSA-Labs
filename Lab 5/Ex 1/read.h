#include <stdio.h>
#include <stdlib.h>
struct cc{
  char cno[50];
  char bcode[50];
  char exp[50];
  char fname[50];
  char lname[50];
};
const char* getfield(char* line, int num);
struct cc* readcc(FILE*fptr,struct cc* ptr);
struct cc* insertInOrder(struct cc cc1,struct cc* ptr,int n);
struct cc* insertionSort(struct cc*ptr, int n);
