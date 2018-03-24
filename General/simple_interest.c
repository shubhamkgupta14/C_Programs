/*

Calculate Simple Interest C Program

The first method calculates simple interest without using function and the second method has a user – defined function to find the Simple Interest. Simple interest is basically a quick and easy calculation of the interest charged on a given principal amount.

Formula To Find Simple Interest
Simple Interest = (p * n * r) / 100

where,

             p = Principal Amount,

             n = Number of Years / Period

             r = Rate of Interest

Example
              Principal Amount = ₹ 3000

              Period = 3 years

              Rate of Interest = 10%

              Simple Interest = ₹ 900
              
*/


#include<stdio.h>

int main(){
   float p, r, t, si;
   
   printf("Enter Principle Amount, Rate of Interest, Time period: ");
   scanf("%f%f%f",&p,&r,&t);
   
   si = (p * r * t)/100;
   
   printf("SI is %.2f Rs.\n",si);
   
   return 0;
}
