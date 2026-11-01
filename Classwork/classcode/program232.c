#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char Arr[20] = "Ganesh Pune";

    printf("%s\n",Arr);

    printf("Size of array is : %lu\n",sizeof(Arr));

    printf("leanth of string :  %d",strlen(Arr));

    return EXIT_SUCCESS;
}