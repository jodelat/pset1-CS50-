#include <cs50.h>
#include <stdio.h>

int main(void)

{
    char name;
    printf("Type in the first letter of your name: \n");
    name = GetChar();
    printf("The first letter of your name is %c\n", name);
    
    return 0;
}