#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int iCount = 0;
    char Arr[20] = "jay ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while (*ptr != '\0')
    {
        iCount++;
        
        ptr++;
    }
    printf("lenth of sring is : %d\n",iCount);

    return EXIT_SUCCESS;
}