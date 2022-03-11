#include<stdio.h>
#include<string.h>
struct date
{
	int year;
  int month;
  int day;  
};
struct stu
{
  int num;
  char name[20];
  char sex;
  struct date birth;
  float score;
};  
int main()
{
  struct stu s1 = {10010,"zhangsan",'m',2000,5,4,84.5}, s2, s3;
  /*****输入学生信息存放在变量s2中*****/
    /********** Begin **********/
    scanf("%d",&s2.num);
    scanf("%s",&s2.name);
    scanf(" %c",&s2.sex);
    scanf("%d %d %d" ,&s2.birth.year,&s2.birth.month,&s2.birth.day);
    scanf("%f",&s2.score);
    /********** End **********/
    /*****交换两个结构体变量s1和s2*****/
    /********** Begin **********/
    s3.num = s1.num;
    strcpy(s3.name,s1.name);
    s3.sex = s1.sex;
    s3.birth.year = s1.birth.year;
    s3.birth.month = s1.birth.month;
    s3.birth.day = s1.birth.day;
    s3.score = s1.score;

    s1.num = s2.num;
    strcpy(s1.name,s2.name);
    s1.sex = s2.sex;
    s1.birth.year = s2.birth.year;
    s1.birth.month = s2.birth.month;
    s1.birth.day = s2.birth.day;
    s1.score = s2.score;

    s2.num = s3.num;
    strcpy(s2.name,s3.name);
    s2.sex = s3.sex;
    s2.birth.year = s3.birth.year;
    s2.birth.month = s3.birth.month;
    s2.birth.day = s3.birth.day;
    s2.score = s3.score;
    /********** End **********/
    /*****输出结构体变量s1和s2的成员*****/
    /********** Begin **********/
    printf("学号：%d\n",s1.num);
    printf("姓名：%s\n",s1.name);
    printf("性别：%c\n",s1.sex);
    printf("出生日期：%d年%d月%d日\n",s1.birth.year,s1.birth.month,s1.birth.day);
    printf("成绩：%d\n",(int)s1.score);

    printf("学号：%d\n",s2.num);
    printf("姓名：%s\n",s2.name);
    printf("性别：%c\n",s2.sex);
    printf("出生日期：%d年%d月%d日\n",s2.birth.year,s2.birth.month,s2.birth.day);
    printf("成绩：%d\n",(int)s2.score);

    /********** End **********/
  return 0;
}


