#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;

        printf("\n\n All Months In Year");

        printf("\n\n==========================================");

        printf("\n\n Enter 1-12 Number To Check Month = ");
        scanf("%d",&Num);

        if(Num == 1)
        {
            printf("\n January ");
        }
        else if( Num == 2)
        {
            printf("\n February");
        }
        else if( Num == 3)
        {
            printf("\n March");
        }
        else if( Num == 4)
        {
            printf("\n April");
        }
        else if( Num == 5)
        {
            printf("\n May");
        }
        else if( Num == 6)
        {
            printf("\n June");
        }
        else if( Num == 7)
        {
            printf("\n July");
        }
        else if( Num == 8)
        {
            printf("\n August");
        }
        else if( Num == 9)
        {
            printf("\n September");
        }
        else if( Num == 10)
        {
            printf("\n Octomber");
        }
        else if( Num == 11)
        {
            printf("\n November");
        }
        else if( Num == 12)
        {
            printf("\n December");
        }
        else
        {
            printf("\n\n Invalid Number!");
            printf("\n Please Check Your Number");
        }
        printf("\n\n==========================================");

        getch();
        return 0;
}
