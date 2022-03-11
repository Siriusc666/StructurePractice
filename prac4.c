#include<stdio.h>
#include<string.h>
typedef struct date
{  int year;
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
void input(STUDENT *s);
void output(STUDENT s);
/********** Begin **********/
int mian()
{
    STUDENT stuInfomation;
    input(&stuInfomation);
    output(stuInfomation);
    return 0;
}

void input(STUDENT *s)
{
    scanf("%d",&s->num);
    scanf("%s",&s->name);
    scanf("%c",&s->sex);
    scanf("%d %d %d",
        &s->birthday.year,
        &s->birthday.month,
        &s->birthday.day);
    scanf("%f",&s->score);
}

void output(STUDENT s)
{
    printf("学号:%d\n",s.num);
    printf("姓名:%s\n",s.name);
    printf("性别:%c\n",s.sex);
    printf("出生日期:%d年%d月%d日\n",
        s.birthday.year,
        s.birthday.month,
        s.birthday.day);
    printf("分数:%.1f",s.score);
}

/********** End **********/

