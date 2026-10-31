
#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display "Hello" when user 
//                  input is less than 10
//                  otherwise print " Demo"
//  Input         : Integer
//  Output        : "Hello" or " Demo"
//  Author        : Wared Arjun Ashok
//  Date          : 31/10/2026
//
/////////////////////////////////////////////

void Display(int iNo)
{

    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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
