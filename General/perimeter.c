/*

Find Perimeter of Rectangle C Program

Formula To Calculate Perimeter of Rectangle

Perimeter of Rectangle = 2 * (length * width)

*/

#include<stdio.h>
int main(){
   float length, width, perimeter;
   
   printf("Enter length and width: ");
   scanf("%f%f",&length, &width);
   
   perimeter = 2 * (length + width);
   
   printf("%.2f\n",perimeter);
   
   return 0;
}
