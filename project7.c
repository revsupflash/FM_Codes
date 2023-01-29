#include<stdio.h>
int main (){

    //bubble sort 
    int a [20],n,i,j,temp,k, b; // defining variables
    printf("array size;"); //array size prompt 
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("enter elements:"); // adding elments in accordance with value entered in array size 
        scanf("%d",&a[i]);

    }
for ( b = 0; b < n; b++) //implementation of bubble sort 
{
for ( k = 0; k <n-1; k++) 
{    if (a[k]>a[k+1]) 
    {
        temp=a[k];
        a[k]=a[k+1];
        a[k+1]=a[k]; 
    }
}
}
    
    for ( j = 0; j < n; j++) // 
    {
        printf("%d",a[j]);
    }
    return   0;




    return 0;
}