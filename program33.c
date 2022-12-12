// accept number from user and check wheck whether it is pallendrome or not....
//Input=751
//output=157


#include <stdio.h>
#include<stdbool.h>

bool Checkpallendrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int itemp=0;

    
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    itemp=iNo;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iRev=iRev*10+iDigit;
        iNo = iNo / 10;
    }
    if (iRev==itemp)
    {
        return true;
    }

    else 
    {
        return false;
    }
    
    
}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    bRet=Checkpallendrome(iValue);
    if(bRet==true)
    {
        printf("%d is pallendrome number ",iValue);
    }
    else
    {
        printf("%d is not pallendrome number ",iValue);

    }



    


    return 0;
}