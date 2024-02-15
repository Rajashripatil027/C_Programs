#include<stdio.h>
#include<conio.h>
int main()
{
     int x = 0,a = 0,b = 0;

     printf("\n Enter Two Numbers : ");

     printf("\n To Check Which is Grater");

     scanf("%d%d",&a,&b);

     x = a >= b ?  a : b;
     printf(" Grater Number is %d",x);

     getch();


}
