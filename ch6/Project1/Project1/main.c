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
	student stul = { "970101","四子一甲","王小明",61,71,81 };
	student *ps;
	ps = &stul;     //ps指向stul的位址
	printf("\n");
	printf("================================\n");
	printf("學號  班級  姓名  國文 英文 數學\n");
	printf("================================\n");
	printf("%6s %-10s %-8s %4d %4d %4d\n", stul.num, stul .class, stul.name, stul.score[0], stul.score[1], stul.score[2]);
	printf("\n 呼叫函式前\n\n");
	sub(ps);
	printf("\n 呼叫函式後\n\n");
	printf("%6s %-10s %-8s %4d %4d %4d\n", stul.num, stul .class, stul.name, stul.score[0], stul.score[1], stul.score[2]);
	printf("\n");
	system("pause");
}

void sub(student *p)
{
	printf("*************************\n");
	printf("正在執行sub函式\n");
	p->score[0] += 10;
	p->score[1] += 10;
	p->score[2] += 10;
	printf("%6s %-10s %-8s %4d %4d %4d\n", p->num, p->class, p->name, p->score[0], p->score[1], p->score[2]);
	printf("*************************\n");
}