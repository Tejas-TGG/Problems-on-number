// accept number form user and summasion of it like if input is 5 the 1+2+3+4+5 output =15
#include <stdio.h>

int Summation(int iValue)
{
    int isum = 0;
    int icnt=0;
     if (iValue < 0)
    {
        iValue=-iValue;
    }

    for(icnt=1;icnt<=iValue; icnt++){

       isum=isum+icnt;                            //see book for these logic and whatsapp vrcha photo bgh marvop vrcha
        
    }

    return isum;  
}

int main()
{
    int iNo = 0;
    int iret=0;
    printf("Enter a number :");
    scanf("%d", &iNo);

    iret=Summation(iNo);
    printf("addition is %d:",iret);
    return 0;
}