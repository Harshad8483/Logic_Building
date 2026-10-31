// PROBLEMS ON DIGITS

#include<stdio.h>
#include<stdlib.h>


int CountDigits(int iNo)
{
    int iDigits = 0;
    int iCount = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    { 
        iDigits = iNo % 10;
        iNo = iNo/10;
        iCount++;
    }
    return iCount;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Count of Digits: %d\n", iRet);
    return EXIT_SUCCESS;
}