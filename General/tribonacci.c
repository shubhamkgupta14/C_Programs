/*

Tribonacci Series C Program

What is a Tribonacci Sequence?
A Tribonacci sequence is a sequence of numbers in which the next number is found by adding the previous three consecutive numbers.

Note: The first three digits in a Tribonacci series is always 0, 1 and 2.

A Tribonacci sequence consists of first digit as 0, second digit as 1 and third digit as 2. The next digit (fourth element) is dependent upon the preceding three elements.

The fourth element is, therefore, the sum of previous three digits. This addition of previous three digits continues till the limit.

So, primarily Fibonacci series makes use of two preceding digits whereas tribonacci sequences makes use of preceding three digits

Example
0 1 2 3 6 11 20 37 68 125

*/




#include<stdio.h>

int main(){
   int first = 0, second = 1, third = 2, sum = 0, i, n;
   printf("Enter limit: ");
   scanf("%d",&n);
   printf("%d %d %d ",first,second,third);
   
   for(i=3;i<n;i++){
      sum = first + second + third;
      printf("%d ",sum);
      first = second;
      second = third;
      third = sum;
   }
   printf("\n");
   return 0;
}
