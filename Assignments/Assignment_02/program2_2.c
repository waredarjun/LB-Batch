
#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Print number of stars
//                  accepted from user
//  Input         : Integer
//  Output        : Special symbol "*"
//  Author        : Wared Arjun Ashok
//  Date          : 31/10/2026
//
/////////////////////////////////////////////

void Display(int iNo)
{
    

    
    while(iNo > 0 )
    {
        printf("* ");

        iNo++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
