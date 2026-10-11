#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%s", sName);   // scanf only accpt 1st whitespace 

    printf("Welcome %s\n", sName);


    return EXIT_SUCCESS;
}