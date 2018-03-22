/*

Find Union and Intersection of Two Sets C Program

What is a Set?
A set is a collection of distinct objects or elements. It is therefore, a well defined collection of distinct elements. The union of set A and B is represented by A ∪ B, and it will form a resultant set which consists of all the elements of sets A and B without any repetition. The intersection of set A and B is represented by A ∩ B, and it forms a resultant set that consists of the common elements from the sets A and B.

This code for calculation intersection and union requires the arrays containing set elements to be in sorted order. If they are not in sorted order, then there will be a problem in fetching the union of the two sets.

Example of Union and Intersection of Two Arrays
A = {1, 2, 3, 4, 5, 6}

B = {4, 5, 6, 7, 8, 9}

Union: (A ∪ B) = {1, 2, 3, 4, 5, 6, 7, 8, 9}

Intersection: (A ∩ B) = {4, 5, 6}

*/

#include<stdio.h>

void union_(int arr1[], int arr2[], int n, int m){
   int i=0, j=0;
   printf("Union: ");
   while(i<n && j<m){
      if(arr1[i]<arr2[j]){
         printf("%d ",arr1[i++]);
      }
      else if(arr1[i] > arr2[j]){
         printf("%d ",arr2[j++]);
      }
      else{
         printf("%d ",arr1[i++]);
         j++;
      }
   }
   
   while(i<n){
      printf("%d ",arr1[i++]);
   }
   while(j<m){
      printf("%d ",arr2[j++]);
   }
}


void intersection(int arr1[], int arr2[], int n, int m){
   int i=0, j=0;
   printf("\nIntersection: ");
   while(i<n && j<m){
      if(arr1[i]<arr2[j]){
         i++;
      }
      else if(arr1[i] > arr2[j]){
         j++;
      }
      else{
         printf("%d ",arr1[i++]);
         j++;
      }
      printf("\n");
   }
}


void sort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
       
   }
}

int main(){
   int arr1[100], arr2[100], n, m, i, j;
   printf("Enter no of elements of set1: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&arr1[i]);
   } 
   printf("Enter no of elements of set2: ");
   scanf("%d",&m);
   for(j=0;j<m;j++){
      scanf("%d",&arr2[j]);
   }
   
   sort(arr1,n); 
   sort(arr2,m);
   union_(arr1, arr2, n, m);
   intersection(arr1, arr2, n, m);
   
   return 0;
}




