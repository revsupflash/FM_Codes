#include <stdio.h>
int main() {
    //selection sort
   int arr[10],n,i,j,pos,swap; // defining variables and array 
   printf("enter the no of elements:"); //input prompt
   scanf("%d",&n); //input value for n
   printf("enter the array:"); //array input prompt
   for(i=0;i<n;i++) // for loop for initial value 
   scanf("%d",arr[i]); // executes array input 
   for (i = 0; i < (n - 1); i++) { 
      swap = i;
      for (j = i + 1; j < n; j++) { //selection sort implementation
         if (arr[swap] > arr[j])  
            swap = j;
      }
      if (swap != i) {
         swap = arr[i];
         arr[i] = arr[swap];
         arr[swap] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]); //output implemented 
   return 0; //returns without error 
}