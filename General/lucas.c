#include<stdio.h>

int main(int a, char* p[]){
   
   int first = 2, second = 1;
   int sum = 0, limit, i;

   limit = atoi(p[1]);
   
   for(i=0; i<limit; i++){
      printf("%d ",first);
      sum = first + second;
      first = second;
      second = sum;
   }

}
