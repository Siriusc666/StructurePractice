#include<stdio.h>
typedef struct date
{
	int year;
	int month;
	int day;
}DATE;

int main()
{
    /********** Begin **********/
    DATE d;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int num = 0,i;
    scanf("%d %d %d",&d.year,&d.month,&d.day);
    if(d.year % 4 == 0 && d.year % 400 != 0)
    {
        a[1] = 29;
    }

    for(i = 0;i < d.month - 1;i++)
    {
        num += a[i];
    }
    num += d.day; 
    printf("它是%d的第%d天",d.year,num);
    /********** End **********/
    return 0;
}
