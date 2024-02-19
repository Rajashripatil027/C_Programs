#include<stdio.h>
#include<conio.h>
int main()
{


     int a = 0,b = 0,c = 0;

     printf("\nEnter Three Numbers = ");

     scanf("%d%d%d",&a,&b,&c);

      if(a > b)
      {
          printf("\n Number %d is grater From b and c",a);

      }
      else if(b > c)
      {
          printf("\n Number %d is grater than a and c",b);

      }
      else
      {
          printf("\n Number %d is grater than a and b %",c);
      }

      printf("\n\n\tThank You");

      getch();

}
