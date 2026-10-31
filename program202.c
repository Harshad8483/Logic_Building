/*
  Input :     4
  output:     A   B  C  D  

*/
#include <stdio.h>
#include <stdlib.h>



void Pattern(int iNO)
{
    int iCnt = 0;
    char ch = '\0';

    ch = 'A';

    for(iCnt=1; iCnt<= iNO; iCnt++)
    {
        printf("%c\n", ch);
        ch++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Value: \n");
    scanf("%d", &iValue);


    Pattern(iValue);



    return EXIT_SUCCESS;
}