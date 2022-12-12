// Print numbers in forward and backward direction

#include <stdio.h>

void Displayf(int iNo)                             // Run loop in forward direction
{
    int iCnt=0;

    for (iCnt = 1; iCnt <= iNo ; iCnt++)                                  // we are running loop in increasing order......                             //&&(isum<=iNo)---->   //this is for optimize the code.....
    {
        printf("%d\n",iCnt);
    }
}





void DisplayB(int iNo)                           // // Run loop in backward direction
{
    int iCnt=0;

    for (iCnt = iNo; iCnt >= 1 ; iCnt--)                                  // we are running loop in decreasing order......                             //&&(isum<=iNo)---->   //this is for optimize the code.....
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    printf("Forward display :\n");
    Displayf(iValue);
    printf("Backward display :\n");
    DisplayB(iValue);



    return 0;
}