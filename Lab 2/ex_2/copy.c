#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
  FILE* f1=fopen(argv[1],"r");
  FILE* f2=fopen(argv[2],"w");
  if(f1==NULL||f2==NULL){
    printf("Error\n" );
    exit(1);
  }
char abc[100];
  fscanf(f1,"%[^EOF]s",&abc);
  fprintf(f2, "%s",abc );
}
