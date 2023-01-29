#include <stdio.h>  // specifies library  (standard input output file)

//variables
int main() { // main command
 
        //the header in each sub-code is used to declare the respsective variables 
        // &used to declae location of storage v
        

    char c; 
    printf("Enter a character: "); //char input
    scanf("%c", &c);

    int i;
    printf("Enter an integer: "); //int input
    scanf("%d", &i);

    double d;
    printf("Enter a double: "); //double input
    scanf("%.2lf", &d);

    char s[100];
    printf("Enter a string: "); //string input 
    scanf("%s", s); //no need for a & since 

    printf("You entered: %c %d %.2lf %s\n", c, i, d, s); //output , limit specififers for each is used to extract output 

    return 0;
}