// PROBLEMS ON DIGITS

// i/p = 6457      -> 22   --> 5.5
// i/p = 734       ->14   --> 4.66
#include<stdio.h>
#include<stdlib.h>

float AvgDigits(int iNo)
{
    int iDigits = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigits = iNo%10;
        iSum = iSum + iDigits;
        iCount++;

        iNo = iNo/10;
        fAvg = iSum/iCount;
        

    }
    return fAvg;
}


int main()
{

    int iValue = 0;
    float fRet = 0.0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    fRet = AvgDigits(iValue);

    printf("Average of Digits: %f\n", fRet);
    return EXIT_SUCCESS;
}