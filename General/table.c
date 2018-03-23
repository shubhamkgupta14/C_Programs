/*

Print Multiplication Table C Program from 1 to n
 
*/



#include<stdio.h>

int main(){
   int num, limit, m, i;
   printf("Enter Number: ");
   scanf("%d",&num);
   printf("Enter limit: ");
   scanf("%d",&limit);
   
   for(i=1;i<=limit;i++){
      m = num * i;
      printf("%d * %d = %d\n",num,i,m);
   }
   return 0;
}
