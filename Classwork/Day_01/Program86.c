#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo %3 )==0))
    {
        if ((iNo%5)==0)
        {
            printf("it is divisible\n");      
        }
        else
        {
            printf("It is not divisible\n");
        }  
    }
    else
    {
        printf("it is not divisible\n");
    }
}
int main()
{
    int iValue =0 ;

    printf("enter a number: ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}