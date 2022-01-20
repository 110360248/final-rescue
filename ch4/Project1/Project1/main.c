#include <stdio.h>

void main()
{
	int i, j, temp;
	int a[5] = { 26,5,81,7,63 };
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		printf("Loop %d", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
	}
	system("pause");
}