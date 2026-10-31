#include<stdio.h>
/////////////////////////////////////////////
//
//  Function Name: Accept
//  Description: Printing 5 time "*" 
//  Input : no input
//  Output : * symbol
//  Author : Wared Arjun Ashok
//  Date : 31/10/2026
//  
///////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}