/*

Find Magic Number C Program

What is a Magic Number?
Also known as Hardy-Ramanujan Number or Taxicab Number, it is an integer in which, when its digits are added, it produces a sum which, when multiplied by the its reversed number, fetches the original integer.

Example
81

8 + 1 = 9

9 × 9 = 81

1729

1 + 7 + 2 + 9 = 19

19 × 91 = 1729

*/

#include<stdio.h>

int sum_of_digit(int num){
   int rem, sum=0;
   while(num!=0){
      rem = num % 10;
      num = num /10;
      sum = sum + rem;
   }
   return sum;
}

int reverse(int num){
   int rem, rev=0, temp = num;
   while(num!=0){
      rem = num % 10;
      num = num /10;
      rev = 10 * rev + rem;
   }
   return rev;
}

int main(){
   int num, r, s;
   printf("Enter a no: ");
   scanf("%d",&num);
   s = sum_of_digit(num);
   r = reverse(s);
   
   if(r*s == num){
      printf("Magic\n");
   }
   
   else{
      printf("No");
   }
   
   return 0;
}




