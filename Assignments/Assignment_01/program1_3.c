#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name: Display
//  Description: Reverce number print from 5 to 1 
//  Input : no input
//  Output : Integer
//  Author : Wared Arjun Ashok
//  Date : 31/10/2026
//  
///////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}