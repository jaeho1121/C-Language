#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

struct student {
	int num;
	char name[20];
	int kor;
	int eng;
	int math;
	int sum;
	float avg;
};
void scores(student p[10]);
void print(student p[10]);
void average(student p[10]);

int main(void)
{
	struct student s_list[10];
	char name2[10][20] = { "��ȣ", "����", "��ȣ", "��ȣ", "��ȣ", "��ȣ", "��ȣ", "��ȣ", "��ȣ", "��ȣ", };
	struct student* p = &s_list[10];
	insert(p);
 
	
}

void scores(student p[10])
{
	srand(unsigned)time(NULL);
	for (unt i = 0; i < 10; i++)
	{
		p[i].num = i + 1;
		p[i].kor = rand() % 100 + 1;
		p[i].eng = rand() % 100 + 1;
		p[i].math = rand() % 100 + 1;
		p[i].sum = p[i].kor + p[i].eng + p[i].math;
		p[i].avg = p[i].sum / 3.0;
 	}
	print(p);
}

void print(student p[10])
{
	printf("\t��ȣ\t����\t����\t����\t����\t���\n");
	printf("========================================================================\n");
	for (int i = 0; i < 10; i++) 
	{
		printf("\t%d\t%d\t%d\t%d\t%d\t%.1f\n", p[i].num, p[i].kor, p[i].eng, p[i].math, p[i].sum, p[i].avg);
		printf("========================================================================\n");
	}
	
}

void average(student p[10])
{
	int j1;
	float j2;
	for (int i = 0; i < 10; i++)
	{
		j2 = p[i].avg * 10;
		j1 = j2;
		j2 = j1;
		p[i].avg = j2 / 10;
	}
}