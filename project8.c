#include<stdio.h>
void main()

 //check weather word is a palindrome
{
    char S[100]; //definig string with 100 characters 
    int len,i,part=0;
    printf("enter a word:"); // prompts input
    gets(S);
    len = strlen(S);   // string length 
    for(i=0;i<=len/2;i++) // loop till half 
    {
        if(S[i]!=S[len-i-1]) // to compare if charecters same 
        {
            part=1;  
            break;
        }
    }
    if(part==1)
    {
        printf("given word is not a palindrome");
    }
    else
    {
        printf("given word is a palindrome");
    }
}