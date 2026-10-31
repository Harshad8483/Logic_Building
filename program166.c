// PROBLEMS ON DIGITS

// 48967
/*
   Odd: 7
   Even : 6
   like that
*/
#include<stdio.h>
#include<stdlib.h>


int SumDigits(int iNo)
{
    int iDigits = 0;
    int iSum = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    { 
        iDigits = iNo % 10;
        iSum = iSum + iDigits;
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("Summation of Digits: %d\n", iRet);
    return EXIT_SUCCESS;
}