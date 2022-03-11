#include<stdio.h>
#define N 10
typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
void inputarr(DATE s[ ], int n);
void outputarr(DATE s[],int n);
int compdate(DATE a, DATE b);
void swap(DATE *p1,DATE *p2);
void sortdate(DATE s[],int n);
int main()
{
	DATE today[N];
	int n;
	scanf("%d",&n);
	inputarr(today,n);
	sortdate(today,n);
	outputarr(today,n);	
	return 0;
}
/********** Begin **********/
void inputarr(DATE s[ ], int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d %d %d",&s[i].year,&s[i].month,&s[i].day);
    }
}

void outputarr(DATE s[],int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        printf("%d年%d月%d日\n",s[i].year,s[i].month,s[i].day);
    }
}

int compdate(DATE a, DATE b)
{
    if(a.year > b.year) return 1;
    else if(a.year < b.year)    return -1;
    else if(a.month > b.month)  return 1;
    else if(a.month < b.month)  return -1;
    else if(a.day > b.day)  return 1;
    else if(a.day < b.day)  return -1;
    else    return 0;
}

void swap(DATE *p1,DATE *p2)
{
    DATE temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void sortdate(DATE s[],int n)
{
    int i,j,k;
    for(i = 0;i < n - 1;i++)
    {
        k = i;
        for(j = i + 1;j < n;j++)
        {
            if(compdate(s[j],s[k]) > 0) k = j;
        }

        if(k != i)  swap(&s[k],&s[i]);
    }
}
/********** End **********/