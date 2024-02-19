#include<stdio.h>
#include<conio.h>
int main()
{
     int marks = 0;

     printf("\n Enter Your Marks = ");
     scanf("%d",&marks);

     if(marks >= 90)
     {
         printf("\n Grade - A");
     }
     else if(marks >= 80)
     {
         printf("\n Grade - B");
     }
     else if(marks >= 70)
     {
         printf("\n Grade - C");
     }
     else
     {
         printf("\n Grade - D");
     }

     getch();
}
