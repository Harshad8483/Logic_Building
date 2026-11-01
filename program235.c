#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char Arr[100];

    printf("Enter a string : \n");
    // scanf("%[^'\n']s", Arr);
    fgets(Arr, sizeof(Arr),stdin);        // reads an entire line of text, including spaces, up to (but not including) the newline character \n and stores it in the character array Arr.

    printf("Entered string is : %s\n", Arr);


    return EXIT_SUCCESS;
}