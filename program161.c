// PROBLEMS ON DIGITS

#include<stdio.h>
#include<stdlib.h>


void DisplyDigits(int iNo)
{
    int iDigits = 0;
    
    
    while(iNo != 0)
    {
        iDigits = iNo % 10;
        printf("%d\n", iDigits);
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