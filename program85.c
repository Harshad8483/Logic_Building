
// accept the no. from user and it is divisible by 3 and 5 or not 
/*
      --------------------------------------------

                  Operation &&
      ---------------------------------------------
      
      Result 1        Result 2        Final Result
      ---------------------------------------------
       TRUE             True            TRUE
       TRUE             FALSE           FALSE
       FALSE            TRUE            FALSE  --------> Short circuit Evalution
       FALSE            FALSE           FALSE  --------> Short circuit Evalution
      ---------------------------------------------



*/



# include<stdio.h>
# include<stdlib.h>
void CheckDivisible(int iNo)
{
    // Logic 
    if ( (iNo % 3) == 0 && (iNo % 5) == 0 )   // If only one condition is checked and it is false then 2nd cond is not check hence it is knonw as Short circuit evalution
    {
        printf(iNo + "Divisible by 3 and 5 both\n");
    }
    else
    {
        printf(iNo + "Not Divisible by 3 and 5 \n");
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