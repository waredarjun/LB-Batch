#include<stdio.h>
#include<stdlib.h>

void Sumation(int iNo)
{
    int iCnt = 0,iSum =0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum = iSum+iCnt;
    }

    return iSum;

}


int main()
{
    int iValue =0, iRet = 0 ;
    

    printf("enter a number: \n");
    scanf("%d",&iValue);

    
    iRet = Sumation(iValue);

    printf("Sumation is : %d\n",iRet);


    return EXIT_SUCCESS;
}