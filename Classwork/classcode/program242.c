#include<stdio.h>
#include<stdlib.h>

void Dispaly(char *str)
{
    while(*str != '\0')
    {
    printf("%s\n");
    *str++;
    }
    printf("\t");


}

int main()
{
    char Arr[100] ;

    printf("enter string: \n");
    scanf("%[^'\n']s",Arr);
    Dispaly(Arr);

    return EXIT_SUCCESS;
}