
// accept the no. from user and it is divisible by 3 and 5 or not 
# include<stdio.h>
# include<stdlib.h>
void CheckDivisible(int iNo)
{
    // Logic 
    if (( (iNo % 3) == 0 ))   // If only one condition is checked and it is false then 2nd cond is not check hence it is knonw as Short circuit evalution
    {  
        if (  (iNo % 5 ) == 0)
        {
        printf(iNo + " it is divisible\n" );
    }
    else
    {
        printf(iNo + "Not Divisible \n");
    }
    }
    else{
        printf(iNo + "Not Divisible \n");
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