#include<stdio.h>
#include<stdlib.h>

void display(char *str)
{

    printf("%s\n", *str);
}

int main()
{
    char Arr[100];
    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);
    display(Arr);            // DISPLAY 100

    return EXIT_SUCCESS;
}