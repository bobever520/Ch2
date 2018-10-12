#include <stdio.h>
#include <stdlib.h>

int Han_Xin_3()
{
	char s1 = 'X';
	char s2 = '-';
	int i, j, temp, temp2;

	temp = 4;
	temp2 = 5;

	printf("(3) \n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp))
			{
				printf("%c", s1);
				temp--;
			}
			else if ((i < 5) && (j == temp2))
				printf("%c", s1);
			else if (i == 4)
				printf("%c", s1);
			else
				printf("%c", s2);

		}
		temp2++;
		puts("\n");
	}

	//--------------------------------------------------------------------------------

}