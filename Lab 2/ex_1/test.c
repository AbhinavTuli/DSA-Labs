#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  /* Initial try, works, but not optimum code for (int j=2;j<strlen(argv[0]);j++){
  printf("%c",argv[0][j]);
}

  printf(" ");

  */

  printf("%s ",argv[0]+2 ); // Added instead of initial try

  for (int i=1;i<argc;i++){
    //printf("b\n" );
    printf("%s ",argv[i]);
  }

}
