// Accept one number from user if number is less than 10 then print "hello"  otherwise print "demo".
#include<stdio.h>

void Display(int iNo)
{
   if(iNo<10)
   {
       printf("Hello");
   }
   else
   {
       printf("Demo");
   }
}

int main(){

    int ivalue=0;
    printf("Enter a number ");
    scanf("%d",&ivalue);

    Display(ivalue);


    return 0;
}