
#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name: Divide
//  Description: It is use to divide two number 
//  Input : integer, integer
//  Output : Integer
//  Author : Wared Arjun Ashok
//  Date : 31/10/2026
//  
///////////////////////////////////////////////
Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    
    
    if(iNo2 == 0)           // Check for division by zero
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;
    
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    
    
    iRet = Divide(iValue1, iValue2);      // Pass the two values to the function
    
    
    printf("Division is %d", iRet);        // Print the result stored in iRet
    
    return 0;
}