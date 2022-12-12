// Accept one number from user and print that number of *on scrren.
#include<stdio.h>

void Display(int iNo){
    int icnt=0;
    icnt=1;
    while(iNo>icnt)
    {
        printf("*\n");
        iNo--;
    }

   
}

int main(){

    int ivalue=0;
    printf("Enter a number ");
    scanf("%d",&ivalue);

    Display(ivalue);


    return 0;
}