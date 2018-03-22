/*

Check if a Number is Positive or Negative C Program

*/


#include<stdio.h>

int main(){
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   
   if(num>0){
      printf("Number %d is Positive.\n",num);
   }
   
   else if(num<0){
      printf("Number %d is Negative.\n",num);
   }
   
   else{
      printf("Number %d is Zero.\n",num);
   }
   
   return 0;
}
