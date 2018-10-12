#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	char s1 = 'X';
	char s2 = '-';
	int i, j, temp, temp2;

	temp = 9;


	printf("(5) \n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", s1);
			}
			else if (j == temp)
			{
				printf("%c", s1);
				temp--;
			}
			else
				printf("%c", s2);

		}
		puts("\n");
	}

}