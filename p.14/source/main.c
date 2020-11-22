#include<stdio.h>
#include<stdlib.h>
#define students 3
#define exams 4

int miniumu(const int grades[][exams], int puplis, int tests);
int maxiumu(const int grades[][exams], int puplis, int tests);
double average(const int setofgrade[], int tests);
void printarray(const int grades[][exams], int puplis, int tests);

int main(void)
{
	int student;
	const int studentgrades[students][exams] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };

	printf("The array is:\n");
	printarray(studentgrades, students, exams);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n", miniumu(studentgrades, students, exams), maxiumu(studentgrades, students, exams));

	for (student = 0; student < students; student++)
	{
		printf("The average grade for student %d is %.2f\n",student,average(studentgrades[student],exams));
	}
	system("pause");
	return 0;
}
void printarray(const int grades[][exams], int puplis, int tests)
{
	int i, j;

	printf("		[0]  [1]  [2]  [3]");
	for (i = 0; i < puplis; i++)
	{
		printf("\nstudentGrades[%d]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}
int miniumu(const int grades[][exams], int puplis, int tests)
{
	int i, j;
	int lowgrade = 100;
	for (i = 0; i < puplis; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowgrade)
			{
				lowgrade = grades[i][j];
			}
		}
	}
	return lowgrade;
}
int maxiumu(const int grades[][exams], int puplis, int tests)
{
	int i, j;
	int highgrade = 0;
	for (i = 0; i < puplis; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highgrade)
			{
				highgrade = grades[i][j];
			}
		}
	}
	return highgrade;
}
double average(const int setofgrade[], int tests)
{
	int i, total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setofgrade[i];
	}
	return (double)total / tests;
}