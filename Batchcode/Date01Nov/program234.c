#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char Arr[100];

    printf("enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("enter string is: %s\n",Arr);

    return EXIT_SUCCESS;
}