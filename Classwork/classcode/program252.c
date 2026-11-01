// A    E   I   O   U

#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{

    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'b')||(*str == 'c')||(*str == 'd'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = countX(Arr);

    printf("frequency is : %d\n",iRet);



    return EXIT_SUCCESS;
}