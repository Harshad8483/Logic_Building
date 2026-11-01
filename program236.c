#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char Arr[10] = "Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);         // pointer ptr to point to the very first element of the array Arr.

    printf("%c\n",*ptr );
    ptr++;

    printf("%c\n",*ptr );
    ptr++;

    printf("%c\n",*ptr );
    ptr++;

    printf("%c\n",*ptr );
    ptr++;


    return EXIT_SUCCESS;
}