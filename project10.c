#include <stdio.h>

//sum of matrix and its elemets

int main() { // defines main function 
    int a[100][100],i,j,sum=0,sumpd=0,sumsd=0; // defining the varaibles being used 
    printf("enter the array:"); //input prompt 
    for(i=0;i<4;i++)  // for loop started for i
    {for (j=0;j<4;j++) // for loop starte for j 
    {scanf("%d",&a[i][j]);}  // frist element 
    }
    printf("the array is:");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of the array is:");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum); // sum of all is pinted 
    printf("\nthe sum of the primary diagnol is:");
    for(i=0;i<4;i++){ // for loop is run to repeat the same for all i.j variations 
        
            sumpd=sumpd+a[i][i];
    
    }
    printf("%d",sumpd);
    printf("the sum of the secondary diagnols:"); 
    for(i=0;i<4;i++)
    {
      sumsd=sumsd+a[i][4-1-i]; // sum of diagonals pinted by reducing the differance
    }
    printf("%d",sumsd);
    
    
return 0;
}