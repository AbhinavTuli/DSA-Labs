#include <stdio.h>

int main(void){
  int cno[16];
  char bcode[5];
  char exp[7];
  char name[20];
  //FILE *fptr=fopen("10.txt","r");
  scanf("%[^,],%[^,],%[^,],%[^\n]",cno,bcode,exp,name);
  printf("a %s a\n",cno);
  printf("b %s b\n",bcode);
  printf("c %s c\n",exp);
  printf("d %s d\n",name);
}
