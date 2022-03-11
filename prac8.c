#include<stdio.h>
#include<string.h>
typedef struct date
{  
	int year;
	int month;
	int day;
}DATE;
typedef struct student
{
	int num;
	char name[20];
	char sex;
	DATE birthday;
	float score;
}STUDENT;

void inputarr(STUDENT s[ ], int n);
void outputarr(STUDENT s[ ], int n);
int compname(STUDENT a, STUDENT b);
void sortname(STUDENT s[],int n);

int main()
{ 
	STUDENT b[5];
	inputarr(b,5);
	sortname(b,5);
	outputarr(b,5);	
	return 0;
}

/********** Begin **********/
void inputarr(STUDENT s[ ], int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&s[i].num);
        scanf("%s",&s[i].name);
        scanf(" %c",&s[i].sex);
        scanf("%d %d %d",
            &s[i].birthday.year,
            &s[i].birthday.month,
            &s[i].birthday.day);
        scanf("%f",&s[i].score);
    }
}

void outputarr(STUDENT s[ ], int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        printf("学号:%d\t",s[i].num);
        printf("姓名:%s\t",s[i].name);
        printf("性别:%c\t",s[i].sex);
        printf("出生日期:%d-%d-%d\t",
            s[i].birthday.year,
            s[i].birthday.month,
            s[i].birthday.day);
        printf("成绩:%.1f\n",s[i].score);
    }
}

int compname(STUDENT a, STUDENT b)
{
    if(strcmp(a.name,b.name) > 0)   return 1;
    else if(strcmp(a.name,b.name) == 0) return 0;
    else    return -1;
}

void sortname(STUDENT s[],int n)
{
    STUDENT temp;
    int i,j,k;
    for(i = 0;i < n - 1;i++)
    {
        k = i;
        for(j = i + 1;j < n;j++)
        if(compname(s[k],s[j]) < 0)
        {
            k = j;
        }

        if(k != i)
        {
            temp = s[i];
            s[i] = s[k];
            s[k] = temp;
        }
    }
}
/********** End **********/
