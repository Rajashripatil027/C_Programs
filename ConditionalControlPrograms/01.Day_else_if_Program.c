#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;

        printf("\n\n\t All Week Day");

        printf("\n\t Let's Start ");

        printf("\n\n\t================================");

        printf("\n\t Enter Number In 1-7 To See Day = ");
        scanf("%d",&Num);

        if(Num == 1)
        {
            printf("\n\t Sunday");
        }
        else if(Num == 2)
        {
            printf("\n\t Monday");
        }
        else if(Num == 3)
        {
            printf("\n\t Tuesday");
        }
        else if(Num == 4)
        {
            printf("\n\t Wednesday");
        }
        else if(Num == 5)
        {
            printf("\n\t Thursday");
        }
        else if(Num == 6)
        {
            printf("\n\t Friday");
        }
        else if(Num == 7)
        {
            printf("\n\t Saturday");
        }
        else
        {
            printf("\n\t Invalid Number");
             printf("\n\t Please Enter Valid Number");
        }

        printf("\n\n\t=================================");

        getch();
        return 0;

}
