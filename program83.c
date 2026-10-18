// accept the no. from user and it is divisible by 3 or not 
# include<stdio.h>
# include<stdlib.h>
void CheckDivisible(int iNo)
{
    // Logic 
    if ( (iNo % 3) == 0) 
    {
        printf("Divisible by 3\n");
    }
    else
    {
        printf("Not Divisible by 3 \n");
    }
}
int main ()
{

    int iValue = 0;
    printf("Enter a num : \n");
    scanf("%d", &iValue);
    CheckDivisible(iValue);



    return EXIT_SUCCESS;
}