#include<stdio.h>
#include<stdlib.h>

void display(char *str)
{

    while (*str != '\0')
    {
        printf("%c\n", *str);
        str++;
    }
    
}

int main()
{
    char Arr[100];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);
    
    display(Arr);            // DISPLAY 100

    return EXIT_SUCCESS;
}