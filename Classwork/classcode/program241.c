#include<stdio.h>
#include<stdlib.h>

void Dispaly(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[100] ;

    printf("enter string: \n");
    scanf("%[^'\n']s",Arr);
    Dispaly(Arr);

    return EXIT_SUCCESS;
}