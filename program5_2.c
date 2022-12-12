// Accept one number from from user and check whether number is even or odd 
#include<stdio.h>
#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL check(int iNo)
{
    if (iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


}

int main(){

    int ivalue=0;
    BOOL bRet=FALSE;
    printf("Enter a number ");
    scanf("%d",&ivalue);

    bRet= check(ivalue);

    if(bRet==1)
    {
        printf("number is even");
    }
    else
    {
         printf("number is odd");
    }


    return 0;
}