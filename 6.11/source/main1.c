#include <stdio.h> 
#include <stdlib.h> 

void main()
{
	int i, j, tmp;
	int n[10] = {46,12,63,95,82,3,37,21,54,79};
	int m[10] = {46,12,63,95,82,3,37,21,54,79};

	printf("未改良\n");

	for (i = 0; i < 9; i++)
	{

		for (j = 0; j < 9; j++)
		{
			if (n[j] > n[j + 1])
			{
				tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
		printf("Loop %d:", i);
		for (j = 0; j < 10; j++)
		{
			printf("%4d", n[j]);
		}
		printf("\n");
	}

	printf("改良後\n");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (m[j] > m[j + 1])
			{
				tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}
		}
		if (m[0] < m[1] && m[1] < m[2] && m[2] < m[3] && m[3] < m[4] && m[4] < m[5] && m[5] < m[6] && m[6] < m[7] && m[7] < m[8] && m[8] < m[9])
		{
			printf("Loop %d:", i);
			for (j = 0; j < 10; j++)
			{
				printf("%4d", m[j]);
			}
			printf("\n");
			break;
		}
		printf("Loop %d:", i);
		for (j = 0; j < 10; j++)
		{
			printf("%4d", m[j]);
		}
		printf("\n");
	}
	system("pause");
}