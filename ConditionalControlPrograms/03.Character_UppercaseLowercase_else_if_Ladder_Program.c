#include<stdio.h>
#include<conio.h>

int main()
{
        char Let = '\0';

        printf("\n Enter Any Character To See The Letter Is in Upper Case Or Lower Case = ");
        scanf("%c",&Let);

        if(Let >= 'A' && Let <= 'Z')
        {
            printf("\n %c Letter Is In Upper Case",Let);
        }
        else
        {
            printf("\n &c The Letter Is In Lower Case",Let);
        }

        getch();
        return 0;

}
