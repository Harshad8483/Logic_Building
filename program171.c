// PROBLEMS ON DIGITS

// i/p = 6457      -> 22   --> 5.5
// i/p = 734       ->14   --> 4.66
#include<stdio.h>
#include<stdlib.h>

float AvgDigits(int iNo)
{
   int iDigit = 0, iSum =0, iCount = 0;
   float fAvg = 0.0f;

   if (iNo < 0){
    iNo = -iNo;
   }

   while(iNo != 0)
   {
    iDigit = iNo%10;
    iSum = iSum + iDigit;
    iCount++;
    iNo = iNo/10;
   }
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