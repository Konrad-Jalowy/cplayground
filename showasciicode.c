#include <stdio.h>
#include <stdlib.h>

int main () {

    char character;

    printf("Enter the character: ");

    character = getchar();

    printf("Character entered is: %c \n", character);
    printf("Ascii code for character is %d", character);

    return(0);
}
