
// accept the no. from user and it is divisible either 3 or 5
/*
      --------------------------------------------

                  Operation ||
      ---------------------------------------------
      
      Result 1        Result 2        Final Result
      ---------------------------------------------
       TRUE             True            TRUE   ----> Short circuit Evalution
       TRUE             FALSE           TRUE   ----> Short circuit Evalution
       FALSE            TRUE            TRUE  
       FALSE            FALSE           FALSE
      ---------------------------------------------

*/

# include<stdio.h>
# include<stdlib.h>
void CheckDivisible(int iNo)
{
    // Logic 
    if ( (iNo % 3) == 0||(iNo % 5) == 0 )   // If only one condition is checked and it is TRUE n 2nd cond is not check hence it is knonw as Short circuit evalution
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