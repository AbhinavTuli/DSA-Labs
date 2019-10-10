#include <stdio.h>
int bits;

void p();
void g();
void h(int);
void d();


int main(void){
//  p(); uncomment all to get (a) part
//  g();
  h(0);
//  d();

}

void p(){
  int pilani=0;
  g();
  printf("%u in p\n",&pilani);
}

void g(){
  int goa=0;
  d();
  printf("%u in g\n",&goa);
}

void h(int n){
  if (n<10){  //remove if block to get (a)
    h(n+1);
  }
  int hyderabad=0;
  printf("%u in h\n",&hyderabad);
}

void d(){
  int dubai=0;
  printf("%u in d\n",&dubai);
}
