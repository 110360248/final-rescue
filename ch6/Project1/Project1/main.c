#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
	char num[7];
    char class[20];
	char name[20];
	int score[3];
}student;

void sub(student *p);

void main(void)
{
	student stul = { "970101","�|�l�@��","���p��",61,71,81 };
	student *ps;
	ps = &stul;     //ps���Vstul����}
	printf("\n");
	printf("================================\n");
	printf("�Ǹ�  �Z��  �m�W  ��� �^�� �ƾ�\n");
	printf("================================\n");
	printf("%6s %-10s %-8s %4d %4d %4d\n", stul.num, stul .class, stul.name, stul.score[0], stul.score[1], stul.score[2]);
	printf("\n �I�s�禡�e\n\n");
	sub(ps);
	printf("\n �I�s�禡��\n\n");
	printf("%6s %-10s %-8s %4d %4d %4d\n", stul.num, stul .class, stul.name, stul.score[0], stul.score[1], stul.score[2]);
	printf("\n");
	system("pause");
}

void sub(student *p)
{
	printf("*************************\n");
	printf("���b����sub�禡\n");
	p->score[0] += 10;
	p->score[1] += 10;
	p->score[2] += 10;
	printf("%6s %-10s %-8s %4d %4d %4d\n", p->num, p->class, p->name, p->score[0], p->score[1], p->score[2]);
	printf("*************************\n");
}