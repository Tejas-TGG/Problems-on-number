#include <stdio.h>
// coin size       price
// 1gm             4000
// 2gm             8000
// 5gm             20000
// 10gm            40000

void JwelersPotal(int iweight)
{

    switch(iweight)
    {
        case 1:
        printf("your bill amount is 4000\n ");
        break;
        case 2:
        printf("your bill amount is 8000\n ");
        break;
        case 5:
        printf("your bill amount is 20000\n ");
        break;
        case 10:
        printf("your bill amount is 40000\n ");
        break;

        default:
        printf("Invalid weight");

    }


}

int main()
{
    int ivalue=0;
  
    

    printf("enter the gold coin size that you want to purchase\n ");
    scanf("%d",&ivalue);

    JwelersPotal(ivalue);


    
    return 0;
}