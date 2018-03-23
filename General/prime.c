/*

Prime Numbers From 1 To N C Program

*/

#include<stdio.h>
int main(){
   int limit, i, j, count;
   
   printf("Enter limit: ");
   scanf("%d",&limit);
   i=2;
   printf("Prime no: ");
   
   while(i<=limit){
      count = 0;
      for(j=1;j<=i;j++){
         if(i%j==0){
            count++;
         }
      }
      if(count<=2){
         printf("%d ",i);
      }
      i++;
   }
   
   printf("\n");
   return 0;
}
