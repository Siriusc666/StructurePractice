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
    DATE dateSeque;
    int result;
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i;

    scanf("%d %d %d",&dateSeque.year,&dateSeque.month,&dateSeque.day);
    if(dateSeque.year % 4 == 0 && dateSeque.year % 400 != 0)    month[1] = 29;

    for(i = 0;i < dateSeque.month - 1;i++)
    {
        result += month[i];
    }
    result += dateSeque.day;

    printf("它是%d年的第%d天",dateSeque.year,result);
    /********** End **********/
    return 0;
}