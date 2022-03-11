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
int equal (STUDENT a, STUDENT b) ;
int serach(STUDENT a[],int n,STUDENT x);
int main()
{ 
	STUDENT b[5],x ={10030,"Lisan",'F',2000,10,14,92.5},y ={10010,"Lisan",'F',2000,10,14,92.5};
	int n = 0;
	inputarr(b,5);
	outputarr(b,5);
	n = serach(b,5,x);	
	if(n>0)
	{
		printf("查找成功，是第%d个学生。\n",n+1);
	}
	else
	{
		printf("查无此人。\n");
	}
	n = serach(b,5,y);	
	if(n>0)
	{
		printf("查找成功，是第%d个学生。\n",n+1);
	}
	else
	{
		printf("查无此人。\n");
	}
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

int equal (STUDENT a, STUDENT b)
{
    if(strcmp(a.name,b.name) != 0)  return 0;
    else if (a.num != b.num)    return 0;
    else if (a.sex != b.sex)    return 0;
    else if (a.birthday.year != b.birthday.year)    return 0;
    else if (a.birthday.month != a.birthday.month)  return 0;
    else if (a.birthday.day != b.birthday.day)  return 0;
    else if (a.score != b.score)    return 0;
    else    return 1;
}


int serach(STUDENT a[],int n,STUDENT x)
{
    int i;
    for(i = 0;i < n;i++)
    {
        if(strcmp(x.name,a[i].name) == 0 && equal(x,a[i]) == 1) 
        {
            return i + 1;
        }
    }
    return 0;
}
/********** End **********/
