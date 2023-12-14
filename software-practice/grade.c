#include <stdio.h>
#include <math.h>

/**
 * main - A function that compute and print the grade of a student.
 *
 * Return: 0, end the program.
*/

int main(void)
{
	int no_of_grade, grade, i = 0, sum = 0;
	float average;

	printf("Enter the number of grades to be checked\n");
	scanf("%d", &no_of_grade);

	while (i < no_of_grade)
	{
		printf("Enter grade: ");
		scanf("%d", &grade);
		sum = sum + grade;
		average = (double) sum / no_of_grade;
		i++;
	}

	printf("%.2lf\n", average);
    return (0);
}
