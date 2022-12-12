// Write a program which accept number from user and display its non factors.

#include <stdio.h>

void Nonfact(int iNo)
{
    
    int icnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (icnt = 1; icnt < iNo; icnt++)
    {
        if (iNo % icnt != 0)
        {

            printf("%d\n",icnt);
        }
    }

  
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d", &iValue);
    Nonfact(iValue);

    return 0;
}