// PROBLEMS ON DIGITS
// 8967     -> 6  8
// 4268     -> 8 6 2 4
// 5799     -> ------
#include<stdio.h>
#include<stdlib.h>


void DisplyEvenDigits(int iNo)
{
    int iDigits = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    { 
        iDigits = iNo % 10;
        if(iDigits % 2 != 0)
        {
        printf("%d\n", iDigits);
        }
        iNo = iNo/10;
    }
}
int main()
{

    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    DisplyEvenDigits(iValue);
    return EXIT_SUCCESS;
}