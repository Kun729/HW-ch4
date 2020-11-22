#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int A[100];
	int i, j, tmp;
	printf("¿é¤J¸ê®Æ:");
	for (i = 0; i < 99; i++)
	{
		scanf_s("%d", &A[i]);
	}
	int n = sizeof(A) / sizeof(int);
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}