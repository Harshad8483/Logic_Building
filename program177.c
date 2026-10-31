// PROBLEMS ON DIGITS (Combimed problem)  reverse no.

// 8998   --> Palindrome 
//7007

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{   
    int iRev = 0;
    int  iDigit = 0;
    int iTemp = 0;

    iTemp = iNo;


    while(iNo != 0)
    {
        iDigit = iNo%10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    if (iRev == iTemp)        //ISSUE SOLVED 
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d", &iValue);


    bRet = CheckPalindrome(iValue);
    if (bRet == true)
    {
        printf("it is palindrome\n");
    }
    else 
    {
        printf("it is not palindrome\n");
    }
    return EXIT_SUCCESS;
}