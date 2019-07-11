#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

  int a ,b,c;
  srand(time(NULL));
  a = rand()%6+1;
  b = rand()%6+1;
  c=a+b;
  printf("Die 1: %d\n",a);
   printf("Die 2: %d\n",b);
    printf("Total value: %d\n",c);
    if(c > 7)
      printf("You won!\n");
    else printf("You lost!\n");
    return 0;
}
