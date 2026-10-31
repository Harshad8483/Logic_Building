// PROBLEMS ON DIGITS

// 48967
/*
   Odd: 7
   Even : 6
   like that
*/
#include<stdio.h>
#include<stdlib.h>


void DisplyDigits(int iNo)
{
    int iDigits = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    { 
        iDigits = iNo % 10;
        if(iDigits % 2 == 0)
        {
        printf("Even : %d\n", iDigits);
        }
        else{
            printf("Odd : %d\n", iDigits);
        }
        iNo = iNo/10;
    }
}
int main()
{

    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    DisplyDigits(iValue);
    return EXIT_SUCCESS;
}