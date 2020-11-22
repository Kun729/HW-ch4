#include <stdio.h> 
#include <stdlib.h> 

void main()
{
	int i, j, tmp;
	int n[100];
	int size;

	printf("輸入資料數:");
	scanf_s("%d", &size);

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", n[size]);
	}

	for (i = 0; i < size - 1; i++)
	{
		
		for (j = 0; j < size-1; j++)
		{
			if (n[j] > n[j + 1])
			{
				tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
		printf("Loop %d:", i);
		for (j = 0; j < size; j++)
		{
			printf("%4d", n[j]);
		}
		printf("\n");
	}
	system("pause");
}