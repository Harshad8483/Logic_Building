#include<stdio.h>
#include<stdlib.h>

int countSpaceX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(
            (*str == ' ' )
        ){
          iCount++;
        }
        
        str++;
    }
    return iCount;
}


int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("enter a string : \n");
    scanf("%[^'\n']s", Arr);

    iRet= countSpaceX(Arr);

    printf("Count number of White spaces  : %d\n", iRet);


    return EXIT_SUCCESS;
}