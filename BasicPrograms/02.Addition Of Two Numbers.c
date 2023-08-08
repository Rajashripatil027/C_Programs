#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0, Sum = 0;

        printf("\n Enter a First Number = ");
        scanf("%d",&Num1);

        printf("\n Enter a Second Number = ");
        scanf("%d",&Num2);

        printf("\n=========================================");

        Sum = Num1 + Num2;

        printf("\n Addition Of %d + %d = %d",Num1,Num2,Sum);

        printf("\n =========================================");

        getch();
        return 0;
}
