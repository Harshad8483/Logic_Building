
// accept the no. from user and check wheather num is prime or not 
# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    

    for ( iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if ( iNo  % iCnt == 0)
        {
            break;
        }

    }
    return true;
    
    if(iCnt == (iNo/2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main( void )            
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d", &iValue);
    
    bRet= CheckPrime(iValue);
    if (bRet)                     // if i write only bRet in bracket then it defauit = True  after that enter 
    {
        printf("It is prime number\n");
    }
    else
    {
        printf("It is not prime number\n");
    }
    return EXIT_SUCCESS;
}