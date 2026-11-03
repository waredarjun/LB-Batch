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
        else
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

    printf("frequency of capital letter is : %d\n",iRet);



    return EXIT_SUCCESS;
}