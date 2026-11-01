//  

#include<stdio.h>
#include<stdlib.h>

void CountFrequvencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;
    
    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')\
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')\
        {
            iCountSmall++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;
        }




        str++;
    }
    printf("Number of capital : %d\n",iCountCapital);
    printf("Number of small : %d\n",iCountSmall);
    printf("Number of digit : %d\n",iCountDigit);
    
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequvencyX(Arr);

    



    return EXIT_SUCCESS;
}