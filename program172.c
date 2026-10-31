// PROBLEMS ON DIGITS (Combimed problem)

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

float AvgDigits(int iNo)
{
   int iDigit = 0, iSum =0, iCount = 0;
   float fAvg = 0.0f;

   if (iNo < 0){
    iNo = -iNo;
   }
   
   iSum = SumDigits(iNo);   
   iCount = CountDigits(iNo);

   fAvg = (float)iSum / (float)iCount;    
   return fAvg;
}


int main()
{

    int iValue = 0;
    float fRet = 0.0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    fRet = AvgDigits(iValue);

    printf("Average of Digits: %.2f\n", fRet);      // Width specifier display only 2 digits after .  ex. 5.56 (.2f)
    return EXIT_SUCCESS;
}