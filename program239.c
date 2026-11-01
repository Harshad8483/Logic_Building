#include<stdio.h>
#include<stdlib.h>

void display(char str[])            // Areay is internally trated as pointer "char str[]"
{

    printf("%s\n", str);
}

int main()
{
    char Arr[] = "Ganesh";
    display(Arr);

    return EXIT_SUCCESS;
}