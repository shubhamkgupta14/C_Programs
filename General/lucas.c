/*

Lucas Sequence C Program

What is a Lucas Sequence?
A Lucas series is a sequence of numbers which the next number is calculated by adding the immediate preceding two consecutive numbers.

Note: The first two digits in a Lucas series are always 2 and 1.

To generate N terms in a Lucas series, the first digit in the sequence should be 2 and the next digit should be 1, which is basically hard-coded. The next digit, which is called as Lucas number, is derived by

The next digit, which is called as Lucas number, is derived from the sum of the preceding two digits in the sequence. This addition and generation of Lucas sequence go till the limit.

Example
2 1 3 4 7 11 18 29 47 76 143 219

*/

#include<stdio.h>

int main(){ 
   int first=2, second=1, sum=0, limit, i;

   printf("Enter limits: ");
   scanf("%d",&limit);

   for(i=0; i<limit; i++){
      printf("%d ",first);
      sum = first + second;
      first = second;
      second = sum;
   }
}
