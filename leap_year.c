#include<stdio.h>
int main()
{  int start,stop,i;
  printf("Enter starting year from which you want to find the leap year and then enter the last year upto where you want to check: \n");
  printf("Starting year= ");
  scanf("%d",&start);
  printf("Last year= ");
  scanf("%d",&stop);
for(i=start;i<=stop;i++)
{
    if((i%4==0 && i%100!=0)|| (i%100==0 && i%400==0))
    {
        printf("%d : Leap year!\n",i);
    }
}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
