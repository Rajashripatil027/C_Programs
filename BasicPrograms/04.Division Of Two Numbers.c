#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0, Div = 0;

        printf("\n Enter First Number = ");
        scanf("%d",&Num1);

        printf("\n Enter Second Number = ");
        scanf("%d",&Num2);

        printf("===================================");

        Div = Num1 / Num2;

        printf("\n Division of %d / %d = %d",Num1,Num2,Div);

        printf("===================================");

        getch();
        return 0;
}
