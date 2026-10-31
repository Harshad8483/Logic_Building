// PROBLEMS ON DIGITS (Combimed problem)  reverse no.

#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{   
    int iRev = 0;
    int  iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    return iRev;
}


int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);


    iRet = Reverse(iValue);
    printf("Reverse number is : %d\n", iRet);
    return EXIT_SUCCESS;
}