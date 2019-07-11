#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  char name[20];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello %s!\n",name);
  int a ,b,c;
  printf("Rolling the Dice...\n");
  srand(time(NULL));
  a = rand()%6+1;
  b = rand()%6+1;
  c=a+b;
  printf("Die 1: %d\n",a);
   printf("Die 2: %d\n",b);
    printf("Total value: %d\n",c);

    return 0;
}
