// Accept number from user and count number of factors which are divisible to input number
// Input :10
// Output: 2

#include<stdio.h>


int ChkCount(int iNo)
{
    int iCnt=0;
    int iFact=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFact++;

        }
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter value :\n");
    scanf("%d",&iValue);
    iRet=ChkCount(iValue);
    printf("%d\n",iRet);

    return 0;
}