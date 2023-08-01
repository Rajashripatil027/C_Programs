#include<stdio.h>
#include<conio.h>

int main()
{
        char Name[50] = " ";
        int RollNo = 0;
        float Per = 0.0;

        printf("\n\n\t Enter Student Details = ");

        //Accept Student Details

        printf("\n\n\t===================================");

        printf("\n\t Enter Name Of Student = ");
        scanf("%s",&Name);

        fflush(stdin);

        printf("\n\t Enter Roll Number Of Student = ");
        scanf("%d",&RollNo);

        printf("\n\t Enter Percentage Of Student = ");
        scanf("%f",&Per);

        printf("\n\n\t===================================");

        //Display Student Details

        printf("\n\n\t Name = %s \n\n\t Roll Number = %d \n\n\t Percentage = %f",Name,RollNo,Per);

        printf("\n\n\t===================================");

        getch();
        return 0;

}
