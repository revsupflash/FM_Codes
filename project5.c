#include <stdio.h>
#include <string.h> //string function library

//counting vowels

int count_vowels(const char *str) { //defining variable 
  int count = 0;  // Initialize count to 0
  for (int i = 0; i < strlen(str); i++) {  // Loop through the string
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') { //OR expression used to reiteriate function 
      count++;  // If it is a vowel, count is incremented 
    }
  }
  return count;  // Returns the counting process
}

int main(void) {
  char str[100];  // Declared a string 
  printf("Enter a string without space : ");  // input
  scanf("%s", str);  // Read the string from the user
  printf("Number of vowels: %d\n", count_vowels(str));  // previously defnined count_vowels function used to define it 
  return 0;  // Returns without error 
}
