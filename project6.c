#include <stdio.h>
//array sizes

int main() { //main command 
    int size; // defines variable 
    printf("Enter array size: "); //  asking for array input 
    scanf("%d", &size); //input 
    int arr[size]; //defining array and using size entered as szie of array 
    printf("The size of the array is: %d\n", (int)(sizeof(arr) / sizeof(arr[0]))); // size of array is output
    return 0; //runs without error
}
