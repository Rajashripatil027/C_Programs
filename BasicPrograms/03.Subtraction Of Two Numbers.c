#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0, Sub = 0;

        printf("\n Enter First Number = ");
        scanf("%d",&Num1);

        printf("\n Enter Second Number = ");
        scanf("%d",&Num2);

        printf("\n======================================");

        Sub = Num1 - Num2;

        printf("\n Subtraction Of %d - %d = %d",Num1,Num2,Sub);

        printf("\n======================================");

        getch();
        return 0;

}
