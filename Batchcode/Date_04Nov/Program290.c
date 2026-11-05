/*

    Step 1:Understand the problem statement
    Step 2:Write the algorithm
    Step 3:Decide the programming language
    Step 4:Write the program
    Step 5:Test the Program
    
*/

////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//          User wnat to Decimal, Octal, 
//          Hexadecimal Value integer using 
//          there owen asscess specifire 
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step 2: Write the algorithm
//      
/*      START
            Declear integer No and store value 67
            prient the octal value, decimal value, 
            hexadecimal value using there own asscess
            specifire         
*/  
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 3: Decide the programming language
//        We select C programming 
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 4: Write the program
//        
//  
////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//  Entery point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int No = 98;

    printf("Decimal : %d\n",No);
    printf("Octal : %o\n",No);
    printf("Hexadecimal : %x\n",No);
    printf("Hexadecimal : %X\n",No);


    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
//
//  Step 5:Test the Program
//  
//  Tested test Cases
//  --------------------------------------------
//  Integre    Access Specifire   Printing value     
//----------------------------------------------
//  67              %d              67
//  67              %o              103
//  67              %x              43
//  67              %X              43
//                            
////////////////////////////////////////////////