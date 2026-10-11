#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName);   // special scanf - accept until we enter 

    printf("Welcome %s\n", sName);


    return EXIT_SUCCESS;
}