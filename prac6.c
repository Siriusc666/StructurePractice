#include<stdio.h>
#include<string.h>
typedef struct date
{   int year;
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
int main()
{ 
    STUDENT b[5];
    inputarr(b,5);
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

/********** End **********/
