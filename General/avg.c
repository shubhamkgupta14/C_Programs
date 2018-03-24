/*

Find Average of N Numbers C Program

*/

#include<stdio.h>
int main(){
   int n, i, avg = 0, arr[100];
   printf("Enter size: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
      avg = avg + arr[i];
   }
   printf("Avg: %.2f",(float)avg/n);
   return 0;
}
