#include<stdio.h>
#include<stdlib.h> //another directory is added to implement void
void bubblesort(int a[],int size);
void main()

 //bubble sort as a seperate function 
{
  double a[20],n;
  int i;

  printf("\n Enter the size of the array");
  scanf("%lf",&n);
  if(n>20)
  {
    printf("\n error");
    exit(0);
  }

 printf("\n Enter the array elements: \n");

 for(i=0;i<n;i++)
  scanf("%lf",&a[i]);
  bubblesort(a,n);
  printf("\n The sorted array is\n");
  for(i=0;i<n;i++)
  printf("%lf\t",a[i]);
}
void bubblesort(int a[],int size) //bubblesort implemented as a part of the function above, i.e.output is already sorted 
{
  int temp,i,j;
  for(i=0;i<size;i++)
  {
   for(j=0;j<size-1;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }
}