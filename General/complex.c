/*

Add Two Complex Numbers C Program

What are Complex Numbers?
A Complex Number is expresses in the format A + Bi, where A and B are Real Numbers and i is an Imaginary Variable. In this expression, A is the real part whereas B is the imaginary part. The complex number should satisfy the equation i2 = -1.

*/

#include<stdio.h>
#include <stdlib.h>

int main(){
   int first_real, second_real, first_img, second_img, sum = 0;
   printf("Enter first no (a1, b1): ");
   scanf("%d%d",&first_real, &first_img);
   printf("Enter second no (a2, b2): ");
   scanf("%d%d",&second_real, &second_img);
   if((first_img + second_img) > 0)
      printf("%d + %di\n",(first_real + second_real),(first_img + second_img));
   else if((first_img + second_img) < 0)
      printf("%d - %di\n",(first_real + second_real),abs(first_img + second_img));
   else
      printf("%d\n",(first_real + second_real));
   return 0;
}
