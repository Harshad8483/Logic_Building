
// accept the no. from user and 
# include<stdio.h>
# include<stdlib.h>


void Disply( int iNo )
{
     int iCnt = 0;
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }

}

int main ()
{

    int iValue = 0;
   

    printf("Enter a num : \n");
    scanf("%d", &iValue);
    
    
    Disply( iValue);



    return EXIT_SUCCESS;
}