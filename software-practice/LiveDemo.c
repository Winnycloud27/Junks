/*#include<stdio.h>

int main () {
   char val;

   printf("Enter the character: ");
   val = getc(stdin);
   //printf("Character entered: \n");
   printf("Character entered: %c\n", val);
   //putc(val, stdout);

   return(0);
}*/

#include <stdio.h>
#include <ctype.h> 

const char* checkInput(char input) {
    if (isalpha(input)) {
        if (islower(input))
        {
            return "The given character is a lowercase";
        } else {
        return "The given input is uppercase";
        }
    } else if (isdigit(input)) {
        if (input == '0') {
            return "The given input is just a zero";
        } else {
            return "The given input is a digit";
        }
    } else {
        return "The given input is neither alphabet nor a digit";
    }
}

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    const char* result = checkInput(input);
    printf("%s\n", result);

    return 0;
}