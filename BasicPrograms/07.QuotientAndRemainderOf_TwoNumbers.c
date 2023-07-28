#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0;
        printf("\n Enter First Number = "); //2
        scanf("%d",&Num1);

        printf("\n Enter Second Number ="); //20
        scanf("%d",&Num2);

        printf("\n==============================");

        printf("\n Quotient = %d",Num1/Num2); //0
        printf("\n Remainder = %d",Num1%Num2); //2

        printf("\n==============================");

        getch();
        return 0;
}
