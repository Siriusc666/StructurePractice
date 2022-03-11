#include<stdio.h>
typedef struct complex
{
	float real;
	float imag;
}COMPLEX;
void input(COMPLEX *s);
void output(COMPLEX s);
COMPLEX add(COMPLEX str1,COMPLEX str2);
COMPLEX sub(COMPLEX str1,COMPLEX str2);
COMPLEX mul(COMPLEX str1,COMPLEX str2);
COMPLEX div(COMPLEX str1,COMPLEX str2);
/********** Begin **********/
void main()
{
    COMPLEX str1,str2,str3;
    char opertor;

    input(&str1);
    scanf("%c",&opertor);
    input(&str2);

    switch (opertor)
    {
    case '+':
        str3 = add(str1,str2);
        break;
    case '-':
        str3 = sub(str1,str2);
        break;
    case '*':
        str3 = mul(str1,str2);
        break;
    case '/':
        if(str2.real != 0 || str2.imag != 0)    str3 = div(str1,str2);
        break;
    default:
        printf("error");
        break;
    }
    output(str1);
    printf(" %c ",opertor);
    output(str2);
    printf(" = ");
    output(str3);
}

void input(COMPLEX *s)
{
    scanf("%f %f",&s->real,&s->imag);
}

COMPLEX add(COMPLEX str1,COMPLEX str2)
{
    COMPLEX str3;
    str3.real = str1.real + str2.real;
    str3.imag = str1.imag + str2.imag;
    return str3;
}

COMPLEX sub(COMPLEX str1,COMPLEX str2)
{
    COMPLEX str3;
    str3.real = str1.real - str2.real;
    str3.imag = str1.imag - str2.imag;
    return str3;
}

COMPLEX mul(COMPLEX str1,COMPLEX str2)
{
    COMPLEX str3;
    str3.real = str1.real * str2.real - str1.imag * str2.imag;
    str3.imag = str1.real * str2.imag + str1.imag * str2.real;
    return str3;
}

COMPLEX div(COMPLEX str1,COMPLEX str2)
{
    COMPLEX str3;
    str3.real = (str1.real * str2.real + str1.imag * str2.imag) / (str2.real * str2.real + str2.imag * str2.imag);
    str3.imag = (-str1.real * str2.imag + str1.imag * str2.real) / (str2.real * str2.real + str2.imag * str2.imag);
    return str3;
}

void output(COMPLEX s)
{
    if(s.imag > 0)  printf("(%.1f+%.1fi)",s.real,s.imag);
    else printf("(%.1f-%.1fi)",s.real,-s.imag);
}
/********** End **********/